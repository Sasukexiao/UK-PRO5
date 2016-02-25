/*
 *
 * (C) COPYRIGHT ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 */





/**
 * @file mali_kbase_pm_demand.c
 * A simple demand based power management policy
 */

#include <mali_kbase.h>
#include <mali_kbase_pm.h>

static u64 demand_get_core_mask(struct kbase_device *kbdev)
{
	u64 desired = kbdev->shader_needed_bitmap | kbdev->shader_inuse_bitmap;

	if (0 == kbdev->pm.active_count)
		return 0;

	return desired;
}

static mali_bool demand_get_core_active (struct kbase_device *kbdev)
{
	if (0 == kbdev->pm.active_count)
		return MALI_FALSE;

	return MALI_TRUE;
}

static void demand_init(struct kbase_device *kbdev)
{
	CSTD_UNUSED(kbdev);
}

static void demand_term(struct kbase_device *kbdev)
{
	CSTD_UNUSED(kbdev);
}

/** The @ref kbase_pm_policy structure for the demand power policy.
 *
 * This is the static structure that defines the demand power policy's callback and name.
 */
const kbase_pm_policy kbase_pm_demand_policy_ops = {
	"demand",			/* name */
	demand_init,			/* init */
	demand_term,			/* term */
	demand_get_core_mask,		/* get_core_mask */
	demand_get_core_active,		/* get_core_active */
	0u,				/* flags */
	KBASE_PM_POLICY_ID_DEMAND,	/* id */
};

KBASE_EXPORT_TEST_API(kbase_pm_demand_policy_ops)

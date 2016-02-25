#ifndef _LINUX_FTS_I2C_H_
#define _LINUX_FTS_I2C_H_

#define FTS_POWER_ON     1
#define FTS_POWER_OFF    0

#define FTS_TS_DRV_NAME                     "fts"
#define FTS_TS_DRV_VERSION                  "1108"
#define FTS_ID0                             0x39
#define FTS_ID1                             0x80

#define FTS_FIFO_MAX                        32
#define FTS_EVENT_SIZE                      8

#define X_AXIS_MAX                          1080 
#define X_AXIS_MIN                          0
#define Y_AXIS_MAX                          1920
#define Y_AXIS_MIN                          0

#define PRESSURE_MIN                        0
#define PRESSURE_MAX                        127

#define FINGER_MAX                          10
#define STYLUS_MAX                          1
#define TOUCH_ID_MAX                        (FINGER_MAX + STYLUS_MAX)

#define AREA_MIN                            PRESSURE_MIN
#define AREA_MAX                            PRESSURE_MAX

#define HALL_COVER	1
#define HALL_UNCOVER 0
/*
 * Firmware
 */
#define MODE_RELEASE_ONLY              0
#define MODE_CONFIG_ONLY               1
#define MODE_RELEASE_AND_CONFIG_64     2

/* Delay to be wait for flash command completion */
#define FTS_FLASH_COMMAND_DELAY    3000

/*
 * Events ID
 */
#define EVENTID_NO_EVENT                    0x00
#define EVENTID_ENTER_POINTER               0x03
#define EVENTID_LEAVE_POINTER               0x04
#define EVENTID_MOTION_POINTER              0x05
#define EVENTID_HOVER_ENTER_POINTER         0x07
#define EVENTID_HOVER_MOTION_POINTER        0x08
#define EVENTID_HOVER_LEAVE_POINTER         0x09
#define EVENTID_PROXIMITY_ENTER             0x0B
#define EVENTID_PROXIMITY_LEAVE             0x0C
#define EVENTID_BUTTON_STATUS               0x0E
#define EVENTID_ERROR                       0x0F
#define EVENTID_CONTROLLER_READY            0x10
#define EVENTID_SLEEPOUT_CONTROLLER_READY   0x11
#define EVENTID_STATUS                      0x16
#define EVENTID_GESTURE                     0x20
#define EVENTID_PEN_ENTER                   0x23
#define EVENTID_PEN_LEAVE                   0x24
#define EVENTID_PEN_MOTION                  0x25

#define EVENTID_LAST                        (EVENTID_PEN_MOTION+1)
/*
 * Commands
 */
#define INT_ENABLE                          0x41
#define INT_DISABLE                         0x00
#define READ_STATUS                         0x84
#define READ_ONE_EVENT                      0x85
#define READ_ALL_EVENT                      0x86
#define SLEEPIN                             0x90
#define SLEEPOUT                            0x91
#define SENSEOFF                            0x92
#define SENSEON                             0x93
#define HOVER_ON                            0x95
#define SELF_SENSEON                        0x95
#define HOVER_OFF                           0x94
#define PROXIMITY_ON                        0x97
#define GESTURE_ON                          0x9D
#define GLOVE_OFF                           0x9E
#define GLOVE_ON                            0x9F
#define FLUSHBUFFER                         0xA1
#define FORCECALIBRATION                    0xA2
#define CX_TUNING                           0xA3
#define SELF_TUNING                         0xA4
#define ITO_CHECK                     		0xA7
#define ENTER_GESTURE_MODE                  0xAD
#define CONFIG_BACKUP                       0xFB
#define TUNING_BACKUP                       0xFC

/* Flash programming */
#define FLASH_LOAD_FIRMWARE                 0xF0
#define FLASH_PROGRAM                       0xF2
#define FLASH_ERASE                         0xF3
#define FLASH_READ_STATUS                   0xF4
#define FLASH_UNLOCK                        0xF7
#define FLASH_LOAD_INFO_BLOCK               0xF8
#define FLASH_ERASE_INFO_BLOCK              0xF9
#define FLASH_PROGRAM_INFO_BLOCK            0xFA

#define FLASH_LOAD_FIRMWARE_OFFSET        0x0000
#define FLASH_LOAD_INFO_BLOCK_OFFSET      0xF800

#define FLASH_UNLOCK_CODE_0                 0x74
#define FLASH_UNLOCK_CODE_1                 0x45

#define FLASH_STATUS_UNKNOWN                (-1)
#define FLASH_STATUS_READY                  (0)
#define FLASH_STATUS_BUSY                   (1)

#define FLASH_LOAD_CHUNK_SIZE               (2048)
#define FLASH_LOAD_COMMAND_SIZE             (FLASH_LOAD_CHUNK_SIZE + 3)

/*
 * Gesture direction
 */
#define GESTURE_RPT_LEFT                    1
#define GESTURE_RPT_RIGHT                   2
#define GESTURE_RPT_UP                      3
#define GESTURE_RPT_DOWN                    4


/*
 * Configuration mode
 */
#define MODE_NORMAL                         0
#define MODE_HOVER                          1
#define MODE_GESTURE						2
#define MODE_GLOVE							3
#define MODE_COVER							4

/*
 * Status Event Field:
 *     id of command that triggered the event
 */
#define FTS_STATUS_MUTUAL_TUNE              0x01
#define FTS_STATUS_SELF_TUNE                0x02
#define FTS_FLASH_WRITE_CONFIG              0x03
#define FTS_FLASH_WRITE_COMP_MEMORY         0x04
#define FTS_FORCE_CAL_SELF_MUTUAL           0x05
#define FTS_FORCE_CAL_SELF                  0x06
#define FTS_WATER_MODE_ON                   0x07
#define FTS_WATER_MODE_OFF                  0x08

/*meizu gesture*/
#define GESTURE_ERROR                   0x00 

/*double tap */
#define DOUBLE_TAP                      0xA0 

/*swipe  */
#define SWIPE_X_LEFT                    0xB0 
#define SWIPE_X_RIGHT                   0xB1 
#define SWIPE_Y_UP                      0xB2
#define SWIPE_Y_DOWN                    0xB3 

/*Unicode */
#define UNICODE_E                       0xC0
#define UNICODE_C                       0xC1
#define UNICODE_W                       0xC2
#define UNICODE_M                       0xC3
#define UNICODE_O                       0xC4
#define UNICODE_S                       0xC5
#define UNICODE_V_UP                    0xC6
#define UNICODE_V_DOWN                  0xC7
#define UNICODE_V_L                     0xC8
#define UNICODE_V_R                     0xC9
#define UNICODE_Z                       0xCA

/*synaptics Unicode value*/
#define SYN_UNICODE_E                   0x65
#define SYN_UNICODE_C                   0x63
#define SYN_UNICODE_W                   0x77
#define SYN_UNICODE_M                   0x6D
#define SYN_UNICODE_S                   0x73
#define SYN_UNICODE_Z                   0x7A

/*disable gesture value*/
#define ALL_CTR                         0x01
#define TAP_CTR                         0x02
#define UNICODE_CTR                     0x03
#define SWIPE_CTR                       0x04

#define SWIPE_INDEX                     0 
#define TAP_INDEX                       1
#define UNICODE_INDEX                   2 
#define ALL_INDEX                       3

#define EXP_FN_WORK_DELAY_MS  5000

enum margin_mode{
	MAR_LEFT = 0,
	MAR_RIGHT,
	MAR_TOP,
	MAR_BOTTOM,
	MAR_LAST,
};

#define TP_TAG		"[touchscreen]: "
#define tp_log(fmt, arg...)		printk(TP_TAG fmt, ##arg);

struct fts_i2c_platform_data {
//	int (*power) (bool on);
	int irq_gpio;
	int reset_gpio;
	const char *pwr_reg_name;
	const char *bus_reg_name;
	
};

/*
 * Forward declaration
 */
struct fts_ts_info;

/*
 * Dispatch event handler
 */
typedef unsigned char * (*event_dispatch_handler_t)
                                (struct fts_ts_info *info, unsigned char *data);

/*
 * struct fts_ts_info - FTS capacitive touch screen device information
 * @dev:                  Pointer to the structure device
 * @client:               I2C client structure
 * @input_dev             Input device structure
 * @work                  Work thread
 * @event_wq              Event queue for work thread
 * @cmd_done              Asyncronous command notification
 * @event_dispatch_table  Event dispatch table handlers
 * @fw_version            Firmware version
 * @attrs                 SysFS attributes
 * @mode                  Device operating mode
 * @touch_id              Bitmask for touch id (mapped to input slots)
 * @buttons               Bitmask for buttons status
 * @timer                 Timer when operating in polling mode
 * @early_suspend         Structure for early suspend functions
 * @power                 Power on/off routine
 */
struct fts_ts_info {
        struct device            *dev;
        struct i2c_client        *client;
        struct input_dev         *input_dev;

        struct work_struct        work;
        struct workqueue_struct  *event_wq;

        struct delayed_work        fwu_work;
        struct workqueue_struct  *fwu_workqueue;
        struct completion         cmd_done;

        event_dispatch_handler_t *event_dispatch_table;

        unsigned int              fw_version;
        unsigned int              config_id;

        struct attribute_group    attrs;

        unsigned int              mode;
        unsigned long             touch_id;
        unsigned int              buttons;

#ifdef FTS_USE_POLLING_MODE
        struct hrtimer timer;
#endif
#ifdef CONFIG_HAS_EARLYSUSPEND
        struct early_suspend early_suspend;
#endif

        //int (*power)(bool on);

        struct fts_i2c_platform_data *bdata;
        struct regulator *pwr_reg;
        struct regulator *bus_reg;

        bool gesture_enable; //show the gesture state: 1: on, 0: off.
        bool gesture_disall;
        int gesture_value;
        char gesture_mask[4];
        char gesture_reg[2];//0: 0x01DC.

        int glove_bit;//show the glove state: 1:on, 0: off.
		int hover_bit;
        bool fw_force;

		int cover_bit;
		int resume_bit;
		int fwupdate_stat;
		int touch_debug;
		struct mutex fts_mode_mutex;
		
		struct notifier_block cover_notifier;
		
		struct notifier_block notifier;
		bool sensor_sleep;
		bool stay_awake;
		struct wake_lock wakelock;

};


#endif


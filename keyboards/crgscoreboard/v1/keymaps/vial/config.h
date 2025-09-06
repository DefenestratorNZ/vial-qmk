#pragma once
/* Select hand configuration */
#define MASTER_LEFT
#define VIAL_KEYBOARD_UID {0xEE, 0xA0, 0xE4, 0x69, 0x2A, 0x7E, 0x20, 0x57}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0}
#define VIAL_UNLOCK_COMBO_COLS { 0, 1}
// Config to make MOD TAP keys more responsive
#define PERMISIVE_HOLD

// Disable some of the features that we do not use to save space
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT

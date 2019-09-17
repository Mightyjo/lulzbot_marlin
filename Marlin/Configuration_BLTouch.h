#ifndef CONFIGURATION_BLTOUCH
#define CONFIGURATION_BLTOUCH


#define BLTOUCH_BLTOUCH
#define BLTOUCH_SERVO_DELAY 100
#define BLTOUCH_PROBING_HEATERS_OFF

/**
 *   Z Probe to nozzle (X,Y) offset, relative to (0, 0).
 *   X and Y offsets must be integers.
 *
 *   In the following example the X and Y offsets are both positive:
 *   #define X_PROBE_OFFSET_FROM_EXTRUDER 10
 *   #define Y_PROBE_OFFSET_FROM_EXTRUDER 10
 *
 *      +-- BACK ---+
 *      |           |
 *    L |    (+) P  | R <-- probe (20,20)
 *    E |           | I
 *    F | (-) N (+) | G <-- nozzle (10,10)
 *    T |           | H
 *      |    (-)    | T
 *      |           |
 *      O-- FRONT --+
 *    (0,0)
 */
#define BLTOUCH_X_PROBE_OFFSET_FROM_EXTRUDER -23  // X offset: -left  +right  [of the nozzle]
#define BLTOUCH_Y_PROBE_OFFSET_FROM_EXTRUDER -21  // Y offset: -front +behind [the nozzle]
#define BLTOUCH_Z_PROBE_OFFSET_FROM_EXTRUDER 6   // Z offset: -below +above  [the nozzle]

#endif /* CONFIGURATION_BLTOUCH */

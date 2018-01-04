#ifndef CONST_H
#define CONST_H

#include <unistd.h>

/* GENERAL */
#define Sleep( msec ) usleep(( msec ) * 1000 )
#define NB_SENSOR_MESURE       8    // Number of mesures to average
#define TRESHOLD_COLOR        30    // Dist in mm to detect color reliably
#define TRESHOLD_MANEUVER    150    // Dist in mm to maneuver correctly
#define TRESHOLD_CHECK_OBST  250    // Dist in mm to go check the obst type
#define THRESHOLD_ULTRASONIC_TACHO_SUP  135   // Max angle of rotation of the tacho rotating the head of the robot
#define THRESHOLD_ULTRASONIC_TACHO_INF  -130  // Min angle of rotation of the tacho rotating the head of the robot

#endif

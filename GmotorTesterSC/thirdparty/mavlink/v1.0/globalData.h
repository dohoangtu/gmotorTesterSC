#ifndef  GLOBALDATA_H 
#define  GLOBALDATA_H

#include <math.h>
#define true	1
#define false	0
#define THROTTLE 2
#define ELEVATOR 1
#define AILERON 0
#define RUDDER 3
#define GEAR 4
#define VPP 5
#define AUX1   5
#define AUX2   6
#define AUX3   8
#define AUX4   7
#define PI  3.141592654
#define GRAVITY 4166
 #define SYSTEM_ID 10
 #define MAV_RX_BUFF_SIZE 100

enum
{ gMODE_NORMAL,
  gMODE_FOLLOW_PAN,
  gMODE_FOLLOW_PAN_TILT,

}  ; 
enum
{ gSTATE_CALIB_ACC,
  gSTATE_CALIB_GYRO,
  gSTATE_SENSOR_ERROR,
  gSTATE_NORMAL,
} ;
enum
{ I2C_DMA_RX_WAITING,
  I2C_BUS_AVAILABLE,
  }	;

typedef struct __gConfig
{ uint8_t version;
  uint16_t serialNumber;
  int16_t pitchKp;
  int16_t pitchKi;
  int16_t pitchKd;
  int16_t rollKp;
  int16_t rollKi;
  int16_t rollKd;
  int16_t yawKp;
  int16_t yawKi;
  int16_t yawKd;
  uint8_t pitchPower;
  uint8_t rollPower;
  uint8_t yawPower;
  uint8_t gyroTrust;
  uint8_t pitchFollow;
  uint8_t rollFollow;
  uint8_t yawFollow;
  uint8_t motorFreq;
  uint8_t radioType;
  int8_t  dirMotorPitch;
  int8_t  dirMotorRoll;
  int8_t  dirMotorYaw;
  uint8_t nPolesPitch;
  uint8_t nPolesRoll;
  uint8_t nPolesYaw;
 
  uint8_t 	gyroLPF;
  
  int16_t travelMinRoll;
  int16_t travelMaxRoll;
  int16_t travelMinPitch;
  int16_t travelMaxPitch;
  int16_t travelMinYaw;
  int16_t travelMaxYaw;
  uint8_t 	rcPitchLPF;
  uint8_t 	rcRollLPF;
  uint8_t   rcYawLPF;
  uint8_t sbusPitchChan;
  uint8_t sbusRollChan;
  uint8_t sbusYawChan;
  uint8_t sbusModeChan;
  int16_t accXOffset;
  int16_t accYOffset;
  int16_t accZOffset;
  uint8_t useGPS;
}gConfig_t;

typedef struct __gSensor
{ 
  int16_t gyroX;
  int16_t gyroY;
  int16_t gyroZ;
  int16_t accX;
  int16_t accY;
  int16_t accZ;
  int16_t accXOffset;
  int16_t accYOffset;
  int16_t accZOffset;
  int16_t gyroXOffset;
  int16_t gyroYOffset;
  int16_t gyroZOffset;
  uint8_t newGyroData;
  uint8_t newAccelData;
  uint8_t gyroCalibrated;
  uint8_t INT;
  uint8_t i2cBus;
  uint8_t i2cError;
 

}  gSensor_t;
 
 typedef struct __gAtti
{ float	theta;
  float phi;
  float psi;
  float thetaDot;
  float phiDot;
  float psiDot;
}	gAtti_t;
 

typedef struct __gMotor
{ int32_t pitchPos;
  int32_t pitchDamp;
  int32_t pitchDrive;
  int32_t pitchPosLock;
  int32_t rollPos;
  int32_t rollDamp;
  int32_t rollDrive;
  int32_t rollPosLock;
  int32_t yawPos;
  int32_t yawDamp;
  int32_t yawDrive;
  int32_t yawPosLock;
  uint8_t enable;

}	 gMotor_t;

typedef struct __gRadio
{ int16_t pitch;
  int16_t roll;
  int16_t yaw;
  int16_t mode;
  uint8_t noSbusCount;
  int16_t sbusChan[18];
  uint8_t update;

}	gRadio_t;

typedef struct __gState
{ uint8_t calibAcc;
  uint8_t gyroCalibrated;
  uint8_t sensorError;
  uint8_t normal;
}	gState_t;

typedef struct __gMode
{ uint8_t normal;
  uint8_t followPan;
  uint8_t followPanTilt;
} gMode_t;

typedef struct __gMav
{ uint8_t sendType;
  uint8_t sendFinish;
  uint8_t msgIndex;
  uint8_t update;
} gMav_t ;

#endif	  

// MESSAGE TEST_MOTOR PACKING

#define MAVLINK_MSG_ID_TEST_MOTOR 152

typedef struct __mavlink_test_motor_t
{
 int16_t speed; ///< toc do dong co
 int16_t temperature; ///< nhiet do dong co
 uint8_t power; ///< nguon cho dong co
 uint8_t status; ///< trang thai hoat dong
 uint8_t dir; ///< chieu quay dong co
} mavlink_test_motor_t;

#define MAVLINK_MSG_ID_TEST_MOTOR_LEN 7
#define MAVLINK_MSG_ID_152_LEN 7



#define MAVLINK_MESSAGE_INFO_TEST_MOTOR { \
	"TEST_MOTOR", \
	5, \
	{  { "speed", NULL, MAVLINK_TYPE_INT16_T, 0, 0, offsetof(mavlink_test_motor_t, speed) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 2, offsetof(mavlink_test_motor_t, temperature) }, \
         { "power", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_test_motor_t, power) }, \
         { "status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_test_motor_t, status) }, \
         { "dir", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_test_motor_t, dir) }, \
         } \
}


/**
 * @brief Pack a test_motor message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param power nguon cho dong co
 * @param status trang thai hoat dong
 * @param dir chieu quay dong co
 * @param speed toc do dong co
 * @param temperature nhiet do dong co
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static __inline uint16_t mavlink_msg_test_motor_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint8_t power, uint8_t status, uint8_t dir, int16_t speed, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[7];
	_mav_put_int16_t(buf, 0, speed);
	_mav_put_int16_t(buf, 2, temperature);
	_mav_put_uint8_t(buf, 4, power);
	_mav_put_uint8_t(buf, 5, status);
	_mav_put_uint8_t(buf, 6, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 7);
#else
	mavlink_test_motor_t packet;
	packet.speed = speed;
	packet.temperature = temperature;
	packet.power = power;
	packet.status = status;
	packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 7);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_MOTOR;
	return mavlink_finalize_message(msg, system_id, component_id, 7, 153);
}

/**
 * @brief Pack a test_motor message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param power nguon cho dong co
 * @param status trang thai hoat dong
 * @param dir chieu quay dong co
 * @param speed toc do dong co
 * @param temperature nhiet do dong co
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static __inline uint16_t mavlink_msg_test_motor_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint8_t power,uint8_t status,uint8_t dir,int16_t speed,int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[7];
	_mav_put_int16_t(buf, 0, speed);
	_mav_put_int16_t(buf, 2, temperature);
	_mav_put_uint8_t(buf, 4, power);
	_mav_put_uint8_t(buf, 5, status);
	_mav_put_uint8_t(buf, 6, dir);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, 7);
#else
	mavlink_test_motor_t packet;
	packet.speed = speed;
	packet.temperature = temperature;
	packet.power = power;
	packet.status = status;
	packet.dir = dir;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, 7);
#endif

	msg->msgid = MAVLINK_MSG_ID_TEST_MOTOR;
	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 7, 153);
}

/**
 * @brief Encode a test_motor struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param test_motor C-struct to read the message contents from
 */
static __inline uint16_t mavlink_msg_test_motor_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_test_motor_t* test_motor)
{
	return mavlink_msg_test_motor_pack(system_id, component_id, msg, test_motor->power, test_motor->status, test_motor->dir, test_motor->speed, test_motor->temperature);
}

/**
 * @brief Send a test_motor message
 * @param chan MAVLink channel to send the message
 *
 * @param power nguon cho dong co
 * @param status trang thai hoat dong
 * @param dir chieu quay dong co
 * @param speed toc do dong co
 * @param temperature nhiet do dong co
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static __inline void mavlink_msg_test_motor_send(mavlink_channel_t chan, uint8_t power, uint8_t status, uint8_t dir, int16_t speed, int16_t temperature)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[7];
	_mav_put_int16_t(buf, 0, speed);
	_mav_put_int16_t(buf, 2, temperature);
	_mav_put_uint8_t(buf, 4, power);
	_mav_put_uint8_t(buf, 5, status);
	_mav_put_uint8_t(buf, 6, dir);

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_MOTOR, buf, 7, 153);
#else
	mavlink_test_motor_t packet;
	packet.speed = speed;
	packet.temperature = temperature;
	packet.power = power;
	packet.status = status;
	packet.dir = dir;

	_mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TEST_MOTOR, (const char *)&packet, 7, 153);
#endif
}

#endif

// MESSAGE TEST_MOTOR UNPACKING


/**
 * @brief Get field power from test_motor message
 *
 * @return nguon cho dong co
 */
static __inline uint8_t mavlink_msg_test_motor_get_power(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field status from test_motor message
 *
 * @return trang thai hoat dong
 */
static __inline uint8_t mavlink_msg_test_motor_get_status(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field dir from test_motor message
 *
 * @return chieu quay dong co
 */
static __inline uint8_t mavlink_msg_test_motor_get_dir(const mavlink_message_t* msg)
{
	return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field speed from test_motor message
 *
 * @return toc do dong co
 */
static __inline int16_t mavlink_msg_test_motor_get_speed(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  0);
}

/**
 * @brief Get field temperature from test_motor message
 *
 * @return nhiet do dong co
 */
static __inline int16_t mavlink_msg_test_motor_get_temperature(const mavlink_message_t* msg)
{
	return _MAV_RETURN_int16_t(msg,  2);
}

/**
 * @brief Decode a test_motor message into a struct
 *
 * @param msg The message to decode
 * @param test_motor C-struct to decode the message contents into
 */
static __inline void mavlink_msg_test_motor_decode(const mavlink_message_t* msg, mavlink_test_motor_t* test_motor)
{
#if MAVLINK_NEED_BYTE_SWAP
	test_motor->speed = mavlink_msg_test_motor_get_speed(msg);
	test_motor->temperature = mavlink_msg_test_motor_get_temperature(msg);
	test_motor->power = mavlink_msg_test_motor_get_power(msg);
	test_motor->status = mavlink_msg_test_motor_get_status(msg);
	test_motor->dir = mavlink_msg_test_motor_get_dir(msg);
#else
	memcpy(test_motor, _MAV_PAYLOAD(msg), 7);
#endif
}

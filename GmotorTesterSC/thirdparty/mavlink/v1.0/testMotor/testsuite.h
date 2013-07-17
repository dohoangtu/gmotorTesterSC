/** @file
 *	@brief MAVLink comm protocol testsuite generated from testMotor.xml
 *	@see http://qgroundcontrol.org/mavlink/
 */
#ifndef TESTMOTOR_TESTSUITE_H
#define TESTMOTOR_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_testMotor(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_common(system_id, component_id, last_msg);
	mavlink_test_testMotor(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_test_motor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
	mavlink_test_motor_t packet_in = {
		17235,
	17339,
	17,
	84,
	151,
	};
	mavlink_test_motor_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        	packet1.speed = packet_in.speed;
        	packet1.temperature = packet_in.temperature;
        	packet1.power = packet_in.power;
        	packet1.status = packet_in.status;
        	packet1.dir = packet_in.dir;
        
        

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_motor_encode(system_id, component_id, &msg, &packet1);
	mavlink_msg_test_motor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_motor_pack(system_id, component_id, &msg , packet1.power , packet1.status , packet1.dir , packet1.speed , packet1.temperature );
	mavlink_msg_test_motor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_motor_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.power , packet1.status , packet1.dir , packet1.speed , packet1.temperature );
	mavlink_msg_test_motor_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
        	comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
	mavlink_msg_test_motor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
	mavlink_msg_test_motor_send(MAVLINK_COMM_1 , packet1.power , packet1.status , packet1.dir , packet1.speed , packet1.temperature );
	mavlink_msg_test_motor_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_testMotor(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
	mavlink_test_test_motor(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // TESTMOTOR_TESTSUITE_H

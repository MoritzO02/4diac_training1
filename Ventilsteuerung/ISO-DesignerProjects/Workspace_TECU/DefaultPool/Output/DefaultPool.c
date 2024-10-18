// ISO-Designer ISO 11783   Version 5.6.2.5533 Jetter AG
// Do not change!

#include "DefaultPool.iop.h"
#include "DefaultPool.c.h"

#define WORD(w)  (unsigned char)w, (unsigned char)(w >> 8)
#define LONG(l)  (unsigned char)l, \
					(unsigned char)((unsigned long)l >> 8), \
					(unsigned char)((unsigned long)l >> 16), \
					(unsigned char)((unsigned long)l >> 24)
#define ID(id)           WORD(id)
#define REF(id)          WORD(id)
#define XYREF(id, x, y)  WORD(id), WORD(x), WORD(y)
#define MACRO(ev, id)    ev, id
#define COLOR(c)         c

const unsigned char ISO_OP_MEMORY_CLASS isoOP_DefaultPool[] = {
	17,
	ID(WorkingSet_0), TYPEID_WORKSET, COLOR_SILVER, 1, ID(DataMask_M1), 1, 0, 2,
		XYREF(Line_13000, 40, 40),
		'e', 'n',
		'd', 'e',
	ID(DataMask_M1), TYPEID_DATAMASK, COLOR_SILVER, ID(ID_NULL), 4, 0, 
		XYREF(Battery_disconnect, 40, 200),
		XYREF(Work_distance_travelled, 40, 120),
		XYREF(Container_Wheel_based_machine_speed, 40, 40),
		XYREF(Container_Ground_based_machine_speed, 40, 280),
	ID(Container_Wheel_based_machine_speed), TYPEID_CONTAINER, WORD(362), WORD(64), 0, 5, 0, 
		XYREF(Tractor_wheel_slip, 0, 0),
		XYREF(OutputNumber_Wheel_based_machine_speed_km_h, 80, 0),
		XYREF(OutputNumber_Wheel_based_machine_speed_m_s, 80, 32),
		XYREF(OutputString_km_h, 282, 0),
		XYREF(OutputString_m_s, 282, 32),
	ID(Container_Ground_based_machine_speed), TYPEID_CONTAINER, WORD(362), WORD(64), 0, 5, 0, 
		XYREF(Tractor_ground_speed, 0, 0),
		XYREF(OutputNumber_Ground_based_machine_speed_km_h, 80, 0),
		XYREF(OutputNumber_Ground_based_machine_speed_m_s, 80, 32),
		XYREF(OutputString_km_h, 282, 0),
		XYREF(OutputString_m_s, 282, 32),
	ID(SoftKeyMask_S1), TYPEID_SKEYMASK, COLOR_SILVER, 0, 0, 
	ID(OutputString_km_h), TYPEID_OUTSTR, WORD(80), WORD(30), COLOR_WHITE, ID(FontAttributes_23001), 0,
		ID(ID_NULL), 0, WORD(4), 'k', 'm', '/', 'h', 0,
	ID(OutputString_m_s), TYPEID_OUTSTR, WORD(80), WORD(30), COLOR_WHITE, ID(FontAttributes_23001), 0,
		ID(ID_NULL), 0, WORD(4), 'm', '/', 's', ' ', 0,
	ID(OutputNumber_Wheel_based_machine_speed_km_h), TYPEID_OUTNUM, WORD(200), WORD(30), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(NumberVariable_Wheel_based_machine_speed), LONG(0UL), LONG(0L), 0xFA, 0xED, 0x6B, 0x3B, 1, 0, 0, 0,
	ID(OutputNumber_Wheel_based_machine_speed_m_s), TYPEID_OUTNUM, WORD(200), WORD(30), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(NumberVariable_Wheel_based_machine_speed), LONG(0UL), LONG(0L), FLOAT_0_001, 1, 0, 0, 0,
	ID(OutputNumber_Ground_based_machine_speed_km_h), TYPEID_OUTNUM, WORD(200), WORD(30), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(NumberVariable_Ground_based_machine_speed), LONG(0UL), LONG(0L), 0xFA, 0xED, 0x6B, 0x3B, 1, 0, 0, 0,
	ID(OutputNumber_Ground_based_machine_speed_m_s), TYPEID_OUTNUM, WORD(200), WORD(30), COLOR_WHITE, ID(FontAttributes_23000), 0,
		ID(NumberVariable_Ground_based_machine_speed), LONG(0UL), LONG(0L), FLOAT_0_001, 1, 0, 0, 0,
	ID(Line_13000), TYPEID_OUTLINE, ID(LineAttributes_24000), WORD(40), WORD(1), 0, 0,
	ID(Tractor_wheel_slip), TYPEID_OUTPICT, WORD(64), WORD(64), WORD(64), 
		0, 0, COLOR_MAGENTA, LONG(512UL), 0, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
		0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFC, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 
		0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xE7, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 
		0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xE7, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 
		0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xF7, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 
		0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xF3, 0xFF, 0xFF, 
		0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 
		0xFC, 0x73, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 
		0xFE, 0x7F, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 
		0x80, 0x03, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0x07, 0xC1, 0xFF, 0xFF, 
		0xFE, 0x7F, 0xFF, 0xFE, 0x1F, 0xE0, 0xFF, 0xBF, 0xFE, 0x7F, 0xFF, 0xFE, 
		0x1F, 0xF0, 0xFF, 0x1F, 0xFE, 0x07, 0xFF, 0xFC, 0x3F, 0xF8, 0xFF, 0x1F, 
		0xFC, 0x03, 0xFF, 0xFC, 0x3C, 0xF8, 0xFE, 0x0F, 0xF8, 0xF0, 0x00, 0x00, 
		0x3C, 0x78, 0x7C, 0x0F, 0xF9, 0xF8, 0x00, 0x00, 0x3C, 0x78, 0x7C, 0x07, 
		0xF3, 0x9C, 0xFF, 0xFC, 0x3F, 0xF8, 0xF9, 0x27, 0xF3, 0x9C, 0xFF, 0xFE, 
		0x3F, 0xF0, 0xF3, 0x33, 0xF3, 0x9C, 0xFF, 0xFE, 0x1F, 0xF0, 0xE3, 0x33, 
		0xF3, 0xFC, 0xFF, 0xFF, 0x0F, 0xC1, 0xE7, 0x39, 0xF9, 0xF9, 0xFF, 0xFF, 
		0x00, 0x03, 0xCF, 0x79, 0xFC, 0xF1, 0xFF, 0xFF, 0x80, 0x07, 0xFE, 0x7C, 
		0xFE, 0x07, 0xFF, 0xFF, 0xE0, 0x0F, 0xFE, 0x7D, 0xFF, 0x9F, 0xFF, 0xFF, 
		0xF8, 0x3F, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFF, 0xE7, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 
		0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0x1F, 0xFF, 0xF1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 
		0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 
		0xFE, 0x07, 0xFF, 0xFF, 0xC0, 0x0F, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x7F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	ID(Battery_disconnect), TYPEID_OUTPICT, WORD(64), WORD(64), WORD(64), 
		0, 0, COLOR_MAGENTA, LONG(512UL), 0, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0E, 0x03, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 
		0xFF, 0x07, 0x03, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xC3, 0x83, 0xFF, 
		0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xE1, 0xC3, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 
		0xFF, 0xF0, 0xE1, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xF8, 0x38, 0x30, 0x00, 
		0x00, 0x00, 0x00, 0x1F, 0xF8, 0x1C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x1F, 
		0xF8, 0x0E, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x7F, 0x07, 0xFF, 
		0xFF, 0xFF, 0xFE, 0x1F, 0xF8, 0x7F, 0x83, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xC1, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xF8, 0x7F, 0xF0, 0xFF, 
		0xFF, 0xFF, 0xFE, 0x1F, 0xF8, 0x7F, 0xF8, 0x7F, 0xFF, 0xFC, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0xF8, 0xFE, 0x1F, 0xF8, 0x7F, 0xFE, 0x0F, 
		0xFF, 0xF8, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0x07, 0xFF, 0xF8, 0xFE, 0x1F, 
		0xF8, 0x70, 0x03, 0x83, 0xFF, 0xC0, 0x0E, 0x1F, 0xF8, 0x70, 0x01, 0xC1, 
		0xFF, 0xC0, 0x0E, 0x1F, 0xF8, 0x70, 0x03, 0xE0, 0xFF, 0xC0, 0x0E, 0x1F, 
		0xF8, 0x7F, 0xFF, 0xF0, 0x7F, 0xF8, 0x7E, 0x1F, 0xF8, 0x7F, 0xFF, 0xFC, 
		0x3F, 0xF8, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFE, 0x1F, 0xF8, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xFF, 0xFF, 0x07, 0xFC, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 
		0x83, 0xFF, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 0xC1, 0xFF, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xFF, 0xFF, 0xE0, 0xFF, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 
		0xF0, 0x7F, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 0xF8, 0x3F, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xFF, 0xFF, 0xFC, 0x1F, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 
		0xFF, 0x0F, 0xFE, 0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 0xFF, 0x87, 0xFE, 0x1F, 
		0xF8, 0x7F, 0xFF, 0xFF, 0xFF, 0xC1, 0xFE, 0x1F, 0xF8, 0x00, 0x00, 0x00, 
		0x00, 0xE0, 0xE0, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x70, 0x60, 0x1F, 
		0xF8, 0x00, 0x00, 0x00, 0x00, 0x38, 0x30, 0x1F, 0xFC, 0x00, 0x00, 0x00, 
		0x00, 0x3C, 0x1C, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	ID(Work_distance_travelled), TYPEID_OUTPICT, WORD(64), WORD(64), WORD(64), 
		0, 0, COLOR_MAGENTA, LONG(512UL), 0, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x07, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x7F, 
		0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 
		0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x7F, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0xBF, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x3F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFE, 0x0F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFC, 0x0F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFC, 0x07, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xF8, 0x07, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xF8, 0x03, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xF0, 0x01, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xF0, 0x01, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xE0, 0x00, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xC3, 0x10, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xE3, 0x18, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xF7, 0x19, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 
		0x3F, 0xFF, 0x1F, 0xFF, 0xFF, 0xF8, 0x7F, 0xFC, 0x3F, 0xFF, 0x1F, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 
		0x1F, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 
		0xFE, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 
		0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	ID(Tractor_ground_speed), TYPEID_OUTPICT, WORD(64), WORD(64), WORD(64), 
		0, 0, COLOR_MAGENTA, LONG(512UL), 0, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xE7, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0x3F, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xE7, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0x9F, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xEF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0x9F, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0x9F, 0xFF, 0xFF, 0xFF, 0x00, 
		0x00, 0x0F, 0xFF, 0x9F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xDF, 
		0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xFF, 0xFF, 0xF9, 0xFF, 
		0xFF, 0xFF, 0xC0, 0xCF, 0xFF, 0xFF, 0xF9, 0xFF, 0xFF, 0xFF, 0x00, 0x0F, 
		0xFF, 0xFF, 0xF9, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFD, 0xFF, 
		0xFF, 0xFC, 0x08, 0x0F, 0xFF, 0xFF, 0xFD, 0xFF, 0xFF, 0xF8, 0x7F, 0x07, 
		0xFF, 0xFF, 0xFC, 0x1F, 0xFF, 0xF0, 0xFF, 0x87, 0xFF, 0xFF, 0xF8, 0x07, 
		0xFF, 0xF0, 0xFF, 0xC7, 0xFF, 0xFF, 0xF1, 0xE3, 0xFF, 0xF1, 0xFF, 0xC3, 
		0xFF, 0xFF, 0xE7, 0xF3, 0xFF, 0xF1, 0xF3, 0xC3, 0xFF, 0xFF, 0xE7, 0xF8, 
		0x00, 0x01, 0xF3, 0xC3, 0xFF, 0xFF, 0xCF, 0x78, 0x00, 0x01, 0xFF, 0xC3, 
		0xFF, 0xFF, 0xCF, 0x3D, 0xFF, 0xF0, 0xFF, 0xC3, 0xFF, 0xFF, 0xCF, 0x39, 
		0xFF, 0xF0, 0xFF, 0x87, 0xFF, 0xFF, 0xEF, 0xF9, 0xFF, 0xF8, 0x7F, 0x07, 
		0xFF, 0xFF, 0xE7, 0xF9, 0xFF, 0xFC, 0x0C, 0x0F, 0xFF, 0xFF, 0xF3, 0xE3, 
		0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xE3, 0xF0, 0x07, 0xFF, 0xFF, 0x00, 0x3F, 
		0xFF, 0x87, 0xFC, 0x0F, 0xFF, 0xFF, 0x80, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
		0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x7F, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
	ID(NumberVariable_Wheel_based_machine_speed), TYPEID_VARNUM, LONG(0UL), 
	ID(NumberVariable_Ground_based_machine_speed), TYPEID_VARNUM, LONG(0UL), 
	ID(FontAttributes_23000), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(FontAttributes_23001), TYPEID_FONTATTR, COLOR_BLACK, 3, 0, 0, 0, 
	ID(LineAttributes_24000), TYPEID_LINEATTR, COLOR_BLACK, 1, WORD(65535), 0, 
}; // isoOP_DefaultPool

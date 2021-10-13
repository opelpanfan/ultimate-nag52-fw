
/**
* AUTOGENERATED BY convert.py
* DO NOT EDIT THIS FILE!
*
* IF MODIFICATIONS NEED TO BE MADE, MODIFY can_data.txt!
*
* CAN Defintiion for ECU 'EZS'
*/



#ifndef __ECU_EZS_H_
#define __ECU_EZS_H_

#include <stdint.h>
    
#define EZS_240_CAN_ID 0x0240
#define ZGW_248_CAN_ID 0x0248
#define ZGW_24C_CAN_ID 0x024C
#define KLA_410_CAN_ID 0x0410

/** LHD / RHD */
enum class EZS_240h_LL_RLC {
	UNKNOWN = 0, // not defined
	LL = 1, // Left
	RL = 2, // RHD
	SNV = 3, // Code not available
};

/** ESP on / off operated */
enum class EZS_240h_ESP_BET {
	NBET = 0, // Not operated (rocker and push-push)
	AUS_BET = 1, // ESP from operated (rocker) operated (Push Push)
	EIN_NDEF = 2, // ESP a pressed (rocker) is not defined (push-push)
	SNV = 3, // No signal (rocker and push-push)
};

/** LF / ABC 2-stage switch actuated */
enum class EZS_240h_ST2_BET {
	NBET = 0, // Not operated (rocker and push-push)
	UNBET_NDEF = 1, // Down actuated (rocker) Not defined (push-push)
	OBBET_BET = 2, // Top operated (rocker), actuated (push-push)
	UNKNOWN = 3, // Not defined (rocker and push-push)
};

/** LF / ABC 3-position switch is actuated */
enum class EZS_240h_ST3_BET {
	NBET = 0, // Not operated (rocker and push-push)
	UNBET_NDEF = 1, // Down actuated (rocker) Not defined (push-push)
	OBBET_BET = 2, // Top operated (rocker), actuated (push-push)
	UNKNOWN = 3, // Not defined (rocker and push-push)
};

/** ART-distance warning actuated on / off */
enum class EZS_240h_ART_ABW_BET {
	NDEF_NBET = 0, // not defined (rocker), non-actuated (push-push)
	AUS_NDEF = 1, // distance warning (rocker) not defined (Push Push)
	EIN_BET = 2, // distance warning a (rocker) operated (Push Push)
	SNV = 3, // No signal (rocker and push-push)
};

/** Series addicts vehicle version (only 220/215/230) */
enum class EZS_240h_FZGVERSN {
	START = 0, // Stand at launch of the respective series
	V1 = 1, // BR 220: EJ 99 / X, C215: EJ 01/1, R230: EJ 02/1
	V2 = 2, // BR 220: EJ 1.1, C215: EJ 02 / X, R230: EJ 03 / X
	V3 = 3, // BR 220: EJ 02 / X, C215: EJ 03 / X, R230: not defined
	V4 = 4, // BR 220: prohibited C215 / R230: undefined
	V5 = 5, // BR 220: prohibited C215 / R230: undefined
	V6 = 6, // BR 220: EJ 03 / X, C215 / R230: undefined
	V7 = 7, // BR 220 / C215 / R230: undefined
};

/** country code */
enum class EZS_240h_LDC {
	RDW = 0, // Rest of the World
	USA_CAN = 1, // USA / Canada
	UNKNOWN = 2, // not defined
	SNV = 3, // Code not available
};

/** trailer operation recognized */
enum class ZGW_248h_ANH_ERK2 {
	KEIN = 0, // Pendant not recognized
	OK = 1, // trailer recognized
	UNKNOWN = 2, // not defined
	SNV = 3, // signal not available
};



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of EZS_240 */
	uint32_t get_canid(){ return EZS_240_CAN_ID; }
    /** Sets cruise control lever implausible */
    void set_WH_UP(bool value){ raw = (raw & 0xdfffffffffffffff) | ((uint64_t)value & 0x1) << 61; }

    /** Gets cruise control lever implausible */
    bool get_WH_UP() { return (bool)(raw >> 61 & 0x1); }
        
    /** Sets Operation variable speed limit */
    void set_VMAX_AKT(bool value){ raw = (raw & 0xefffffffffffffff) | ((uint64_t)value & 0x1) << 60; }

    /** Gets Operation variable speed limit */
    bool get_VMAX_AKT() { return (bool)(raw >> 60 & 0x1); }
        
    /** Sets cruise control lever: "Sit and delay Stufe0" */
    void set_S_MINUS_B(bool value){ raw = (raw & 0xf7ffffffffffffff) | ((uint64_t)value & 0x1) << 59; }

    /** Gets cruise control lever: "Sit and delay Stufe0" */
    bool get_S_MINUS_B() { return (bool)(raw >> 59 & 0x1); }
        
    /** Sets cruise control lever: "Sit and accelerating Stufe0" */
    void set_S_PLUS_B(bool value){ raw = (raw & 0xfbffffffffffffff) | ((uint64_t)value & 0x1) << 58; }

    /** Gets cruise control lever: "Sit and accelerating Stufe0" */
    bool get_S_PLUS_B() { return (bool)(raw >> 58 & 0x1); }
        
    /** Sets cruise control lever: "resume" */
    void set_WA(bool value){ raw = (raw & 0xfdffffffffffffff) | ((uint64_t)value & 0x1) << 57; }

    /** Gets cruise control lever: "resume" */
    bool get_WA() { return (bool)(raw >> 57 & 0x1); }
        
    /** Sets cruise control lever "off" */
    void set_AUS(bool value){ raw = (raw & 0xfeffffffffffffff) | ((uint64_t)value & 0x1) << 56; }

    /** Gets cruise control lever "off" */
    bool get_AUS() { return (bool)(raw >> 56 & 0x1); }
        
    /** Sets Keyless Go terminal control active */
    void set_KG_KL_AKT(bool value){ raw = (raw & 0xff7fffffffffffff) | ((uint64_t)value & 0x1) << 55; }

    /** Gets Keyless Go terminal control active */
    bool get_KG_KL_AKT() { return (bool)(raw >> 55 & 0x1); }
        
    /** Sets meets Keyles Go annealing conditions */
    void set_KG_ALB_OK(bool value){ raw = (raw & 0xffbfffffffffffff) | ((uint64_t)value & 0x1) << 54; }

    /** Gets meets Keyles Go annealing conditions */
    bool get_KG_ALB_OK() { return (bool)(raw >> 54 & 0x1); }
        
    /** Sets LHD / RHD */
    void set_LL_RLC(EZS_240h_LL_RLC value){ raw = (raw & 0xffcfffffffffffff) | ((uint64_t)value & 0x3) << 52; }

    /** Gets LHD / RHD */
    EZS_240h_LL_RLC get_LL_RLC() { return (EZS_240h_LL_RLC)(raw >> 52 & 0x3); }
        
    /** Sets Reverse gear engaged (manual transmission only) */
    void set_RG_SCHALT(bool value){ raw = (raw & 0xfff7ffffffffffff) | ((uint64_t)value & 0x1) << 51; }

    /** Gets Reverse gear engaged (manual transmission only) */
    bool get_RG_SCHALT() { return (bool)(raw >> 51 & 0x1); }
        
    /** Sets brake switch for Shift Lock */
    void set_BS_SL(bool value){ raw = (raw & 0xfffbffffffffffff) | ((uint64_t)value & 0x1) << 50; }

    /** Gets brake switch for Shift Lock */
    bool get_BS_SL() { return (bool)(raw >> 50 & 0x1); }
        
    /** Sets Terminal 15 */
    void set_KL_15(bool value){ raw = (raw & 0xfffdffffffffffff) | ((uint64_t)value & 0x1) << 49; }

    /** Gets Terminal 15 */
    bool get_KL_15() { return (bool)(raw >> 49 & 0x1); }
        
    /** Sets Terminal 50 */
    void set_KL_50(bool value){ raw = (raw & 0xfffeffffffffffff) | ((uint64_t)value & 0x1) << 48; }

    /** Gets Terminal 50 */
    bool get_KL_50() { return (bool)(raw >> 48 & 0x1); }
        
    /** Sets cruise control lever parity (even parity) */
    void set_WH_PA(bool value){ raw = (raw & 0xffffefffffffffff) | ((uint64_t)value & 0x1) << 44; }

    /** Gets cruise control lever parity (even parity) */
    bool get_WH_PA() { return (bool)(raw >> 44 & 0x1); }
        
    /** Sets Message counter. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_BZ240h(uint8_t value){ raw = (raw & 0xfffff0ffffffffff) | ((uint64_t)value & 0xf) << 40; }

    /** Gets Message counter. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_BZ240h() { return (uint8_t)(raw >> 40 & 0xf); }
        
    /** Sets ASG Sport mode on / off operated (ST2_LED_DL when ABC available) */
    void set_ASG_SPORT_BET(bool value){ raw = (raw & 0xffffffefffffffff) | ((uint64_t)value & 0x1) << 36; }

    /** Gets ASG Sport mode on / off operated (ST2_LED_DL when ABC available) */
    bool get_ASG_SPORT_BET() { return (bool)(raw >> 36 & 0x1); }
        
    /** Sets CRASH Confirmbit */
    void set_CRASH_CNF(bool value){ raw = (raw & 0xfffffffdffffffff) | ((uint64_t)value & 0x1) << 33; }

    /** Gets CRASH Confirmbit */
    bool get_CRASH_CNF() { return (bool)(raw >> 33 & 0x1); }
        
    /** Sets Crash signal from airbag SG */
    void set_CRASH(bool value){ raw = (raw & 0xfffffffeffffffff) | ((uint64_t)value & 0x1) << 32; }

    /** Gets Crash signal from airbag SG */
    bool get_CRASH() { return (bool)(raw >> 32 & 0x1); }
        
    /** Sets Wiring emergency: Prio1- and Prio2-consumers, Second battery supports */
    void set_BN_NTLF(bool value){ raw = (raw & 0xffffffff7fffffff) | ((uint64_t)value & 0x1) << 31; }

    /** Gets Wiring emergency: Prio1- and Prio2-consumers, Second battery supports */
    bool get_BN_NTLF() { return (bool)(raw >> 31 & 0x1); }
        
    /** Sets ESP on / off operated */
    void set_ESP_BET(EZS_240h_ESP_BET value){ raw = (raw & 0xffffffff9fffffff) | ((uint64_t)value & 0x3) << 29; }

    /** Gets ESP on / off operated */
    EZS_240h_ESP_BET get_ESP_BET() { return (EZS_240h_ESP_BET)(raw >> 29 & 0x3); }
        
    /** Sets attracted hand brake (control light) */
    void set_HAS_KL(bool value){ raw = (raw & 0xffffffffefffffff) | ((uint64_t)value & 0x1) << 28; }

    /** Gets attracted hand brake (control light) */
    bool get_HAS_KL() { return (bool)(raw >> 28 & 0x1); }
        
    /** Sets Wiper outside parking position */
    void set_KL_31B(bool value){ raw = (raw & 0xfffffffff7ffffff) | ((uint64_t)value & 0x1) << 27; }

    /** Gets Wiper outside parking position */
    bool get_KL_31B() { return (bool)(raw >> 27 & 0x1); }
        
    /** Sets directional blinking right */
    void set_BLI_RE(bool value){ raw = (raw & 0xfffffffffdffffff) | ((uint64_t)value & 0x1) << 25; }

    /** Gets directional blinking right */
    bool get_BLI_RE() { return (bool)(raw >> 25 & 0x1); }
        
    /** Sets directional blinking left */
    void set_BLI_LI(bool value){ raw = (raw & 0xfffffffffeffffff) | ((uint64_t)value & 0x1) << 24; }

    /** Gets directional blinking left */
    bool get_BLI_LI() { return (bool)(raw >> 24 & 0x1); }
        
    /** Sets LF / ABC 2-stage switch actuated */
    void set_ST2_BET(EZS_240h_ST2_BET value){ raw = (raw & 0xffffffffff3fffff) | ((uint64_t)value & 0x3) << 22; }

    /** Gets LF / ABC 2-stage switch actuated */
    EZS_240h_ST2_BET get_ST2_BET() { return (EZS_240h_ST2_BET)(raw >> 22 & 0x3); }
        
    /** Sets LF / ABC 3-position switch is actuated */
    void set_ST3_BET(EZS_240h_ST3_BET value){ raw = (raw & 0xffffffffffcfffff) | ((uint64_t)value & 0x3) << 20; }

    /** Gets LF / ABC 3-position switch is actuated */
    EZS_240h_ST3_BET get_ST3_BET() { return (EZS_240h_ST3_BET)(raw >> 20 & 0x3); }
        
    /** Sets ART-distance warning actuated on / off */
    void set_ART_ABW_BET(EZS_240h_ART_ABW_BET value){ raw = (raw & 0xfffffffffff3ffff) | ((uint64_t)value & 0x3) << 18; }

    /** Gets ART-distance warning actuated on / off */
    EZS_240h_ART_ABW_BET get_ART_ABW_BET() { return (EZS_240h_ART_ABW_BET)(raw >> 18 & 0x3); }
        
    /** Sets Switch on low beam */
    void set_ABL_EIN(bool value){ raw = (raw & 0xfffffffffffdffff) | ((uint64_t)value & 0x1) << 17; }

    /** Gets Switch on low beam */
    bool get_ABL_EIN() { return (bool)(raw >> 17 & 0x1); }
        
    /** Sets Terminal 54 Hardware enabled */
    void set_KL54_RM(bool value){ raw = (raw & 0xfffffffffffeffff) | ((uint64_t)value & 0x1) << 16; }

    /** Gets Terminal 54 Hardware enabled */
    bool get_KL54_RM() { return (bool)(raw >> 16 & 0x1); }
        
    /** Sets spacing factor. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_ART_ABSTAND(uint8_t value){ raw = (raw & 0xffffffffffff00ff) | ((uint64_t)value & 0xff) << 8; }

    /** Gets spacing factor. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_ART_ABSTAND() { return (uint8_t)(raw >> 8 & 0xff); }
        
    /** Sets ART available */
    void set_ART_VH(bool value){ raw = (raw & 0xffffffffffffff7f) | ((uint64_t)value & 0x1) << 7; }

    /** Gets ART available */
    bool get_ART_VH() { return (bool)(raw >> 7 & 0x1); }
        
    /** Sets E-extractor: basic ventilation from */
    void set_GBL_AUS(bool value){ raw = (raw & 0xffffffffffffffbf) | ((uint64_t)value & 0x1) << 6; }

    /** Gets E-extractor: basic ventilation from */
    bool get_GBL_AUS() { return (bool)(raw >> 6 & 0x1); }
        
    /** Sets Series addicts vehicle version (only 220/215/230) */
    void set_FZGVERSN(EZS_240h_FZGVERSN value){ raw = (raw & 0xffffffffffffffe3) | ((uint64_t)value & 0x7) << 2; }

    /** Gets Series addicts vehicle version (only 220/215/230) */
    EZS_240h_FZGVERSN get_FZGVERSN() { return (EZS_240h_FZGVERSN)(raw >> 2 & 0x7); }
        
    /** Sets country code */
    void set_LDC(EZS_240h_LDC value){ raw = (raw & 0xfffffffffffffffc) | ((uint64_t)value & 0x3) << 0; }

    /** Gets country code */
    EZS_240h_LDC get_LDC() { return (EZS_240h_LDC)(raw >> 0 & 0x3); }
        
} EZS_240;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of ZGW_248 */
	uint32_t get_canid(){ return ZGW_248_CAN_ID; }
    /** Sets Start Xenon4 diagnostic procedure passenger side */
    void set_DIAG_X4_B(bool value){ raw = (raw & 0x7fffffffffffffff) | ((uint64_t)value & 0x1) << 63; }

    /** Gets Start Xenon4 diagnostic procedure passenger side */
    bool get_DIAG_X4_B() { return (bool)(raw >> 63 & 0x1); }
        
    /** Sets Start Xenon4 diagnostic procedure driver side */
    void set_DIAG_X4_F(bool value){ raw = (raw & 0xbfffffffffffffff) | ((uint64_t)value & 0x1) << 62; }

    /** Gets Start Xenon4 diagnostic procedure driver side */
    bool get_DIAG_X4_F() { return (bool)(raw >> 62 & 0x1); }
        
    /** Sets Switch on low beam */
    void set_ABL_EIN(bool value){ raw = (raw & 0xefffffffffffffff) | ((uint64_t)value & 0x1) << 60; }

    /** Gets Switch on low beam */
    bool get_ABL_EIN() { return (bool)(raw >> 60 & 0x1); }
        
    /** Sets AFL requirement: Switch on low beam */
    void set_AFL_ABL_EIN(bool value){ raw = (raw & 0xfff7ffffffffffff) | ((uint64_t)value & 0x1) << 51; }

    /** Gets AFL requirement: Switch on low beam */
    bool get_AFL_ABL_EIN() { return (bool)(raw >> 51 & 0x1); }
        
    /** Sets Auxiliary water pump is running */
    void set_ZWP_LFT(bool value){ raw = (raw & 0xfffbffffffffffff) | ((uint64_t)value & 0x1) << 50; }

    /** Gets Auxiliary water pump is running */
    bool get_ZWP_LFT() { return (bool)(raw >> 50 & 0x1); }
        
    /** Sets trailer operation recognized */
    void set_ANH_ERK2(ZGW_248h_ANH_ERK2 value){ raw = (raw & 0xfffcffffffffffff) | ((uint64_t)value & 0x3) << 48; }

    /** Gets trailer operation recognized */
    ZGW_248h_ANH_ERK2 get_ANH_ERK2() { return (ZGW_248h_ANH_ERK2)(raw >> 48 & 0x3); }
        
} ZGW_248;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of ZGW_24C */
	uint32_t get_canid(){ return ZGW_24C_CAN_ID; }
    /** Sets Low beam defective front passenger / right (depending on BR) */
    void set_ABL_DEF_BF_R(bool value){ raw = (raw & 0xfffffffffdffffff) | ((uint64_t)value & 0x1) << 25; }

    /** Gets Low beam defective front passenger / right (depending on BR) */
    bool get_ABL_DEF_BF_R() { return (bool)(raw >> 25 & 0x1); }
        
    /** Sets Low beam defective driver / left (depending on BR) */
    void set_ABL_DEF_F_L(bool value){ raw = (raw & 0xfffffffffeffffff) | ((uint64_t)value & 0x1) << 24; }

    /** Gets Low beam defective driver / left (depending on BR) */
    bool get_ABL_DEF_F_L() { return (bool)(raw >> 24 & 0x1); }
        
} ZGW_24C;



typedef union {
	uint64_t raw;
	uint8_t bytes[8];

	/** Gets CAN ID of KLA_410 */
	uint32_t get_canid(){ return KLA_410_CAN_ID; }
    /** Sets Turn on a heater */
    void set_ZH_EIN_OK(bool value){ raw = (raw & 0x7fffffffffffffff) | ((uint64_t)value & 0x1) << 63; }

    /** Gets Turn on a heater */
    bool get_ZH_EIN_OK() { return (bool)(raw >> 63 & 0x1); }
        
    /** Sets signal version Compressor torque */
    void set_SENDE_NEU(bool value){ raw = (raw & 0xefffffffffffffff) | ((uint64_t)value & 0x1) << 60; }

    /** Gets signal version Compressor torque */
    bool get_SENDE_NEU() { return (bool)(raw >> 60 & 0x1); }
        
    /** Sets Climate Compressor Torque Parity (straight parity) */
    void set_M_KOMPPAR(bool value){ raw = (raw & 0xfbffffffffffffff) | ((uint64_t)value & 0x1) << 58; }

    /** Gets Climate Compressor Torque Parity (straight parity) */
    bool get_M_KOMPPAR() { return (bool)(raw >> 58 & 0x1); }
        
    /** Sets Climate Compressor Tour Toggle */
    void set_M_KOMPTGL(bool value){ raw = (raw & 0xfdffffffffffffff) | ((uint64_t)value & 0x1) << 57; }

    /** Gets Climate Compressor Tour Toggle */
    bool get_M_KOMPTGL() { return (bool)(raw >> 57 & 0x1); }
        
    /** Sets Climate Compressor Tour NEW. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_M_KOMP_NEU(uint8_t value){ raw = (raw & 0xffff00ffffffffff) | ((uint64_t)value & 0xff) << 40; }

    /** Gets Climate Compressor Tour NEW. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_M_KOMP_NEU() { return (uint8_t)(raw >> 40 & 0xff); }
        
    /** Sets idle speed lifting to the cooling power increase */
    void set_LL_DZA(bool value){ raw = (raw & 0xbfffffffffffffff) | ((uint64_t)value & 0x1) << 62; }

    /** Gets idle speed lifting to the cooling power increase */
    bool get_LL_DZA() { return (bool)(raw >> 62 & 0x1); }
        
    /** Sets climate compressor turned on */
    void set_KOMP_EIN(bool value){ raw = (raw & 0xfeffffffffffffff) | ((uint64_t)value & 0x1) << 56; }

    /** Gets climate compressor turned on */
    bool get_KOMP_EIN() { return (bool)(raw >> 56 & 0x1); }
        
    /** Sets refrigerant printing. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_P_KAELTE8(uint8_t value){ raw = (raw & 0xff00ffffffffffff) | ((uint64_t)value & 0xff) << 48; }

    /** Gets refrigerant printing. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_P_KAELTE8() { return (uint8_t)(raw >> 48 & 0xff); }
        
    /** Sets Torque recording refrigeration compressor. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_M_KOMP(uint8_t value){ raw = (raw & 0xffff00ffffffffff) | ((uint64_t)value & 0xff) << 40; }

    /** Gets Torque recording refrigeration compressor. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_M_KOMP() { return (uint8_t)(raw >> 40 & 0xff); }
        
    /** Sets Motor fan setpoint speed. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_NLFTS(uint8_t value){ raw = (raw & 0xffffff00ffffffff) | ((uint64_t)value & 0xff) << 32; }

    /** Gets Motor fan setpoint speed. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_NLFTS() { return (uint8_t)(raw >> 32 & 0xff); }
        
    /** Sets Outdoor air temperature for thermal management. Conversion formula (To raw from real): y=(x-0.0)/1.00 */
    void set_T_AUSSEN_WM(uint8_t value){ raw = (raw & 0xffffffffff00ffff) | ((uint64_t)value & 0xff) << 16; }

    /** Gets Outdoor air temperature for thermal management. Conversion formula (To real from raw): y=(1.00x)+0.0 */
    uint8_t get_T_AUSSEN_WM() { return (uint8_t)(raw >> 16 & 0xff); }
        
} KLA_410;



class ECU_EZS {
	public:
        /**
         * @brief Imports the CAN frame given the CAN ID, CAN Contents, and current timestamp
         *
         * Returns true if the frame was imported successfully, and false if import failed (Due to non-matching CAN ID).
         *
         * NOTE: The endianness of the value cannot be guaranteed. It is up to the caller to correct the byte order!
         */
        bool import_frames(uint64_t value, uint32_t can_id, uint64_t timestamp_now) {
            switch(can_id) {
                case EZS_240_CAN_ID:
                    LAST_FRAME_TIMES[0] = timestamp_now;
                    FRAME_DATA[0] = value;
                    return true;
                case ZGW_248_CAN_ID:
                    LAST_FRAME_TIMES[1] = timestamp_now;
                    FRAME_DATA[1] = value;
                    return true;
                case ZGW_24C_CAN_ID:
                    LAST_FRAME_TIMES[2] = timestamp_now;
                    FRAME_DATA[2] = value;
                    return true;
                case KLA_410_CAN_ID:
                    LAST_FRAME_TIMES[3] = timestamp_now;
                    FRAME_DATA[3] = value;
                    return true;
                default:
                    return false;
            }
        }
        
        /** Sets data in pointer to EZS_240
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_EZS_240(uint64_t now, uint64_t max_expire_time, EZS_240* dest) {
            if (LAST_FRAME_TIMES[0] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now - LAST_FRAME_TIMES[0] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[0];
                return true;
            }
        }
            
        /** Sets data in pointer to ZGW_248
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_ZGW_248(uint64_t now, uint64_t max_expire_time, ZGW_248* dest) {
            if (LAST_FRAME_TIMES[1] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now - LAST_FRAME_TIMES[1] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[1];
                return true;
            }
        }
            
        /** Sets data in pointer to ZGW_24C
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_ZGW_24C(uint64_t now, uint64_t max_expire_time, ZGW_24C* dest) {
            if (LAST_FRAME_TIMES[2] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now - LAST_FRAME_TIMES[2] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[2];
                return true;
            }
        }
            
        /** Sets data in pointer to KLA_410
          * 
          * If this function returns false, then the CAN Frame is invalid or has not been seen
          * on the CANBUS network yet. Meaning it's data cannot be used.
          *
          * If the function returns true, then the pointer to 'dest' has been updated with the new CAN data
          */
        bool get_KLA_410(uint64_t now, uint64_t max_expire_time, KLA_410* dest) {
            if (LAST_FRAME_TIMES[3] == 0 || dest == nullptr) { // CAN Frame has not been seen on bus yet / NULL pointer
                return false;
            } else if (now - LAST_FRAME_TIMES[3] > max_expire_time) { // CAN Frame has not refreshed in valid interval
                return false;
            } else { // CAN Frame is valid! return it
                dest->raw = FRAME_DATA[3];
                return true;
            }
        }
            
	private:
		uint64_t FRAME_DATA[4];
		uint64_t LAST_FRAME_TIMES[4];
};
#endif // __ECU_EZS_H_
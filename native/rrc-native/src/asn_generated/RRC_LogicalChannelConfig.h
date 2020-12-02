/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_LogicalChannelConfig_H_
#define	_RRC_LogicalChannelConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "RRC_SchedulingRequestId.h"
#include <BOOLEAN.h>
#include "RRC_ServCellIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "RRC_SubcarrierSpacing.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate {
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps0	= 0,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps8	= 1,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps16	= 2,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps32	= 3,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps64	= 4,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps128	= 5,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps256	= 6,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps512	= 7,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps1024	= 8,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps2048	= 9,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps4096	= 10,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps8192	= 11,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps16384	= 12,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps32768	= 13,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_kBps65536	= 14,
	RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate_infinity	= 15
} e_RRC_LogicalChannelConfig__ul_SpecificParameters__prioritisedBitRate;
typedef enum RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration {
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms5	= 0,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms10	= 1,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms20	= 2,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms50	= 3,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms100	= 4,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms150	= 5,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms300	= 6,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms500	= 7,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_ms1000	= 8,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare7	= 9,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare6	= 10,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare5	= 11,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare4	= 12,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare3	= 13,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare2	= 14,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration_spare1	= 15
} e_RRC_LogicalChannelConfig__ul_SpecificParameters__bucketSizeDuration;
typedef enum RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration {
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p02	= 0,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p04	= 1,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p0625	= 2,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p125	= 3,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p25	= 4,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_ms0p5	= 5,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_spare2	= 6,
	RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration_spare1	= 7
} e_RRC_LogicalChannelConfig__ul_SpecificParameters__maxPUSCH_Duration;
typedef enum RRC_LogicalChannelConfig__ul_SpecificParameters__configuredGrantType1Allowed {
	RRC_LogicalChannelConfig__ul_SpecificParameters__configuredGrantType1Allowed_true	= 0
} e_RRC_LogicalChannelConfig__ul_SpecificParameters__configuredGrantType1Allowed;
typedef enum RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer {
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s0	= 0,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s0dot4	= 1,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s0dot8	= 2,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s1dot6	= 3,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s3	= 4,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s6	= 5,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s12	= 6,
	RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer_s30	= 7
} e_RRC_LogicalChannelConfig__ul_SpecificParameters__bitRateQueryProhibitTimer;

/* RRC_LogicalChannelConfig */
typedef struct RRC_LogicalChannelConfig {
	struct RRC_LogicalChannelConfig__ul_SpecificParameters {
		long	 priority;
		long	 prioritisedBitRate;
		long	 bucketSizeDuration;
		struct RRC_LogicalChannelConfig__ul_SpecificParameters__allowedServingCells {
			A_SEQUENCE_OF(RRC_ServCellIndex_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *allowedServingCells;
		struct RRC_LogicalChannelConfig__ul_SpecificParameters__allowedSCS_List {
			A_SEQUENCE_OF(RRC_SubcarrierSpacing_t) list;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *allowedSCS_List;
		long	*maxPUSCH_Duration;	/* OPTIONAL */
		long	*configuredGrantType1Allowed;	/* OPTIONAL */
		long	*logicalChannelGroup;	/* OPTIONAL */
		RRC_SchedulingRequestId_t	*schedulingRequestID;	/* OPTIONAL */
		BOOLEAN_t	 logicalChannelSR_Mask;
		BOOLEAN_t	 logicalChannelSR_DelayTimerApplied;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		long	*bitRateQueryProhibitTimer;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_SpecificParameters;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_LogicalChannelConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_prioritisedBitRate_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_bucketSizeDuration_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_maxPUSCH_Duration_42;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_configuredGrantType1Allowed_51;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_bitRateQueryProhibitTimer_58;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_LogicalChannelConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_LogicalChannelConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_LogicalChannelConfig_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_LogicalChannelConfig_H_ */
#include <asn_internal.h>
/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_SI_RequestConfig_H_
#define	_RRC_SI_RequestConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include "RRC_RACH-ConfigGeneric.h"
#include <constr_SEQUENCE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion {
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_oneEighth	= 0,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_oneFourth	= 1,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_oneHalf	= 2,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_one	= 3,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_two	= 4,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_four	= 5,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_eight	= 6,
	RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion_sixteen	= 7
} e_RRC_SI_RequestConfig__rach_OccasionsSI__ssb_perRACH_Occasion;
typedef enum RRC_SI_RequestConfig__si_RequestPeriod {
	RRC_SI_RequestConfig__si_RequestPeriod_one	= 0,
	RRC_SI_RequestConfig__si_RequestPeriod_two	= 1,
	RRC_SI_RequestConfig__si_RequestPeriod_four	= 2,
	RRC_SI_RequestConfig__si_RequestPeriod_six	= 3,
	RRC_SI_RequestConfig__si_RequestPeriod_eight	= 4,
	RRC_SI_RequestConfig__si_RequestPeriod_ten	= 5,
	RRC_SI_RequestConfig__si_RequestPeriod_twelve	= 6,
	RRC_SI_RequestConfig__si_RequestPeriod_sixteen	= 7
} e_RRC_SI_RequestConfig__si_RequestPeriod;

/* Forward declarations */
struct RRC_SI_RequestResources;

/* RRC_SI-RequestConfig */
typedef struct RRC_SI_RequestConfig {
	struct RRC_SI_RequestConfig__rach_OccasionsSI {
		RRC_RACH_ConfigGeneric_t	 rach_ConfigSI;
		long	 ssb_perRACH_Occasion;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *rach_OccasionsSI;
	long	*si_RequestPeriod;	/* OPTIONAL */
	struct RRC_SI_RequestConfig__si_RequestResources {
		A_SEQUENCE_OF(struct RRC_SI_RequestResources) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} si_RequestResources;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_SI_RequestConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_ssb_perRACH_Occasion_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_si_RequestPeriod_13;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_SI_RequestConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_SI_RequestConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_SI_RequestConfig_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_SI_RequestConfig_H_ */
#include <asn_internal.h>
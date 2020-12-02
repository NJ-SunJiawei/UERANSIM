/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_MeasConfig_H_
#define	_RRC_MeasConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_RSRP-Range.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_MeasConfig__s_MeasureConfig_PR {
	RRC_MeasConfig__s_MeasureConfig_PR_NOTHING,	/* No components present */
	RRC_MeasConfig__s_MeasureConfig_PR_ssb_RSRP,
	RRC_MeasConfig__s_MeasureConfig_PR_csi_RSRP
} RRC_MeasConfig__s_MeasureConfig_PR;

/* Forward declarations */
struct RRC_MeasObjectToRemoveList;
struct RRC_MeasObjectToAddModList;
struct RRC_ReportConfigToRemoveList;
struct RRC_ReportConfigToAddModList;
struct RRC_MeasIdToRemoveList;
struct RRC_MeasIdToAddModList;
struct RRC_QuantityConfig;
struct RRC_MeasGapConfig;
struct RRC_MeasGapSharingConfig;

/* RRC_MeasConfig */
typedef struct RRC_MeasConfig {
	struct RRC_MeasObjectToRemoveList	*measObjectToRemoveList;	/* OPTIONAL */
	struct RRC_MeasObjectToAddModList	*measObjectToAddModList;	/* OPTIONAL */
	struct RRC_ReportConfigToRemoveList	*reportConfigToRemoveList;	/* OPTIONAL */
	struct RRC_ReportConfigToAddModList	*reportConfigToAddModList;	/* OPTIONAL */
	struct RRC_MeasIdToRemoveList	*measIdToRemoveList;	/* OPTIONAL */
	struct RRC_MeasIdToAddModList	*measIdToAddModList;	/* OPTIONAL */
	struct RRC_MeasConfig__s_MeasureConfig {
		RRC_MeasConfig__s_MeasureConfig_PR present;
		union RRC_MeasConfig__RRC_s_MeasureConfig_u {
			RRC_RSRP_Range_t	 ssb_RSRP;
			RRC_RSRP_Range_t	 csi_RSRP;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_MeasureConfig;
	struct RRC_QuantityConfig	*quantityConfig;	/* OPTIONAL */
	struct RRC_MeasGapConfig	*measGapConfig;	/* OPTIONAL */
	struct RRC_MeasGapSharingConfig	*measGapSharingConfig;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_MeasConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_MeasConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_MeasConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_MeasConfig_1[10];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_MeasConfig_H_ */
#include <asn_internal.h>
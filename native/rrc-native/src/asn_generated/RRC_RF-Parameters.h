/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_RF_Parameters_H_
#define	_RRC_RF_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_RF_Parameters__ext1__srs_SwitchingTimeRequested {
	RRC_RF_Parameters__ext1__srs_SwitchingTimeRequested_true	= 0
} e_RRC_RF_Parameters__ext1__srs_SwitchingTimeRequested;

/* Forward declarations */
struct RRC_BandCombinationList;
struct RRC_FreqBandList;
struct RRC_BandNR;
struct RRC_BandCombinationList_v1540;
struct RRC_BandCombinationList_v1550;
struct RRC_BandCombinationList_v1560;

/* RRC_RF-Parameters */
typedef struct RRC_RF_Parameters {
	struct RRC_RF_Parameters__supportedBandListNR {
		A_SEQUENCE_OF(struct RRC_BandNR) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} supportedBandListNR;
	struct RRC_BandCombinationList	*supportedBandCombinationList;	/* OPTIONAL */
	struct RRC_FreqBandList	*appliedFreqBandListFilter;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RRC_RF_Parameters__ext1 {
		struct RRC_BandCombinationList_v1540	*supportedBandCombinationList_v1540;	/* OPTIONAL */
		long	*srs_SwitchingTimeRequested;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct RRC_RF_Parameters__ext2 {
		struct RRC_BandCombinationList_v1550	*supportedBandCombinationList_v1550;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	struct RRC_RF_Parameters__ext3 {
		struct RRC_BandCombinationList_v1560	*supportedBandCombinationList_v1560;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext3;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_RF_Parameters_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_RRC_srs_SwitchingTimeRequested_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRC_RF_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_RF_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_RF_Parameters_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_RF_Parameters_H_ */
#include <asn_internal.h>

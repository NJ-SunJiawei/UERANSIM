/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_ReferenceSignalConfig_H_
#define	_RRC_ReferenceSignalConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRC_SSB_ConfigMobility;
struct RRC_SetupRelease_CSI_RS_ResourceConfigMobility;

/* RRC_ReferenceSignalConfig */
typedef struct RRC_ReferenceSignalConfig {
	struct RRC_SSB_ConfigMobility	*ssb_ConfigMobility;	/* OPTIONAL */
	struct RRC_SetupRelease_CSI_RS_ResourceConfigMobility	*csi_rs_ResourceConfigMobility;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_ReferenceSignalConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_ReferenceSignalConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_ReferenceSignalConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_ReferenceSignalConfig_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_ReferenceSignalConfig_H_ */
#include <asn_internal.h>

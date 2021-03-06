/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_FreqBandInformationNR_H_
#define	_RRC_FreqBandInformationNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC_FreqBandIndicatorNR.h"
#include "RRC_AggregatedBandwidth.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_FreqBandInformationNR */
typedef struct RRC_FreqBandInformationNR {
	RRC_FreqBandIndicatorNR_t	 bandNR;
	RRC_AggregatedBandwidth_t	*maxBandwidthRequestedDL;	/* OPTIONAL */
	RRC_AggregatedBandwidth_t	*maxBandwidthRequestedUL;	/* OPTIONAL */
	long	*maxCarriersRequestedDL;	/* OPTIONAL */
	long	*maxCarriersRequestedUL;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_FreqBandInformationNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_FreqBandInformationNR;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_FreqBandInformationNR_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_FreqBandInformationNR_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_FreqBandInformationNR_H_ */
#include <asn_internal.h>

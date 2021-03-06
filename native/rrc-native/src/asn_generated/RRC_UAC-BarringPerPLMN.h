/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_UAC_BarringPerPLMN_H_
#define	_RRC_UAC_BarringPerPLMN_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "RRC_UAC-BarringInfoSetIndex.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR {
	RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR_NOTHING,	/* No components present */
	RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR_uac_ImplicitACBarringList,
	RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR_uac_ExplicitACBarringList
} RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR;

/* Forward declarations */
struct RRC_UAC_BarringPerCatList;

/* RRC_UAC-BarringPerPLMN */
typedef struct RRC_UAC_BarringPerPLMN {
	long	 plmn_IdentityIndex;
	struct RRC_UAC_BarringPerPLMN__uac_ACBarringListType {
		RRC_UAC_BarringPerPLMN__uac_ACBarringListType_PR present;
		union RRC_UAC_BarringPerPLMN__RRC_uac_ACBarringListType_u {
			struct RRC_UAC_BarringPerPLMN__uac_ACBarringListType__uac_ImplicitACBarringList {
				A_SEQUENCE_OF(RRC_UAC_BarringInfoSetIndex_t) list;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *uac_ImplicitACBarringList;
			struct RRC_UAC_BarringPerCatList	*uac_ExplicitACBarringList;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uac_ACBarringListType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRC_UAC_BarringPerPLMN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRC_UAC_BarringPerPLMN;
extern asn_SEQUENCE_specifics_t asn_SPC_RRC_UAC_BarringPerPLMN_specs_1;
extern asn_TYPE_member_t asn_MBR_RRC_UAC_BarringPerPLMN_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_UAC_BarringPerPLMN_H_ */
#include <asn_internal.h>

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "asn/nr-rrc-15.6.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all -findirect-choice -fno-include-deps -gen-PER -no-gen-OER -no-gen-example -D rrc`
 */

#ifndef	_RRC_TCI_StateId_H_
#define	_RRC_TCI_StateId_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RRC_TCI-StateId */
typedef long	 RRC_TCI_StateId_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RRC_TCI_StateId_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RRC_TCI_StateId;
asn_struct_free_f RRC_TCI_StateId_free;
asn_struct_print_f RRC_TCI_StateId_print;
asn_constr_check_f RRC_TCI_StateId_constraint;
ber_type_decoder_f RRC_TCI_StateId_decode_ber;
der_type_encoder_f RRC_TCI_StateId_encode_der;
xer_type_decoder_f RRC_TCI_StateId_decode_xer;
xer_type_encoder_f RRC_TCI_StateId_encode_xer;
per_type_decoder_f RRC_TCI_StateId_decode_uper;
per_type_encoder_f RRC_TCI_StateId_encode_uper;
per_type_decoder_f RRC_TCI_StateId_decode_aper;
per_type_encoder_f RRC_TCI_StateId_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RRC_TCI_StateId_H_ */
#include <asn_internal.h>

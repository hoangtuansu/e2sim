/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#ifndef	_QCI_H_
#define	_QCI_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* QCI */
typedef long	 QCI_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_QCI_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_QCI;
asn_struct_free_f QCI_free;
asn_struct_print_f QCI_print;
asn_constr_check_f QCI_constraint;
ber_type_decoder_f QCI_decode_ber;
der_type_encoder_f QCI_encode_der;
xer_type_decoder_f QCI_decode_xer;
xer_type_encoder_f QCI_encode_xer;
jer_type_encoder_f QCI_encode_jer;
per_type_decoder_f QCI_decode_uper;
per_type_encoder_f QCI_encode_uper;
per_type_decoder_f QCI_decode_aper;
per_type_encoder_f QCI_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _QCI_H_ */
#include "asn_internal.h"

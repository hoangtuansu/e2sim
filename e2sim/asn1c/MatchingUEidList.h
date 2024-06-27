/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#ifndef	_MatchingUEidList_H_
#define	_MatchingUEidList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MatchingUEidItem;

/* MatchingUEidList */
typedef struct MatchingUEidList {
	A_SEQUENCE_OF(struct MatchingUEidItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MatchingUEidList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MatchingUEidList;
extern asn_SET_OF_specifics_t asn_SPC_MatchingUEidList_specs_1;
extern asn_TYPE_member_t asn_MBR_MatchingUEidList_1[1];
extern asn_per_constraints_t asn_PER_type_MatchingUEidList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _MatchingUEidList_H_ */
#include "asn_internal.h"

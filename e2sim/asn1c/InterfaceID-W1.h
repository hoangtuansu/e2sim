/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-COMMON-IEs"
 * 	found in "e2sm-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#ifndef	_InterfaceID_W1_H_
#define	_InterfaceID_W1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GlobalNgENB-ID.h"
#include "E2SM-COMMON-IEs_NGENB-DU-ID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* InterfaceID-W1 */
typedef struct InterfaceID_W1 {
	GlobalNgENB_ID_t	 global_ng_eNB_ID;
	E2SM_COMMON_IEs_NGENB_DU_ID_t	 ng_eNB_DU_ID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterfaceID_W1_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterfaceID_W1;
extern asn_SEQUENCE_specifics_t asn_SPC_InterfaceID_W1_specs_1;
extern asn_TYPE_member_t asn_MBR_InterfaceID_W1_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _InterfaceID_W1_H_ */
#include "asn_internal.h"

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-KPM-IEs"
 * 	found in "e2sm-kpm-v03.00.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#include "TestCond-Expression.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_TestCond_Expression_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  4 }	/* (0..4,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_TestCond_Expression_value2enum_1[] = {
	{ 0,	5,	"equal" },
	{ 1,	11,	"greaterthan" },
	{ 2,	8,	"lessthan" },
	{ 3,	8,	"contains" },
	{ 4,	7,	"present" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_TestCond_Expression_enum2value_1[] = {
	3,	/* contains(3) */
	0,	/* equal(0) */
	1,	/* greaterthan(1) */
	2,	/* lessthan(2) */
	4	/* present(4) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_TestCond_Expression_specs_1 = {
	asn_MAP_TestCond_Expression_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_TestCond_Expression_enum2value_1,	/* N => "tag"; sorted by N */
	5,	/* Number of elements in the maps */
	6,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_TestCond_Expression_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_TestCond_Expression = {
	"TestCond-Expression",
	"TestCond-Expression",
	&asn_OP_NativeEnumerated,
	asn_DEF_TestCond_Expression_tags_1,
	sizeof(asn_DEF_TestCond_Expression_tags_1)
		/sizeof(asn_DEF_TestCond_Expression_tags_1[0]), /* 1 */
	asn_DEF_TestCond_Expression_tags_1,	/* Same as above */
	sizeof(asn_DEF_TestCond_Expression_tags_1)
		/sizeof(asn_DEF_TestCond_Expression_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_TestCond_Expression_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_TestCond_Expression_specs_1	/* Additional specs */
};


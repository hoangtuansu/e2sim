/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2AP-PDU-Contents"
 * 	found in "e2ap-pdu-v03.01.asn"
 * 	`asn1c -pdu=auto -fincludes-quoted -fcompound-names -findirect-choice -fno-include-deps -no-gen-example -no-gen-OER -D /tmp/workspace/oransim-gerrit/e2sim/asn1c/`
 */

#include "RICaction-ToBeSetup-Item.h"

#include "RICsubsequentAction.h"
asn_TYPE_member_t asn_MBR_RICaction_ToBeSetup_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_ToBeSetup_Item, ricActionID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionID,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricActionID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RICaction_ToBeSetup_Item, ricActionType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionType,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricActionType"
		},
	{ ATF_POINTER, 3, offsetof(struct RICaction_ToBeSetup_Item, ricActionDefinition),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionDefinition,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricActionDefinition"
		},
	{ ATF_POINTER, 2, offsetof(struct RICaction_ToBeSetup_Item, ricSubsequentAction),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICsubsequentAction,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricSubsequentAction"
		},
	{ ATF_POINTER, 1, offsetof(struct RICaction_ToBeSetup_Item, ricActionExecutionOrder),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RICactionExecutionOrder,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"ricActionExecutionOrder"
		},
};
static const int asn_MAP_RICaction_ToBeSetup_Item_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RICaction_ToBeSetup_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RICaction_ToBeSetup_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ricActionID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ricActionType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ricActionDefinition */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ricSubsequentAction */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ricActionExecutionOrder */
};
asn_SEQUENCE_specifics_t asn_SPC_RICaction_ToBeSetup_Item_specs_1 = {
	sizeof(struct RICaction_ToBeSetup_Item),
	offsetof(struct RICaction_ToBeSetup_Item, _asn_ctx),
	asn_MAP_RICaction_ToBeSetup_Item_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RICaction_ToBeSetup_Item_oms_1,	/* Optional members */
	2, 1,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RICaction_ToBeSetup_Item = {
	"RICaction-ToBeSetup-Item",
	"RICaction-ToBeSetup-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_RICaction_ToBeSetup_Item_tags_1,
	sizeof(asn_DEF_RICaction_ToBeSetup_Item_tags_1)
		/sizeof(asn_DEF_RICaction_ToBeSetup_Item_tags_1[0]), /* 1 */
	asn_DEF_RICaction_ToBeSetup_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_RICaction_ToBeSetup_Item_tags_1)
		/sizeof(asn_DEF_RICaction_ToBeSetup_Item_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_RICaction_ToBeSetup_Item_1,
	5,	/* Elements count */
	&asn_SPC_RICaction_ToBeSetup_Item_specs_1	/* Additional specs */
};


/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.rrc.asn.sequences;

import tr.havelsan.ueransim.asn.core.AsnSequence;
import tr.havelsan.ueransim.rrc.asn.enums.RRC_TimeAlignmentTimer;
import tr.havelsan.ueransim.rrc.asn.integers.RRC_TAG_Id;

public class RRC_TAG extends AsnSequence {
    public RRC_TAG_Id tag_Id; // mandatory
    public RRC_TimeAlignmentTimer timeAlignmentTimer; // mandatory
}


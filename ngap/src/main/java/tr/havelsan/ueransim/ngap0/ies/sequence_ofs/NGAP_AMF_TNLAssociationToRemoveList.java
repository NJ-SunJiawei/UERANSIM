/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.ngap0.ies.sequence_ofs;

import tr.havelsan.ueransim.ngap0.core.*;
import tr.havelsan.ueransim.ngap0.pdu.*;
import tr.havelsan.ueransim.utils.bits.*;
import tr.havelsan.ueransim.utils.octets.*;
import tr.havelsan.ueransim.ngap0.ies.bit_strings.*;
import tr.havelsan.ueransim.ngap0.ies.octet_strings.*;
import tr.havelsan.ueransim.ngap0.ies.printable_strings.*;
import tr.havelsan.ueransim.ngap0.ies.sequences.*;
import tr.havelsan.ueransim.ngap0.ies.sequence_ofs.*;
import tr.havelsan.ueransim.ngap0.ies.choices.*;
import tr.havelsan.ueransim.ngap0.ies.integers.*;
import tr.havelsan.ueransim.ngap0.ies.enumerations.*;

import java.util.List;

public class NGAP_AMF_TNLAssociationToRemoveList extends NGAP_SequenceOf<NGAP_AMF_TNLAssociationToRemoveItem> {

    public NGAP_AMF_TNLAssociationToRemoveList() {
        super();
    }

    public NGAP_AMF_TNLAssociationToRemoveList(List<NGAP_AMF_TNLAssociationToRemoveItem> value) {
        super(value);
    }

    @Override
    public String getAsnName() {
        return "AMF-TNLAssociationToRemoveList";
    }

    @Override
    public String getXmlTagName() {
        return "AMF-TNLAssociationToRemoveList";
    }

    @Override
    public Class<NGAP_AMF_TNLAssociationToRemoveItem> getItemType() {
        return NGAP_AMF_TNLAssociationToRemoveItem.class;
    }
}

/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.nas.eap;

import tr.havelsan.ueransim.utils.octets.Octet;
import tr.havelsan.ueransim.utils.octets.OctetString;

public class EapNotification extends Eap {
    public OctetString rawData;

    public EapNotification(ECode code, Octet id) {
        super(code, id, EEapType.NOTIFICATION);
    }

    public EapNotification(ECode code, Octet id, OctetString rawData) {
        super(code, id, EEapType.NOTIFICATION);
        this.rawData = rawData;
    }
}

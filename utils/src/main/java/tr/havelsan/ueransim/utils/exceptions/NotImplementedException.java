/*
 * Copyright (c) 2020 ALİ GÜNGÖR (aligng1620@gmail.com)
 * This software and all associated files are licensed under GPL-3.0.
 */

package tr.havelsan.ueransim.utils.exceptions;

public class NotImplementedException extends RuntimeException {
    private String message;

    public NotImplementedException(String message) {
        this.message = message;
    }

    @Override
    public String getMessage() {
        return message;
    }
}

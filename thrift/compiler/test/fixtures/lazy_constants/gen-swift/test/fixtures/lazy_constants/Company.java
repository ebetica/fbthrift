package test.fixtures.lazy_constants;

import com.facebook.swift.codec.*;

public enum Company
{
    FACEBOOK(0), WHATSAPP(1), OCULUS(2), INSTAGRAM(3);

    private final int value;

    Company(int value)
    {
        this.value = value;
    }

    @ThriftEnumValue
    public int getValue()
    {
        return value;
    }

    public static Company fromInteger(int n) {
        switch (n) {
        case 0:
            return FACEBOOK;
        case 1:
            return WHATSAPP;
        case 2:
            return OCULUS;
        case 3:
            return INSTAGRAM;
        default:
            return null;
        }
    }
}

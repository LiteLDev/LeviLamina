#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union EncryptedFileHeader {
    char _data[256]; // this+0x0
    struct {
        char unknown;
    } _efheader; // this+0x0
};

union SignatureValue {
    unsigned int  _value;             // this+0x0
    unsigned char _signatureBytes[4]; // this+0x0
};
}; // namespace Crypto

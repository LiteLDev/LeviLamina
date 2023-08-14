#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Crypto {

union EncryptedFileHeader {
    uint8_t _data[256]; // this+0x0
    struct {
        uint8_t unknown;
    } _efheader; // this+0x0
};

union SignatureValue {
    unsigned int  _value;             // this+0x0
    uint8_t _signatureBytes[4]; // this+0x0
};
}; // namespace Crypto

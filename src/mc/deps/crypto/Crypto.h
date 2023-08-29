#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/Padding.h"
#include "mc/deps/crypto/asymmetric/PubKeyFormat.h"
#include "mc/deps/crypto/asymmetric/System.h"
#include "mc/deps/crypto/hash/HashType.h"
#include "mc/deps/crypto/symmetric/OperationMode.h"
#include "mc/deps/crypto/symmetric/System.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

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

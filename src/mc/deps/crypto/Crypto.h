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
namespace Crypto::Hash { class IHash; }
namespace mce { class UUID; }
// clang-format on

namespace Crypto {

union EncryptedFileHeader {
    uchar _data[256]; // this+0x0
    struct {
        uchar unknown;
    } _efheader; // this+0x0
};

union SignatureValue {
    uint  _value;             // this+0x0
    uchar _signatureBytes[4]; // this+0x0
};
}; // namespace Crypto

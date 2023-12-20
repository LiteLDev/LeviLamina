#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class MessageDigest {
public:
    // prevent constructor by default
    MessageDigest& operator=(MessageDigest const&);
    MessageDigest(MessageDigest const&);
    MessageDigest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1MessageDigest@rtc@@UEAA@XZ
    virtual ~MessageDigest();

    // vIndex: 1, symbol: ?Size@OpenSSLDigest@rtc@@UEBA_KXZ
    virtual uint64 Size() const = 0;

    // vIndex: 2, symbol: ?Update@OpenSSLDigest@rtc@@UEAAXPEBX_K@Z
    virtual void Update(void const*, uint64) = 0;

    // vIndex: 3, symbol: ?Finish@OpenSSLDigest@rtc@@UEAA_KPEAX_K@Z
    virtual uint64 Finish(void*, uint64) = 0;

    // NOLINTEND
};

}; // namespace rtc

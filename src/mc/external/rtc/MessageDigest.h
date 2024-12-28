#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class MessageDigest {
public:
    // prevent constructor by default
    MessageDigest& operator=(MessageDigest const&);
    MessageDigest(MessageDigest const&);
    MessageDigest();
};

} // namespace rtc

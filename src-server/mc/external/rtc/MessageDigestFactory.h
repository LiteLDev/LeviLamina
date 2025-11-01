#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class MessageDigest; }
// clang-format on

namespace rtc {

class MessageDigestFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::rtc::MessageDigest* Create(::std::string_view alg);
    // NOLINTEND
};

} // namespace rtc

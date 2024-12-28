#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class MessageDigest; }
// clang-format on

namespace rtc {

struct MessageDigestFactory {
public:
    // prevent constructor by default
    MessageDigestFactory& operator=(MessageDigestFactory const&);
    MessageDigestFactory(MessageDigestFactory const&);
    MessageDigestFactory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::rtc::MessageDigest* Create(::std::string_view);
    // NOLINTEND
};

} // namespace rtc

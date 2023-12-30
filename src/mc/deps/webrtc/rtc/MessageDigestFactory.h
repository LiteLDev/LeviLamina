#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class MessageDigest; }
// clang-format on

namespace rtc {

class MessageDigestFactory {
public:
    // prevent constructor by default
    MessageDigestFactory& operator=(MessageDigestFactory const&);
    MessageDigestFactory(MessageDigestFactory const&);
    MessageDigestFactory();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Create@MessageDigestFactory@rtc@@SAPEAVMessageDigest@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static class rtc::MessageDigest* Create(std::string_view);

    // NOLINTEND
};

}; // namespace rtc

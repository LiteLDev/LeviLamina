#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CodecVendor; }
namespace webrtc { class PayloadTypeSuggester; }
// clang-format on

namespace webrtc {

class CodecLookupHelper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CodecLookupHelper();

    virtual ::webrtc::PayloadTypeSuggester* PayloadTypeSuggester() = 0;

    virtual ::webrtc::CodecVendor* GetCodecVendor() = 0;
    // NOLINTEND
};

} // namespace webrtc

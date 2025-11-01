#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FixedLengthEncodingParametersV3 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb631c4;
    ::ll::UntypedStorage<1, 1> mUnk902adc;
    ::ll::UntypedStorage<1, 1> mUnk6c206f;
    ::ll::UntypedStorage<8, 8> mUnkdb21fa;
    ::ll::UntypedStorage<8, 8> mUnk438bd9;
    ::ll::UntypedStorage<8, 8> mUnkfca164;
    // NOLINTEND

public:
    // prevent constructor by default
    FixedLengthEncodingParametersV3& operator=(FixedLengthEncodingParametersV3 const&);
    FixedLengthEncodingParametersV3(FixedLengthEncodingParametersV3 const&);
    FixedLengthEncodingParametersV3();
};

} // namespace webrtc

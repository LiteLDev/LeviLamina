#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FieldParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk76ce7b;
    ::ll::UntypedStorage<8, 8> mUnk9bebc1;
    ::ll::UntypedStorage<1, 1> mUnkea97a7;
    ::ll::UntypedStorage<8, 8> mUnk81d805;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldParameters& operator=(FieldParameters const&);
    FieldParameters(FieldParameters const&);
    FieldParameters();
};

} // namespace webrtc

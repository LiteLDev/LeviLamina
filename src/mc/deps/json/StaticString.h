#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

class StaticString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk33dc96;
    // NOLINTEND

public:
    // prevent constructor by default
    StaticString& operator=(StaticString const&);
    StaticString(StaticString const&);
    StaticString();
};

} // namespace Json

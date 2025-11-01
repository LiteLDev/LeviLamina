#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct SizeInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view> mSizeName;
    ::ll::TypedStorage<8, 16, ::std::string_view> mSizeTexturePath;
    // NOLINTEND

};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class AllowListQRCode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mID;
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<8, 32, ::std::string> mTarget;
    // NOLINTEND
};

} // namespace OreUI

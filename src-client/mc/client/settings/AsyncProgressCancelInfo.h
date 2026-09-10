#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct AsyncProgressCancelInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mCancelLabel;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCancelCallback;
    // NOLINTEND
};

} // namespace Settings

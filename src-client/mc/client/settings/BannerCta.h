#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings {

struct BannerCta {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mText;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
    // NOLINTEND
};

} // namespace Settings

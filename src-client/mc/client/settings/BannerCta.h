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

public:
    // prevent constructor by default
    BannerCta();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerCta(::std::string text, ::std::function<void()> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string text, ::std::function<void()> callback);
    // NOLINTEND
};

} // namespace Settings

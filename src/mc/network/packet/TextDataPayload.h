#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"

struct TextDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mText;
    ::ll::TypedStorage<1, 1, bool>                           mUseRotation;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                           mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                           mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                           mShowTextBackface;
    // NOLINTEND
};

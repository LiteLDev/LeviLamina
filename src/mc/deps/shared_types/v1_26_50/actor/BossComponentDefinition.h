#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_50 {

struct BossComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<1, 1, bool>           mShouldDarkenSky;
    ::ll::TypedStorage<4, 4, int>            mHudRange;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DEFAULT_HUD_RANGE();

    MCAPI static bool const& DEFAULT_SHOULD_DARKEN_SKY();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50

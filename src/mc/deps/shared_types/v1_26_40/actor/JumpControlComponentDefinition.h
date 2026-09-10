#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_40/actor/JumpDataDefinition.h"

namespace SharedTypes::v1_26_40 {

struct JumpControlComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                        mJumpPower;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_26_40::JumpDataDefinition> mRegularSkipData;
    ::ll::TypedStorage<4, 16, ::SharedTypes::v1_26_40::JumpDataDefinition> mFastSkipData;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40

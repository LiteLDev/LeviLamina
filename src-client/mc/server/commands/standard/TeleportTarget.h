#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/server/commands/standard/TeleportData.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
// clang-format on

class TeleportTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>                    mRotation;
    ::ll::TypedStorage<4, 28, ::std::optional<::TeleportData>>            mData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChangeDimensionRequest>> mChangeRequest;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TeleportTarget();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

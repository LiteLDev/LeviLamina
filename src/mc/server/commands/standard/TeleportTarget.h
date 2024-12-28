#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChangeDimensionRequest;
class Vec2;
struct TeleportData;
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
    // prevent constructor by default
    TeleportTarget& operator=(TeleportTarget const&);
    TeleportTarget(TeleportTarget const&);
    TeleportTarget();

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

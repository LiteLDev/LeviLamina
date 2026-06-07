#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Tag;
// clang-format on

class PositionTrackingId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingId();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PositionTrackingId(::PositionTrackingId&& id);

    MCAPI PositionTrackingId(::PositionTrackingId const& id);

    MCAPI explicit PositionTrackingId(::std::string const& stringVal);

    MCAPI void fromTag(::Tag const* tag);

    MCAPI ::std::unique_ptr<::Tag> getTag() const;

    MCAPI void init();

    MCFOLD ::PositionTrackingId& operator=(::PositionTrackingId&& id);

    MCFOLD ::PositionTrackingId& operator=(::PositionTrackingId const& id);

    MCAPI ::std::string const toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PositionTrackingId const& INVALID_ID();

    MCAPI static uint& sNextId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::PositionTrackingId&& id);

    MCFOLD void* $ctor(::PositionTrackingId const& id);

    MCAPI void* $ctor(::std::string const& stringVal);
    // NOLINTEND
};

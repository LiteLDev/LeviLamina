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
    ::ll::UntypedStorage<4, 4> mUnkecd528;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingId();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PositionTrackingId(::PositionTrackingId const&);

    MCAPI PositionTrackingId(::PositionTrackingId&&);

    MCAPI void fromTag(::Tag const* tag);

    MCAPI ::std::unique_ptr<::Tag> getTag() const;

    MCAPI ::PositionTrackingId& operator=(::PositionTrackingId const&);

    MCAPI ::PositionTrackingId& operator=(::PositionTrackingId&&);

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
    MCAPI void* $ctor(::PositionTrackingId const&);

    MCAPI void* $ctor(::PositionTrackingId&&);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionTrackingId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkecd528;
    // NOLINTEND

public:
    // prevent constructor by default
    PositionTrackingId& operator=(PositionTrackingId const&);
    PositionTrackingId(PositionTrackingId const&);
    PositionTrackingId();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PositionTrackingId const& INVALID_ID();

    MCNAPI static uint& sNextId();
    // NOLINTEND
};

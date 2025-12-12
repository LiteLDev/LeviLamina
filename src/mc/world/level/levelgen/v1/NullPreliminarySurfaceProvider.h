#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class NullPreliminarySurfaceProvider : public ::IPreliminarySurfaceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;

    virtual ~NullPreliminarySurfaceProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

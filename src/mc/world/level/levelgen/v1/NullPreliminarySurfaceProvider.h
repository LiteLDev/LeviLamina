#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"
#include "mc/world/level/levelgen/v1/IPreliminarySurfaceProvider.h"

class NullPreliminarySurfaceProvider : public ::IPreliminarySurfaceProvider {
public:
    // prevent constructor by default
    NullPreliminarySurfaceProvider& operator=(NullPreliminarySurfaceProvider const&);
    NullPreliminarySurfaceProvider(NullPreliminarySurfaceProvider const&);
    NullPreliminarySurfaceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<short> getPreliminarySurfaceLevel(::DividedPos2d<4>) const /*override*/;

    // vIndex: 0
    virtual ~NullPreliminarySurfaceProvider() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<short> $getPreliminarySurfaceLevel(::DividedPos2d<4>) const;
    // NOLINTEND
};

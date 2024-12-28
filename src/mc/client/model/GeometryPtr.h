#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeometryPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk465477;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryPtr& operator=(GeometryPtr const&);
    GeometryPtr(GeometryPtr const&);
    GeometryPtr();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeometryPtr();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

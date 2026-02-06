#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockGeometry {

struct Face {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          u0;
    ::ll::TypedStorage<4, 4, float>          v0;
    ::ll::TypedStorage<4, 4, float>          u1;
    ::ll::TypedStorage<4, 4, float>          v1;
    ::ll::TypedStorage<4, 4, int>            rotation;
    ::ll::TypedStorage<8, 32, ::std::string> texture;
    ::ll::TypedStorage<4, 4, int>            textureIndex;
    ::ll::TypedStorage<1, 1, bool>           enabled;
    // NOLINTEND

public:
    // prevent constructor by default
    Face& operator=(Face const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Face();

    MCAPI Face(::BlockGeometry::Face&&);

    MCAPI Face(::BlockGeometry::Face const&);

    MCAPI ~Face();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockGeometry::Face&&);

    MCAPI void* $ctor(::BlockGeometry::Face const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometry

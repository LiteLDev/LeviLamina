#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::mesh {

class Mesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 32> mUnka798ae;
    ::ll::UntypedStorage<8, 24> mUnkf18398;
    ::ll::UntypedStorage<8, 24> mUnkf5b9c3;
    ::ll::UntypedStorage<8, 24> mUnk4000f3;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Mesh();

    MCNAPI Mesh(::dragon::mesh::Mesh const&);

    MCNAPI bool areBuffersValid() const;

    MCNAPI ::dragon::mesh::Mesh& operator=(::dragon::mesh::Mesh const&);

    MCNAPI ~Mesh();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::dragon::mesh::Mesh const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::mesh

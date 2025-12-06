#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct MeshDataVertexFieldCounts; }
// clang-format on

namespace mce {

class MeshData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk42b31e;
    ::ll::UntypedStorage<8, 24> mUnkb8c839;
    ::ll::UntypedStorage<8, 24> mUnk1d448f;
    ::ll::UntypedStorage<8, 24> mUnkd464e6;
    ::ll::UntypedStorage<8, 24> mUnk45f1c1;
    ::ll::UntypedStorage<8, 24> mUnk172677;
    ::ll::UntypedStorage<8, 24> mUnk1e8388;
    ::ll::UntypedStorage<8, 72> mUnk64f0ad;
    ::ll::UntypedStorage<8, 24> mUnk9d8524;
    ::ll::UntypedStorage<8, 24> mUnk83c95a;
    ::ll::UntypedStorage<1, 14> mUnk51e65b;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshData& operator=(MeshData const&);
    MeshData(MeshData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshData();

    MCNAPI MeshData(::mce::MeshData&&);

    MCNAPI void clear();

    MCNAPI ::mce::MeshData clone() const;

    MCNAPI void freeMemory();

    MCNAPI ::mce::MeshDataVertexFieldCounts getVertexFieldCount() const;

    MCNAPI ::mce::MeshData& operator=(::mce::MeshData&&);

    MCNAPI ~MeshData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::mce::MeshData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce

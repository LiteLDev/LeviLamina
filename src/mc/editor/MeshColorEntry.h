#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshColorEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk51e198;
    ::ll::UntypedStorage<4, 16> mUnkc11f86;
    ::ll::UntypedStorage<4, 4>  mUnk3f6a4d;
    ::ll::UntypedStorage<8, 32> mUnkdfae34;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshColorEntry& operator=(MeshColorEntry const&);
    MeshColorEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshColorEntry(::Editor::Mesh::MeshColorEntry const&);

    MCNAPI bool operator==(::Editor::Mesh::MeshColorEntry const& rhs) const;

    MCNAPI ~MeshColorEntry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Mesh::MeshColorEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Mesh

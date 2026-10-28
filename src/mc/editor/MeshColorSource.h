#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Mesh {

struct MeshColorSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk66f33d;
    ::ll::UntypedStorage<1, 1>  mUnk4eab6a;
    ::ll::UntypedStorage<8, 32> mUnkb2ca18;
    ::ll::UntypedStorage<8, 24> mUnk7ee11c;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshColorSource& operator=(MeshColorSource const&);
    MeshColorSource();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshColorSource(::Editor::Mesh::MeshColorSource const&);

    MCNAPI bool operator==(::Editor::Mesh::MeshColorSource const& rhs) const;

    MCNAPI ~MeshColorSource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Mesh::MeshColorSource const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Mesh

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MeshVoxelizeResultPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::MeshVoxelizeResultPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5f6248;
    ::ll::UntypedStorage<1, 1>  mUnk7d290e;
    ::ll::UntypedStorage<8, 32> mUnkcc4fe7;
    ::ll::UntypedStorage<8, 24> mUnk7e399f;
    ::ll::UntypedStorage<1, 1>  mUnk12d1de;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshVoxelizeResultPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeshVoxelizeResultPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshVoxelizeResultPayload(::Editor::Network::MeshVoxelizeResultPayload const&);

    MCNAPI ::Editor::Network::MeshVoxelizeResultPayload& operator=(::Editor::Network::MeshVoxelizeResultPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshVoxelizeResultPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network

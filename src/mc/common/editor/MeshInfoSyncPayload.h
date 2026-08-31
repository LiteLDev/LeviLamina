#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MeshInfoSyncPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MeshInfoSyncPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5569d5;
    ::ll::UntypedStorage<8, 32> mUnk8f99b8;
    ::ll::UntypedStorage<4, 4>  mUnk17a18c;
    ::ll::UntypedStorage<4, 4>  mUnk94a95c;
    ::ll::UntypedStorage<4, 4>  mUnk389b80;
    ::ll::UntypedStorage<4, 12> mUnk2f36fd;
    ::ll::UntypedStorage<4, 12> mUnk6d3b66;
    ::ll::UntypedStorage<1, 1>  mUnk400991;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshInfoSyncPayload& operator=(MeshInfoSyncPayload const&);
    MeshInfoSyncPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeshInfoSyncPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshInfoSyncPayload(::Editor::Network::MeshInfoSyncPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshInfoSyncPayload const&);
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

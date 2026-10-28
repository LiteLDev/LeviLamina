#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MeshLoadRequestPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MeshLoadRequestPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9f0d0;
    ::ll::UntypedStorage<8, 32> mUnk9e0698;
    ::ll::UntypedStorage<4, 4>  mUnk43edd7;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshLoadRequestPayload& operator=(MeshLoadRequestPayload const&);
    MeshLoadRequestPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeshLoadRequestPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshLoadRequestPayload(::Editor::Network::MeshLoadRequestPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshLoadRequestPayload const&);
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

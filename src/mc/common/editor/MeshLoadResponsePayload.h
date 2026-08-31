#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MeshLoadResponsePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MeshLoadResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8fb7d3;
    ::ll::UntypedStorage<1, 1>  mUnk46e571;
    ::ll::UntypedStorage<8, 32> mUnk72dd9a;
    ::ll::UntypedStorage<8, 32> mUnkdbd381;
    ::ll::UntypedStorage<8, 32> mUnk931834;
    ::ll::UntypedStorage<4, 4>  mUnkd21c54;
    ::ll::UntypedStorage<4, 4>  mUnkc3bdfb;
    ::ll::UntypedStorage<4, 4>  mUnkdf8ad3;
    ::ll::UntypedStorage<4, 12> mUnkfb07a2;
    ::ll::UntypedStorage<4, 12> mUnk81facb;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshLoadResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeshLoadResponsePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshLoadResponsePayload(::Editor::Network::MeshLoadResponsePayload const&);

    MCNAPI ::Editor::Network::MeshLoadResponsePayload& operator=(::Editor::Network::MeshLoadResponsePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshLoadResponsePayload const&);
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MeshCommitRequestPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MeshCommitRequestPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk163459;
    ::ll::UntypedStorage<8, 32> mUnk5d112f;
    ::ll::UntypedStorage<4, 4>  mUnk81e47e;
    ::ll::UntypedStorage<4, 12> mUnk9cf175;
    ::ll::UntypedStorage<4, 12> mUnk56fdd0;
    ::ll::UntypedStorage<4, 12> mUnk11b953;
    ::ll::UntypedStorage<8, 32> mUnk82eb97;
    // NOLINTEND

public:
    // prevent constructor by default
    MeshCommitRequestPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MeshCommitRequestPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MeshCommitRequestPayload(::Editor::Network::MeshCommitRequestPayload const&);

    MCNAPI ::Editor::Network::MeshCommitRequestPayload& operator=(::Editor::Network::MeshCommitRequestPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::MeshCommitRequestPayload const&);
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

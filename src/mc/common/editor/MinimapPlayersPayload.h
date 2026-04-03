#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class MinimapPlayersPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::MinimapPlayersPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbae9d2;
    ::ll::UntypedStorage<8, 24> mUnka4088f;
    // NOLINTEND

public:
    // prevent constructor by default
    MinimapPlayersPayload& operator=(MinimapPlayersPayload const&);
    MinimapPlayersPayload(MinimapPlayersPayload const&);
    MinimapPlayersPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinimapPlayersPayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
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

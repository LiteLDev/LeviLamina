#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PlayerZoomPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::PlayerZoomPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk49437a;
    ::ll::UntypedStorage<4, 12> mUnk88d7b2;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerZoomPayload& operator=(PlayerZoomPayload const&);
    PlayerZoomPayload(PlayerZoomPayload const&);
    PlayerZoomPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerZoomPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network

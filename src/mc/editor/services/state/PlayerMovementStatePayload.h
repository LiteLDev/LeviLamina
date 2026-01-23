#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PlayerMovementStatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PlayerMovementStatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc15ff6;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMovementStatePayload& operator=(PlayerMovementStatePayload const&);
    PlayerMovementStatePayload(PlayerMovementStatePayload const&);
    PlayerMovementStatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerMovementStatePayload() /*override*/ = default;
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

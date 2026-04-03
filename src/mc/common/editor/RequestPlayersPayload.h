#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RequestPlayersPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::RequestPlayersPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39698e;
    ::ll::UntypedStorage<4, 12> mUnk6a32bc;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestPlayersPayload& operator=(RequestPlayersPayload const&);
    RequestPlayersPayload(RequestPlayersPayload const&);
    RequestPlayersPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RequestPlayersPayload() /*override*/ = default;
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

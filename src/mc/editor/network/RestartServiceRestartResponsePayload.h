#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RestartServiceRestartResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RestartServiceRestartResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk1162b1;
    ::ll::UntypedStorage<8, 40> mUnk5da2c7;
    // NOLINTEND

public:
    // prevent constructor by default
    RestartServiceRestartResponsePayload& operator=(RestartServiceRestartResponsePayload const&);
    RestartServiceRestartResponsePayload(RestartServiceRestartResponsePayload const&);
    RestartServiceRestartResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RestartServiceRestartResponsePayload() /*override*/;
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

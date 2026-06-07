#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RestartServiceRequestRestartPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RestartServiceRequestRestartPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk1ff17c;
    // NOLINTEND

public:
    // prevent constructor by default
    RestartServiceRequestRestartPayload& operator=(RestartServiceRequestRestartPayload const&);
    RestartServiceRequestRestartPayload(RestartServiceRequestRestartPayload const&);
    RestartServiceRequestRestartPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RestartServiceRequestRestartPayload() /*override*/ = default;
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ServerScriptTeardownRebuildPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ServerScriptTeardownRebuildPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc13653;
    ::ll::UntypedStorage<1, 1> mUnk8b4a55;
    ::ll::UntypedStorage<1, 1> mUnk48dfa0;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerScriptTeardownRebuildPayload& operator=(ServerScriptTeardownRebuildPayload const&);
    ServerScriptTeardownRebuildPayload(ServerScriptTeardownRebuildPayload const&);
    ServerScriptTeardownRebuildPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerScriptTeardownRebuildPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/IServerURLResolver.h"

// auto generated forward declare list
// clang-format off
struct PingedCompatibleServer;
namespace RakNet { struct RakNetGUID; }
// clang-format on

namespace World {

class ServerURLResolver : public ::World::IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerURLResolver() /*override*/ = default;

    virtual bool
    fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion) /*override*/;

    virtual void fromString(::RakNet::RakNetGUID& guid, char const* source) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion);

    MCAPI void $fromString(::RakNet::RakNetGUID& guid, char const* source);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World

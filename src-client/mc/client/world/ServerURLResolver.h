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

    virtual bool fromStringExplicitPort(::PingedCompatibleServer&, char const*, ushort, int) /*override*/;

    virtual void fromString(::RakNet::RakNetGUID&, char const*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World

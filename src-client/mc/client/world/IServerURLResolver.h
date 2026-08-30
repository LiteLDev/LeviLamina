#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct PingedCompatibleServer;
namespace RakNet { struct RakNetGUID; }
// clang-format on

namespace World {

class IServerURLResolver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerURLResolver();

    virtual bool
    fromStringExplicitPort(::PingedCompatibleServer& server, char const* str, ushort port, int ipVersion) = 0;

    virtual void fromString(::RakNet::RakNetGUID& guid, char const* source) = 0;
    // NOLINTEND
};

} // namespace World

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
    virtual ~IServerURLResolver() = default;

    virtual bool fromStringExplicitPort(::PingedCompatibleServer&, char const*, ushort, int) = 0;

    virtual void fromString(::RakNet::RakNetGUID&, char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World

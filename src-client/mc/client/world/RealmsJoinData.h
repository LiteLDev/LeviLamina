#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/ServerRegion.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
// clang-format on

namespace World {

struct RealmsJoinData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          ip;
    ::ll::TypedStorage<4, 4, int>                     port;
    ::ll::TypedStorage<8, 8, ::Realms::World&>        world;
    ::ll::TypedStorage<8, 40, ::Realms::ServerRegion> server;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsJoinData& operator=(RealmsJoinData const&);
    RealmsJoinData(RealmsJoinData const&);
    RealmsJoinData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RealmsJoinData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World

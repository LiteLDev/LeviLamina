#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ClientNetworkSystem.h"
#include "mc/network/ServerNetworkSystem.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class ServerNetworkSystem;
// clang-format on

class ClientOrServerNetworkSystemRef
: public ::std::
      variant<::std::reference_wrapper<::ClientNetworkSystem>, ::std::reference_wrapper<::ServerNetworkSystem>> {
public:
    // ClientOrServerNetworkSystemRef inner types define
    using ClientRefT = ::std::reference_wrapper<::ClientNetworkSystem>;

    using ServerRefT = ::std::reference_wrapper<::ServerNetworkSystem>;

    using BaseT = ::std::
        variant<::std::reference_wrapper<::ClientNetworkSystem>, ::std::reference_wrapper<::ServerNetworkSystem>>;

public:
    using ClientRefT = std::reference_wrapper<ClientNetworkSystem>;
    using ServerRefT = std::reference_wrapper<ServerNetworkSystem>;

    ClientNetworkSystem& toClientNetworkSystem() { return std::get<ClientRefT>(*this).get(); }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ServerNetworkSystem& toServerNetworkSystem();
    // NOLINTEND
};

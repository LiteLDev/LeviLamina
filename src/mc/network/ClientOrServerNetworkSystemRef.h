#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    using BaseT = ::std::
        variant<::std::reference_wrapper<::ClientNetworkSystem>, ::std::reference_wrapper<::ServerNetworkSystem>>;

    using ClientRefT = ::std::reference_wrapper<::ClientNetworkSystem>;

    using ServerRefT = ::std::reference_wrapper<::ServerNetworkSystem>;

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::ClientNetworkSystem& toClientNetworkSystem();
#endif

    MCAPI ::ServerNetworkSystem& toServerNetworkSystem();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct CloudKey; }
namespace RakNet { struct CloudQuery; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class CloudServerQueryFilter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CloudServerQueryFilter() = default;

    virtual bool
    OnPostRequest(::RakNet::RakNetGUID, ::RakNet::SystemAddress, ::RakNet::CloudKey, uint, char const*) = 0;

    virtual bool
    OnReleaseRequest(::RakNet::RakNetGUID, ::RakNet::SystemAddress, ::DataStructures::List<::RakNet::CloudKey>&) = 0;

    virtual bool OnGetRequest(
        ::RakNet::RakNetGUID,
        ::RakNet::SystemAddress,
        ::RakNet::CloudQuery&,
        ::DataStructures::List<::RakNet::RakNetGUID>&
    ) = 0;

    virtual bool OnUnsubscribeRequest(
        ::RakNet::RakNetGUID,
        ::RakNet::SystemAddress,
        ::DataStructures::List<::RakNet::CloudKey>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet

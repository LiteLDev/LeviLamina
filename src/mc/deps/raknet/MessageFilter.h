#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace DataStructures { class OrderedList; }
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct FilterSet; }
namespace RakNet { struct FilteredSystem; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class MessageFilter : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<int, ::RakNet::FilterSet*, $unknown_type>> filterList;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::Hash<::RakNet::AddressOrGUID, ::RakNet::FilteredSystem, 2048, $unknown_type>>
                                     systemList;
    ::ll::TypedStorage<4, 4, int>    autoAddNewConnectionsToFilter;
    ::ll::TypedStorage<8, 8, uint64> whenLastTimeoutCheck;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessageFilter() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet

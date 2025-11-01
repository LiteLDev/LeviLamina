#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RelayPlugin : public ::RakNet::PluginInterface2 {
public:
    // RelayPlugin inner types declare
    // clang-format off
    struct RP_Group;
    struct StrAndGuid;
    struct StrAndGuidAndRoom;
    // clang-format on

    // RelayPlugin inner types define
    struct StrAndGuidAndRoom {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk8f48d6;
        ::ll::UntypedStorage<8, 16> mUnkc73f21;
        ::ll::UntypedStorage<8, 8>  mUnk3039ae;
        // NOLINTEND

    public:
        // prevent constructor by default
        StrAndGuidAndRoom& operator=(StrAndGuidAndRoom const&);
        StrAndGuidAndRoom(StrAndGuidAndRoom const&);
        StrAndGuidAndRoom();
    };

    struct StrAndGuid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk8d469b;
        ::ll::UntypedStorage<8, 16> mUnk86b3bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        StrAndGuid& operator=(StrAndGuid const&);
        StrAndGuid(StrAndGuid const&);
        StrAndGuid();
    };

    struct RP_Group {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkac78d8;
        ::ll::UntypedStorage<8, 16> mUnk7d18f1;
        // NOLINTEND

    public:
        // prevent constructor by default
        RP_Group& operator=(RP_Group const&);
        RP_Group(RP_Group const&);
        RP_Group();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk721270;
    ::ll::UntypedStorage<8, 16> mUnk864903;
    ::ll::UntypedStorage<8, 16> mUnk5bffef;
    ::ll::UntypedStorage<1, 1>  mUnk5b7a2f;
    // NOLINTEND

public:
    // prevent constructor by default
    RelayPlugin& operator=(RelayPlugin const&);
    RelayPlugin(RelayPlugin const&);
    RelayPlugin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RelayPlugin() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

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

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

class MessageFilter : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk92036b;
    ::ll::UntypedStorage<8, 16> mUnkf4cb8d;
    ::ll::UntypedStorage<4, 4>  mUnkbffbe9;
    ::ll::UntypedStorage<8, 8>  mUnk7ffeab;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageFilter& operator=(MessageFilter const&);
    MessageFilter(MessageFilter const&);
    MessageFilter();

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

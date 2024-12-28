#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class StatisticsHistoryPlugin : public ::RakNet::PluginInterface2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc1c2ef;
    ::ll::UntypedStorage<1, 1>  mUnka762cb;
    ::ll::UntypedStorage<1, 1>  mUnk3f7be4;
    ::ll::UntypedStorage<4, 4>  mUnk4d998f;
    // NOLINTEND

public:
    // prevent constructor by default
    StatisticsHistoryPlugin& operator=(StatisticsHistoryPlugin const&);
    StatisticsHistoryPlugin(StatisticsHistoryPlugin const&);
    StatisticsHistoryPlugin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StatisticsHistoryPlugin() /*override*/;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $Update();

    MCAPI void
    $OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    MCAPI void $OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);
    // NOLINTEND
};

} // namespace RakNet

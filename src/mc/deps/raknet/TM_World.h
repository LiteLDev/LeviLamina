#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_LostConnectionReason.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TM_World {
public:
    // TM_World inner types declare
    // clang-format off
    struct JoinRequestHelper;
    // clang-format on

    // TM_World inner types define
    struct JoinRequestHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4ade50;
        ::ll::UntypedStorage<4, 4> mUnkefe286;
        ::ll::UntypedStorage<4, 4> mUnk392f57;
        ::ll::UntypedStorage<4, 4> mUnk5742fd;
        // NOLINTEND

    public:
        // prevent constructor by default
        JoinRequestHelper& operator=(JoinRequestHelper const&);
        JoinRequestHelper(JoinRequestHelper const&);
        JoinRequestHelper();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk971cef;
    ::ll::UntypedStorage<8, 16> mUnkf009a0;
    ::ll::UntypedStorage<8, 8>  mUnkbea5b8;
    ::ll::UntypedStorage<8, 16> mUnke9bced;
    ::ll::UntypedStorage<8, 16> mUnk90858a;
    ::ll::UntypedStorage<8, 16> mUnkbf3b48;
    ::ll::UntypedStorage<1, 1>  mUnkfcbf6f;
    ::ll::UntypedStorage<8, 16> mUnkadffe6;
    ::ll::UntypedStorage<1, 1>  mUnk3795d4;
    ::ll::UntypedStorage<1, 1>  mUnk310f70;
    ::ll::UntypedStorage<4, 4>  mUnkfa89be;
    // NOLINTEND

public:
    // prevent constructor by default
    TM_World& operator=(TM_World const&);
    TM_World(TM_World const&);
    TM_World();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_World();

    // vIndex: 1
    virtual void
    OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    // vIndex: 2
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $OnClosedConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, ::RakNet::PI2_LostConnectionReason);

    MCAPI void $OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool);
    // NOLINTEND
};

} // namespace RakNet

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"
#include "mc/deps/raknet/RNS2BindResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk55931b;
    ::ll::UntypedStorage<8, 64> mUnk7a66ff;
    ::ll::UntypedStorage<4, 4>  mUnka056d9;
    ::ll::UntypedStorage<1, 1>  mUnk5cd8af;
    // NOLINTEND

public:
    // prevent constructor by default
    RNS2_Berkley& operator=(RNS2_Berkley const&);
    RNS2_Berkley(RNS2_Berkley const&);
    RNS2_Berkley();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RNS2_Berkley() /*override*/ = default;

    // vIndex: 2
    virtual void SetMulticastInterface(int interfaceIndex) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RakNet::RNS2BindResult
    BindShared(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCAPI ::RakNet::RNS2BindResult
    BindSharedIPV4And6(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCAPI void BlockOnStopRecvPollingThread();

    MCAPI int CreateRecvPollingThread(int threadPriority);

    MCAPI uint RecvFromLoopInt();

    MCAPI void SetBroadcastSocket(int broadcast);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void GetSystemAddressIPV4And6(int rns2Socket, ::RakNet::SystemAddress* systemAddressOut);

    MCAPI static uint RecvFromLoop(void* arguments);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SetMulticastInterface(int interfaceIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet

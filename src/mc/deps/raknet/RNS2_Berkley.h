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
    MCNAPI ::RakNet::RNS2BindResult
    BindShared(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCNAPI ::RakNet::RNS2BindResult
    BindSharedIPV4And6(::RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCNAPI void BlockOnStopRecvPollingThread();

    MCNAPI int CreateRecvPollingThread(int threadPriority);

    MCNAPI uint RecvFromLoopInt();

    MCNAPI void SetBroadcastSocket(int broadcast);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void GetSystemAddressIPV4And6(int rns2Socket, ::RakNet::SystemAddress* systemAddressOut);

    MCNAPI static uint RecvFromLoop(void* arguments);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetMulticastInterface(int interfaceIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet

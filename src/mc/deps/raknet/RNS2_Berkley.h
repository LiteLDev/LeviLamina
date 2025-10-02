#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"
#include "mc/deps/raknet/LocklessUint32_t.h"
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RNS2_BerkleyBindParameters.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                   rns2Socket;
    ::ll::TypedStorage<8, 64, ::RakNet::RNS2_BerkleyBindParameters> binding;
    ::ll::TypedStorage<4, 4, ::RakNet::LocklessUint32_t>            isRecvFromLoopThreadActive;
    ::ll::TypedStorage<1, 1, bool volatile>                         endThreads;
    // NOLINTEND

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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $SetMulticastInterface(int interfaceIndex);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet

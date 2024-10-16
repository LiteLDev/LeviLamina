#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/IRNS2_Berkley.h"
#include "mc/deps/raknet/RNS2BindResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class IRNS2_Berkley; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RNS2_Berkley : public ::RakNet::IRNS2_Berkley {
public:
    // prevent constructor by default
    RNS2_Berkley& operator=(RNS2_Berkley const&);
    RNS2_Berkley(RNS2_Berkley const&);
    RNS2_Berkley();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RNS2_Berkley();

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void SetMulticastInterface(int interfaceIndex);

    MCAPI void BlockOnStopRecvPollingThread();

    MCAPI int CreateRecvPollingThread(int threadPriority);

    MCAPI void SetDoNotFragment(int opt);

    MCAPI void SignalStopRecvPollingThread();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ::RakNet::RNS2BindResult
    BindShared(struct RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCAPI ::RakNet::RNS2BindResult
    BindSharedIPV4And6(struct RakNet::RNS2_BerkleyBindParameters* bindParameters, char const* file, uint line);

    MCAPI uint RecvFromLoopInt();

    MCAPI void SetBroadcastSocket(int broadcast);

    MCAPI void SetSocketOptions();

    MCAPI static void GetSystemAddressIPV4And6(int rns2Socket, struct RakNet::SystemAddress* systemAddressOut);

    MCAPI static uint RecvFromLoop(void* arguments);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void SetMulticastInterface$(int interfaceIndex);

    // NOLINTEND
};

}; // namespace RakNet

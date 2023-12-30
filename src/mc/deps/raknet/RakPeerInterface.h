#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakPeerInterface {
public:
    // prevent constructor by default
    RakPeerInterface& operator=(RakPeerInterface const&);
    RakPeerInterface(RakPeerInterface const&);
    RakPeerInterface();

    using Deleter       = void(RakPeerInterface*);
    using InstanceOwner = std::unique_ptr<RakPeerInterface, Deleter*>;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RakPeerInterface@RakNet@@UEAA@XZ
    virtual ~RakPeerInterface();

    // symbol: ?DestroyInstance@RakPeerInterface@RakNet@@SAXPEAV12@@Z
    MCAPI static void DestroyInstance(class RakNet::RakPeerInterface* i);

    // symbol: ?GetInstance@RakPeerInterface@RakNet@@SAPEAV12@XZ
    MCAPI static class RakNet::RakPeerInterface* GetInstance();

    // NOLINTEND
};

}; // namespace RakNet

MCAPI RakNet::RakPeerInterface::InstanceOwner createUniqueRakPeer();

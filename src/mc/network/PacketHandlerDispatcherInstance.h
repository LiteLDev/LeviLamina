#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/client/renderer/rendergraph/Packet.h"

class NetworkIdentifier;
class NetEventCallback;

template <class PacketType, bool Unknown = false>
class PacketHandlerDispatcherInstance {
public:
    MCAPI void $handle(NetworkIdentifier const&, NetEventCallback&, class std::shared_ptr<Packet>&) const;
};

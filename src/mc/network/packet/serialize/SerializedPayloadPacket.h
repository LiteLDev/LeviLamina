#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/network/Packet.h"

template <typename PacketInfoT, typename PacketPayloadT>
class SerializedPayloadPacket : public Packet, public PacketPayloadT {
public:
    SerializationMode serializationMode;

}

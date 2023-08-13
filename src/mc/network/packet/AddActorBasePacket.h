#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/Packet.h"

class AddActorBasePacket : public ::Packet {

public:
    // prevent constructor by default
    AddActorBasePacket& operator=(AddActorBasePacket const&) = delete;
    AddActorBasePacket(AddActorBasePacket const&)            = delete;
    AddActorBasePacket()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORBASEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorBasePacket();
#endif
    // NOLINTEND
};

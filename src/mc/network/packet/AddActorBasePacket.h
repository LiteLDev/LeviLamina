#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddActorBasePacket {

public:
    // prevent constructor by default
    AddActorBasePacket& operator=(AddActorBasePacket const&) = delete;
    AddActorBasePacket(AddActorBasePacket const&)            = delete;
    AddActorBasePacket()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORBASEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorBasePacket(); // NOLINT
#endif
};

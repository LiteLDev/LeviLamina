#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AddActorBasePacket {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORBASEPACKET
public:
    AddActorBasePacket& operator=(AddActorBasePacket const&) = delete;
    AddActorBasePacket(AddActorBasePacket const&)            = delete;
    AddActorBasePacket()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORBASEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorBasePacket();
#endif
};

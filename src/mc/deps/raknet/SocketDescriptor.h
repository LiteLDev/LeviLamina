#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_SOCKETDESCRIPTOR
public:
    SocketDescriptor& operator=(SocketDescriptor const&) = delete;
    SocketDescriptor(SocketDescriptor const&)            = delete;
    SocketDescriptor()                                   = delete;
#endif

public:
    /**
     * @symbol ??0SocketDescriptor\@RakNet\@\@QEAA\@GPEBD\@Z
     */
    MCAPI SocketDescriptor(unsigned short, char const*);
};

}; // namespace RakNet

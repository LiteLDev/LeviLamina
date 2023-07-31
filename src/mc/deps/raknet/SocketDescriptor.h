#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct SocketDescriptor {

public:
    // prevent constructor by default
    SocketDescriptor& operator=(SocketDescriptor const&) = delete;
    SocketDescriptor(SocketDescriptor const&)            = delete;
    SocketDescriptor()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SocketDescriptor\@RakNet\@\@QEAA\@GPEBD\@Z
     */
    MCAPI SocketDescriptor(unsigned short, char const*);
    // NOLINTEND
};

}; // namespace RakNet

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BookSignPacket {

public:
    // prevent constructor by default
    BookSignPacket& operator=(BookSignPacket const&) = delete;
    BookSignPacket(BookSignPacket const&)            = delete;
    BookSignPacket()                                 = delete;
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BookSignPacket {
public:
    // prevent constructor by default
    BookSignPacket& operator=(BookSignPacket const&);
    BookSignPacket(BookSignPacket const&);
    BookSignPacket();
};

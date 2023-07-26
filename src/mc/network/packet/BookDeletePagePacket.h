#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BookDeletePagePacket {

public:
    // prevent constructor by default
    BookDeletePagePacket& operator=(BookDeletePagePacket const&) = delete;
    BookDeletePagePacket(BookDeletePagePacket const&)            = delete;
    BookDeletePagePacket()                                       = delete;
};

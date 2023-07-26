#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BookAddPagePacket {

public:
    // prevent constructor by default
    BookAddPagePacket& operator=(BookAddPagePacket const&) = delete;
    BookAddPagePacket(BookAddPagePacket const&)            = delete;
    BookAddPagePacket()                                    = delete;
};

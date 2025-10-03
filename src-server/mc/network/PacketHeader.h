#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk51c870;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketHeader& operator=(PacketHeader const&);
    PacketHeader(PacketHeader const&);
    PacketHeader();
};

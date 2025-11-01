#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 136> mUnk4c7ea6;
    ::ll::UntypedStorage<8, 16> mUnk3a468a;
    ::ll::UntypedStorage<4, 4> mUnk80581e;
    ::ll::UntypedStorage<4, 4> mUnk36479c;
    ::ll::UntypedStorage<8, 8> mUnka0d95b;
    ::ll::UntypedStorage<1, 1> mUnkd837bb;
    ::ll::UntypedStorage<1, 1> mUnk2e9d47;
    // NOLINTEND

public:
    // prevent constructor by default
    Packet& operator=(Packet const&);
    Packet(Packet const&);
    Packet();

};

}

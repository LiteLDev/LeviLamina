#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SentPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5f2900;
    ::ll::UntypedStorage<8, 8> mUnkb055db;
    ::ll::UntypedStorage<8, 8> mUnk84e13b;
    ::ll::UntypedStorage<8, 24> mUnkf1f73d;
    ::ll::UntypedStorage<1, 1> mUnk4a1750;
    ::ll::UntypedStorage<8, 8> mUnk381932;
    ::ll::UntypedStorage<8, 8> mUnk2b117c;
    // NOLINTEND

public:
    // prevent constructor by default
    SentPacket& operator=(SentPacket const&);
    SentPacket(SentPacket const&);
    SentPacket();

};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PacketViolation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk35cea8;
    ::ll::UntypedStorage<4, 4> mUnka5e6fc;
    ::ll::UntypedStorage<4, 4> mUnk14a1c0;
    ::ll::UntypedStorage<8, 24> mUnkd55951;
    ::ll::UntypedStorage<4, 4> mUnked96ed;
    ::ll::UntypedStorage<8, 8> mUnkadf17d;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolation& operator=(PacketViolation const&);
    PacketViolation(PacketViolation const&);
    PacketViolation();

};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
// clang-format on

class WorldClockRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk42c0cd;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockRegistry& operator=(WorldClockRegistry const&);
    WorldClockRegistry(WorldClockRegistry const&);
    WorldClockRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistry() = default;

    virtual void tick(::PacketSender& packetSender) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
// clang-format on

class ServerPlayerLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc3e923;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerLoader& operator=(ServerPlayerLoader const&);
    ServerPlayerLoader(ServerPlayerLoader const&);
    ServerPlayerLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool loadNewPlayer(::ServerPlayer& newPlayer, bool isXboxLive);
    // NOLINTEND
};

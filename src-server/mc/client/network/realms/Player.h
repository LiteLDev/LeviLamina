#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct Player {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk269943;
    ::ll::UntypedStorage<8, 32> mUnkb5488d;
    ::ll::UntypedStorage<8, 32> mUnkc7b8fe;
    ::ll::UntypedStorage<8, 72> mUnk3468aa;
    ::ll::UntypedStorage<1, 1>  mUnk64710a;
    ::ll::UntypedStorage<1, 1>  mUnke1c1b0;
    ::ll::UntypedStorage<1, 1>  mUnk8c6858;
    ::ll::UntypedStorage<1, 1>  mUnkd251a2;
    ::ll::UntypedStorage<1, 1>  mUnk5a0651;
    ::ll::UntypedStorage<8, 8>  mUnk7ca601;
    // NOLINTEND

public:
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();
};

} // namespace Realms

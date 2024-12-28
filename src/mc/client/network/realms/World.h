#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Realms {

struct World {
public:
    // World inner types define
    enum class State : int {
        Uninitialized = 0,
        Closed        = 1,
        Open          = 2,
        End           = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk156a86;
    ::ll::UntypedStorage<4, 4>  mUnk93c9bd;
    ::ll::UntypedStorage<8, 32> mUnke3ca1d;
    ::ll::UntypedStorage<8, 32> mUnk6616a8;
    ::ll::UntypedStorage<8, 32> mUnkf67979;
    ::ll::UntypedStorage<8, 32> mUnka29ae1;
    ::ll::UntypedStorage<8, 32> mUnkb61c74;
    ::ll::UntypedStorage<8, 32> mUnk8b5e11;
    ::ll::UntypedStorage<8, 32> mUnk89c9da;
    ::ll::UntypedStorage<4, 4>  mUnk639018;
    ::ll::UntypedStorage<1, 1>  mUnk88061d;
    ::ll::UntypedStorage<4, 4>  mUnke0043d;
    ::ll::UntypedStorage<1, 1>  mUnk1f31a8;
    ::ll::UntypedStorage<4, 8>  mUnk54c6ea;
    ::ll::UntypedStorage<1, 1>  mUnk460012;
    ::ll::UntypedStorage<4, 4>  mUnka3fabd;
    ::ll::UntypedStorage<1, 1>  mUnk41af39;
    ::ll::UntypedStorage<1, 1>  mUnk1fc12d;
    ::ll::UntypedStorage<1, 1>  mUnk6b3fdd;
    ::ll::UntypedStorage<1, 1>  mUnk8a869f;
    ::ll::UntypedStorage<1, 1>  mUnk854fce;
    ::ll::UntypedStorage<4, 4>  mUnk2a4947;
    ::ll::UntypedStorage<4, 4>  mUnk6d7c74;
    ::ll::UntypedStorage<1, 1>  mUnkd8238c;
    ::ll::UntypedStorage<8, 24> mUnk445c59;
    ::ll::UntypedStorage<8, 24> mUnk223b36;
    ::ll::UntypedStorage<8, 24> mUnkad2b6e;
    ::ll::UntypedStorage<4, 12> mUnk4134c5;
    ::ll::UntypedStorage<1, 1>  mUnke43919;
    ::ll::UntypedStorage<8, 16> mUnk48dc55;
    ::ll::UntypedStorage<8, 16> mUnk9f8761;
    ::ll::UntypedStorage<8, 8>  mUnkcb0dc1;
    // NOLINTEND

public:
    // prevent constructor by default
    World& operator=(World const&);
    World(World const&);
    World();
};

} // namespace Realms

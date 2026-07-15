#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class Move {
public:
    // Move inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // Move inner types define
    class Definition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnka9e131;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7fcffc;
    ::ll::UntypedStorage<1, 1>  mUnk69ab68;
    ::ll::UntypedStorage<4, 8>  mUnk391dee;
    ::ll::UntypedStorage<4, 4>  mUnk7ccd6f;
    ::ll::UntypedStorage<4, 12> mUnk88eb9e;
    // NOLINTEND

public:
    // prevent constructor by default
    Move& operator=(Move const&);
    Move(Move const&);
    Move();
};

} // namespace AgentComponents

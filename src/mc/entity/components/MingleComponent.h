#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MingleComponent {
public:
    // MingleComponent inner types define
    enum class MingleState : int {
        Unavailable      = 0,
        Available        = 1,
        PartneredActive  = 2,
        PartneredPassive = 3,
        Mingling         = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5ed224;
    ::ll::UntypedStorage<8, 8> mUnkcbaa3e;
    ::ll::UntypedStorage<8, 8> mUnk7deb29;
    // NOLINTEND

public:
    // prevent constructor by default
    MingleComponent& operator=(MingleComponent const&);
    MingleComponent(MingleComponent const&);
    MingleComponent();
};

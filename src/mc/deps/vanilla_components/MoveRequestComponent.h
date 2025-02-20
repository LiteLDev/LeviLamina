#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk302010;
    ::ll::UntypedStorage<4, 24> mUnk28069b;
    ::ll::UntypedStorage<4, 12> mUnk86f744;
    ::ll::UntypedStorage<4, 12> mUnk1e5c02;
    ::ll::UntypedStorage<4, 12> mUnk426cd3;
    ::ll::UntypedStorage<1, 1>  mUnk6a3ae6;
    ::ll::UntypedStorage<1, 1>  mUnk686831;
    ::ll::UntypedStorage<8, 56> mUnkb8821e;
    ::ll::UntypedStorage<4, 8>  mUnke71886;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveRequestComponent& operator=(MoveRequestComponent const&);
    MoveRequestComponent(MoveRequestComponent const&);
    MoveRequestComponent();
};

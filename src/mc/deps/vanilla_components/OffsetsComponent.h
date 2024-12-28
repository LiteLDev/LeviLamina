#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OffsetsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9ed5cf;
    ::ll::UntypedStorage<4, 4>  mUnk5dca59;
    ::ll::UntypedStorage<4, 12> mUnkd7f4ef;
    ::ll::UntypedStorage<4, 12> mUnk45c84f;
    ::ll::UntypedStorage<4, 12> mUnk61ab43;
    ::ll::UntypedStorage<4, 12> mUnkc80cfd;
    ::ll::UntypedStorage<4, 12> mUnk8112dc;
    // NOLINTEND

public:
    // prevent constructor by default
    OffsetsComponent& operator=(OffsetsComponent const&);
    OffsetsComponent(OffsetsComponent const&);
    OffsetsComponent();
};

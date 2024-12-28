#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapOnRailComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfdf44e;
    ::ll::UntypedStorage<4, 12> mUnkd81109;
    ::ll::UntypedStorage<8, 8>  mUnk31161a;
    ::ll::UntypedStorage<4, 4>  mUnkcc96ef;
    ::ll::UntypedStorage<1, 1>  mUnkc741f7;
    ::ll::UntypedStorage<1, 1>  mUnk5035fa;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapOnRailComponent& operator=(SnapOnRailComponent const&);
    SnapOnRailComponent(SnapOnRailComponent const&);
    SnapOnRailComponent();
};

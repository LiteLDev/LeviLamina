#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InsideGenericBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1f6810;
    ::ll::UntypedStorage<4, 28> mUnk85d629;
    ::ll::UntypedStorage<4, 4>  mUnk7d7ff3;
    ::ll::UntypedStorage<1, 1>  mUnk46e41f;
    // NOLINTEND

public:
    // prevent constructor by default
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&);
    InsideGenericBlockComponent(InsideGenericBlockComponent const&);
    InsideGenericBlockComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InsideGenericBlockComponent& operator=(::InsideGenericBlockComponent&&);
    // NOLINTEND
};

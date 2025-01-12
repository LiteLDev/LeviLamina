#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DisplayObjectMessageRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9aa1ec;
    ::ll::UntypedStorage<8, 32> mUnk525352;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayObjectMessageRequestComponent& operator=(DisplayObjectMessageRequestComponent const&);
    DisplayObjectMessageRequestComponent(DisplayObjectMessageRequestComponent const&);
    DisplayObjectMessageRequestComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::DisplayObjectMessageRequestComponent& operator=(::DisplayObjectMessageRequestComponent&&);
    // NOLINTEND
};

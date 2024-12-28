#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockItemVisualComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk819e64;
    ::ll::UntypedStorage<8, 8> mUnkc424d9;
    ::ll::UntypedStorage<8, 8> mUnk7166a9;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockItemVisualComponent& operator=(BlockItemVisualComponent const&);
    BlockItemVisualComponent(BlockItemVisualComponent const&);
    BlockItemVisualComponent();
};

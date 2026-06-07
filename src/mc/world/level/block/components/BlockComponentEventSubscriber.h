#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
// clang-format on

class BlockComponentEventSubscriber {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockEvents::BlockEventManager&> mBlockEventManager;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockComponentEventSubscriber& operator=(BlockComponentEventSubscriber const&);
    BlockComponentEventSubscriber(BlockComponentEventSubscriber const&);
    BlockComponentEventSubscriber();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockComponentEventSubscriber(::BlockEvents::BlockEventManager& manager);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::BlockEvents::BlockEventManager& manager);
    // NOLINTEND
};

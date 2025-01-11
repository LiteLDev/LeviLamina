#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class BlockSourceComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8b503a;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockSourceComponent(::WeakRef<::BlockSource> weakBlockSource);

    MCFOLD ::StackRefResult<::BlockSource> tryGetBlockSource() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WeakRef<::BlockSource> weakBlockSource);
    // NOLINTEND
};

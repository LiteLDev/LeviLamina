#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
namespace Editor::BlockUtils::Task { struct BlockUtilityPositionEntry; }
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockUtilityTaskMutationFinalizer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk18ced9;
    ::ll::UntypedStorage<8, 8>   mUnk17a3bb;
    ::ll::UntypedStorage<8, 152> mUnkbe568f;
    ::ll::UntypedStorage<8, 8>   mUnk2018da;
    ::ll::UntypedStorage<1, 1>   mUnkc3d7ea;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityTaskMutationFinalizer& operator=(BlockUtilityTaskMutationFinalizer const&);
    BlockUtilityTaskMutationFinalizer(BlockUtilityTaskMutationFinalizer const&);
    BlockUtilityTaskMutationFinalizer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockUtilityTaskMutationFinalizer(::BlockSource& region, ::Block const* constantPlacedBlock);

    MCNAPI void _finalizePosition(::Editor::BlockUtils::Task::BlockUtilityPositionEntry const& entry);

    MCNAPI void finalizeRemaining();

    MCNAPI ~BlockUtilityTaskMutationFinalizer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource& region, ::Block const* constantPlacedBlock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task

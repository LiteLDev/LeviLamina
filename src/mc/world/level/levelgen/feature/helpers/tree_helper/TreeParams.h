#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

namespace TreeHelper {

struct TreeParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbb737c;
    ::ll::UntypedStorage<4, 4>  mUnk257565;
    ::ll::UntypedStorage<8, 24> mUnk193c4d;
    ::ll::UntypedStorage<8, 24> mUnkf96cea;
    ::ll::UntypedStorage<8, 24> mUnkff269a;
    ::ll::UntypedStorage<8, 24> mUnka62789;
    ::ll::UntypedStorage<8, 24> mUnk5307dc;
    // NOLINTEND

public:
    // prevent constructor by default
    TreeParams& operator=(TreeParams const&);
    TreeParams(TreeParams const&);
    TreeParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _replaceBaseBlockCircle(::IBlockWorldGenAPI& target, ::BlockPos const& pos) const;

    MCAPI ~TreeParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace TreeHelper

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

namespace TreeHelper {

struct TreeParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                               mNumBaseClusters;
    ::ll::TypedStorage<4, 4, int>                               mClusterRadius;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mValidBaseBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBaseMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowOn;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayReplace;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mMayGrowThrough;
    // NOLINTEND

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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/block_utils/BlockUtilityFloodMatchCriteria.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockCriteriaMatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk92627f;
    ::ll::UntypedStorage<8, 8>  mUnk7f0efb;
    ::ll::UntypedStorage<1, 1>  mUnke28b82;
    ::ll::UntypedStorage<8, 64> mUnkec6f20;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCriteriaMatcher& operator=(BlockCriteriaMatcher const&);
    BlockCriteriaMatcher(BlockCriteriaMatcher const&);
    BlockCriteriaMatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockCriteriaMatcher(
        ::Block const&                                             seedBlock,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria criteria,
        ::std::vector<::std::string> const&                        customBlockList
    );

    MCNAPI bool operator()(::Block const& block) const;

    MCNAPI ~BlockCriteriaMatcher();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Block const&                                             seedBlock,
        ::Editor::BlockUtils::Task::BlockUtilityFloodMatchCriteria criteria,
        ::std::vector<::std::string> const&                        customBlockList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ComplexAliasBlockAchievementEventHelper {

struct ComplexAliasBlockPreSplitBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfcf74d;
    ::ll::UntypedStorage<4, 4>  mUnk474277;
    ::ll::UntypedStorage<4, 4>  mUnkd23379;
    ::ll::UntypedStorage<4, 4>  mUnk799c27;
    // NOLINTEND

public:
    // prevent constructor by default
    ComplexAliasBlockPreSplitBlockInfo& operator=(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo(ComplexAliasBlockPreSplitBlockInfo const&);
    ComplexAliasBlockPreSplitBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComplexAliasBlockPreSplitBlockInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ComplexAliasBlockAchievementEventHelper

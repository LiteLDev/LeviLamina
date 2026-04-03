#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper {

struct ComplexAliasBlockPreSplitBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd38e4c;
    ::ll::UntypedStorage<4, 4>  mUnk96e050;
    ::ll::UntypedStorage<4, 4>  mUnk39d1cf;
    ::ll::UntypedStorage<4, 4>  mUnk11c1a4;
    ::ll::UntypedStorage<4, 4>  mUnk69e9ec;
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

} // namespace Social::Events::AchievementEventingIdUtils::ComplexAliasBlockAchievementEventHelper

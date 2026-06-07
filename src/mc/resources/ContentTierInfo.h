#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class PackInstance;
struct SubpackInfo;
// clang-format on

class ContentTierInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk74513b;
    ::ll::UntypedStorage<1, 1> mUnk25ee98;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentTierInfo& operator=(ContentTierInfo const&);
    ContentTierInfo(ContentTierInfo const&);
    ContentTierInfo();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::ContentTierIncompatibleReason validatePackInstance(::PackInstance const& packInstance) const;

    MCNAPI ::ContentTierIncompatibleReason validateSubpack(::SubpackInfo const& subpackInfo) const;
#endif
    // NOLINTEND
};

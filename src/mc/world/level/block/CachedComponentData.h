#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct CachedComponentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnka3add9;
    ::ll::UntypedStorage<1, 1> mUnkd6c5eb;
    ::ll::UntypedStorage<4, 4> mUnk7c9950;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedComponentData& operator=(CachedComponentData const&);
    CachedComponentData(CachedComponentData const&);
    CachedComponentData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void cacheComponentData(::Block const& block);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DelayFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk8ae902;
    ::ll::UntypedStorage<4, 4>  mUnk7d95f6;
    ::ll::UntypedStorage<4, 4>  mUnke54c92;
    ::ll::UntypedStorage<8, 32> mUnk2319bc;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayFilter& operator=(DelayFilter const&);
    DelayFilter(DelayFilter const&);
    DelayFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::Legacy::Spawn::DelayFilter& operator=(::SharedTypes::Legacy::Spawn::DelayFilter&&);
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn

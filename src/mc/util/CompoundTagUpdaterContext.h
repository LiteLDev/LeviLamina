#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdaterResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

class CompoundTagUpdaterContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk2572ce;
    ::ll::UntypedStorage<8, 24> mUnk8f8756;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&);
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&);
    CompoundTagUpdaterContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);

    MCAPI ::CompoundTagUpdaterResult update(::CompoundTag& tag, uint version) const;
    // NOLINTEND
};

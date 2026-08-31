#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CompoundTagUpdaterResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdater;
class CompoundTagUpdaterNodeBuilder;
// clang-format on

class CompoundTagUpdaterContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                                   mUpdaterVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::CompoundTagUpdater>>> mUpdaters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTagUpdaterNodeBuilder addUpdater(uchar major, uchar minor, uchar patch);

    MCAPI ::CompoundTagUpdaterResult update(::CompoundTag& tag, uint version) const;
    // NOLINTEND
};

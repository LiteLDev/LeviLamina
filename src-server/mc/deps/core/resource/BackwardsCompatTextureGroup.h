#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BackwardsCompatTextureInfo;
// clang-format on

class BackwardsCompatTextureGroup {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkad3534;
    // NOLINTEND

public:
    // prevent constructor by default
    BackwardsCompatTextureGroup& operator=(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup(BackwardsCompatTextureGroup const&);
    BackwardsCompatTextureGroup();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BackwardsCompatTextureInfo const& invalidInfo();
    // NOLINTEND

};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SpawnCategory {

struct Config {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk83ee0f;
    ::ll::UntypedStorage<8, 16> mUnkb75eac;
    ::ll::UntypedStorage<1, 1>  mUnkc7ba97;
    ::ll::UntypedStorage<1, 1>  mUnk2df162;
    ::ll::UntypedStorage<4, 4>  mUnkde02a5;
    ::ll::UntypedStorage<4, 4>  mUnk8ae398;
    ::ll::UntypedStorage<4, 4>  mUnkc2c7f6;
    // NOLINTEND

public:
    // prevent constructor by default
    Config& operator=(Config const&);
    Config(Config const&);
    Config();
};

} // namespace SpawnCategory

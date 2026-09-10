#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

class PackOptimizer {
public:
    // PackOptimizer inner types declare
    // clang-format off
    struct Config;
    // clang-format on

    // PackOptimizer inner types define
    struct Config {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8224b5;
        ::ll::UntypedStorage<8, 32> mUnkac734a;
        ::ll::UntypedStorage<1, 1>  mUnk3222c6;
        // NOLINTEND

    public:
        // prevent constructor by default
        Config& operator=(Config const&);
        Config(Config const&);
        Config();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk2e96b6;
    ::ll::UntypedStorage<8, 72> mUnk2ad7c7;
    // NOLINTEND

public:
    // prevent constructor by default
    PackOptimizer& operator=(PackOptimizer const&);
    PackOptimizer(PackOptimizer const&);
    PackOptimizer();
};

} // namespace Bedrock::Resources

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class BootstrapConfig {
public:
    // BootstrapConfig inner types declare
    // clang-format off
    struct LoadResult;
    // clang-format on

    // BootstrapConfig inner types define
    struct LoadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkdc4dae;
        ::ll::UntypedStorage<8, 8> mUnka8141d;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadResult& operator=(LoadResult const&);
        LoadResult(LoadResult const&);
        LoadResult();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2048> mUnk16181a;
    ::ll::UntypedStorage<1, 512>  mUnk801276;
    ::ll::UntypedStorage<8, 88>   mUnk981535;
    ::ll::UntypedStorage<8, 8>    mUnkbc915e;
    ::ll::UntypedStorage<1, 1>    mUnk48c072;
    // NOLINTEND

public:
    // prevent constructor by default
    BootstrapConfig& operator=(BootstrapConfig const&);
    BootstrapConfig(BootstrapConfig const&);
    BootstrapConfig();
};

} // namespace Bedrock

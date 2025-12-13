#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TextureGroupDebugInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk447b5f;
    ::ll::UntypedStorage<4, 24> mUnk1b9924;
    ::ll::UntypedStorage<8, 8>  mUnk9b9936;
    ::ll::UntypedStorage<1, 1>  mUnka79cde;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupDebugInfo& operator=(TextureGroupDebugInfo const&);
    TextureGroupDebugInfo(TextureGroupDebugInfo const&);
    TextureGroupDebugInfo();
};

} // namespace mce

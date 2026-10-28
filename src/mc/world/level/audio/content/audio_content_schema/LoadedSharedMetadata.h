#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AudioContentSchema {

struct LoadedSharedMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc452fa;
    ::ll::UntypedStorage<8, 32> mUnk675052;
    ::ll::UntypedStorage<8, 64> mUnk6356d8;
    ::ll::UntypedStorage<8, 32> mUnk9277d2;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadedSharedMetadata& operator=(LoadedSharedMetadata const&);
    LoadedSharedMetadata(LoadedSharedMetadata const&);
    LoadedSharedMetadata();
};

} // namespace AudioContentSchema

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CreatorMetadataUtils {

struct ServerMetadataOutputPaths {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk366755;
    ::ll::UntypedStorage<8, 32> mUnkdc9033;
    ::ll::UntypedStorage<8, 32> mUnkf29982;
    ::ll::UntypedStorage<8, 32> mUnk504f4f;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerMetadataOutputPaths& operator=(ServerMetadataOutputPaths const&);
    ServerMetadataOutputPaths(ServerMetadataOutputPaths const&);
    ServerMetadataOutputPaths();
};

} // namespace CreatorMetadataUtils

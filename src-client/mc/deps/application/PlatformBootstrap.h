#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformBootstrap {
public:
    // PlatformBootstrap inner types declare
    // clang-format off
    struct CreateDirectoryResult;
    struct LoadResult;
    struct SaveResult;
    // clang-format on

    // PlatformBootstrap inner types define
    enum class CreateDirectoryResultCode : uint {};

    enum class LoadResultCode : uint {};

    enum class SaveResultCode : uint {};

    struct CreateDirectoryResult {};

    struct LoadResult {};

    struct SaveResult {};
};

} // namespace Bedrock

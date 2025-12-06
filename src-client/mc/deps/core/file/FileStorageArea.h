#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct FileStorageArea {
public:
    // FileStorageArea inner types declare
    // clang-format off
    struct StorageAreaSpaceInfo;
    // clang-format on

    // FileStorageArea inner types define
    enum class FlushableLevelDbEnvType : uint {};

    struct StorageAreaSpaceInfo {};
};

} // namespace Core

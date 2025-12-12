#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct ClientThumbnailCacheService {
public:
    // ClientThumbnailCacheService inner types declare
    // clang-format off
    struct Hasher;
    struct UUIDThumbnailHash;
    // clang-format on

    // ClientThumbnailCacheService inner types define
    struct Hasher {};

    struct UUIDThumbnailHash {};
};

} // namespace Editor::Services

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

struct ClientThumbnailCacheService {
public:
    // ClientThumbnailCacheService inner types declare
    // clang-format off
    class Hasher;
    struct UUIDThumbnailHash;
    // clang-format on

    // ClientThumbnailCacheService inner types define
    class Hasher {};

    struct UUIDThumbnailHash {};
};

} // namespace Editor::Services

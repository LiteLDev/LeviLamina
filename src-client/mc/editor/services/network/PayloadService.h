#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct PayloadService {
public:
    // PayloadService inner types declare
    // clang-format off
    struct CachedPacket;
    struct ConstructionInfo;
    // clang-format on

    // PayloadService inner types define
    enum class SendTarget : uint {};

    struct CachedPacket {};

    struct ConstructionInfo {};
};

} // namespace Editor::Network

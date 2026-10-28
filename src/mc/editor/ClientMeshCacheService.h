#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ClientMeshCacheService {
public:
    // ClientMeshCacheService inner types declare
    // clang-format off
    struct CachedMesh;
    struct PendingCommit;
    // clang-format on

    // ClientMeshCacheService inner types define
    enum class CommitPhase : uchar {};

    struct CachedMesh {};

    struct PendingCommit {};
};

} // namespace Editor::Services

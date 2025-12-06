#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RenderChunkShared {
public:
    // RenderChunkShared inner types declare
    // clang-format off
    struct ActorBlockSyncMessageWithVersion;
    struct BlockActorBlockSyncMessageWithVersion;
    // clang-format on

    // RenderChunkShared inner types define
    enum class BuildState : uint {};

    enum class DataState : uint {};

    enum class VisibilityBuildState : uint {};

    struct ActorBlockSyncMessageWithVersion {};

    struct BlockActorBlockSyncMessageWithVersion {};
};

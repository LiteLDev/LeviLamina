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
    enum class BuildState : int {};

    enum class DataState : int {};

    enum class VisibilityBuildState : int {};

    struct ActorBlockSyncMessageWithVersion {};

    struct BlockActorBlockSyncMessageWithVersion {};
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderChunkShared {
public:
    // RenderChunkShared inner types declare
    // clang-format off
    struct ActorBlockSyncMessageWithVersion;
    struct BlockActorBlockSyncMessageWithVersion;
    // clang-format on

    // RenderChunkShared inner types define
    enum class VisibilityBuildState : int {};

    enum class DataState : int {};

    enum class BuildState : int {};

    struct ActorBlockSyncMessageWithVersion {};

    struct BlockActorBlockSyncMessageWithVersion {};
};

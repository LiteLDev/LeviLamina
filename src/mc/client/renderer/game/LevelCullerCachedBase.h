#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelCullerCachedBase {
public:
    // LevelCullerCachedBase inner types declare
    // clang-format off
    struct ChangeElement;
    struct ResetCullingWorldDimensions;
    struct UpdateChunkData;
    // clang-format on

    // LevelCullerCachedBase inner types define
    enum class ChangeID : int {};

    struct ChangeElement {};

    struct ResetCullingWorldDimensions {};

    struct UpdateChunkData {};
};

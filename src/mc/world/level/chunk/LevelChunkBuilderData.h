#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkBuilderData {
public:
    // prevent constructor by default
    LevelChunkBuilderData& operator=(LevelChunkBuilderData const&);
    LevelChunkBuilderData(LevelChunkBuilderData const&);

public:
    // NOLINTBEGIN
    MCAPI LevelChunkBuilderData();

    MCAPI ~LevelChunkBuilderData();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

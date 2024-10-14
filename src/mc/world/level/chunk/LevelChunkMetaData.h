#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaData {
public:
    // prevent constructor by default
    LevelChunkMetaData& operator=(LevelChunkMetaData const&);
    LevelChunkMetaData();

public:
    // NOLINTBEGIN
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const& otherMetaData);

    MCAPI uint64 getCurrentHash() const;

    MCAPI ~LevelChunkMetaData();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _recomputeHash() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static uint64 const& INVALID_META_DATA();

    // NOLINTEND
};

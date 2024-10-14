#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelStorageEventing {
public:
    // prevent constructor by default
    LevelStorageEventing& operator=(LevelStorageEventing const&);
    LevelStorageEventing(LevelStorageEventing const&);
    LevelStorageEventing();

public:
    // NOLINTBEGIN
    MCAPI LevelStorageEventing(
        std::string const&     creationReason,
        class LevelData const& levelData,
        std::string const&     levelId
    );

    MCAPI void fireDBStorageError(char const* errorType);

    MCAPI void
    fireEventWorldCorruptionCausedWorldShutdown(std::string const& reason, std::optional<bool> isOutOfDiskSpace);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

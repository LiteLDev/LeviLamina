#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileSizePresetManager {
public:
    // prevent constructor by default
    FileSizePresetManager& operator=(FileSizePresetManager const&);
    FileSizePresetManager(FileSizePresetManager const&);
    FileSizePresetManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSizePresetManager();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core

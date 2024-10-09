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
};

}; // namespace Core

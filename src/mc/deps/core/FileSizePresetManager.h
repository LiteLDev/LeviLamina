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
    // vIndex: 0, symbol: ??1FileSizePresetManager@Core@@UEAA@XZ
    virtual ~FileSizePresetManager();

    // symbol:
    // ?create@FileSizePresetManager@Core@@SA?AV?$unique_ptr@VFileSizePresetManager@Core@@U?$default_delete@VFileSizePresetManager@Core@@@std@@@std@@XZ
    MCAPI static std::unique_ptr<class Core::FileSizePresetManager> create();

    // NOLINTEND
};

}; // namespace Core

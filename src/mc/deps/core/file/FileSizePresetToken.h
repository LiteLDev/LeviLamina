#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileSizePresetToken {
public:
    // prevent constructor by default
    FileSizePresetToken& operator=(FileSizePresetToken const&);
    FileSizePresetToken(FileSizePresetToken const&);
    FileSizePresetToken();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSizePresetToken() = default;

    // NOLINTEND
};

}; // namespace Core

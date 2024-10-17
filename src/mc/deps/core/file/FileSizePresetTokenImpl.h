#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class FileSizePresetTokenImpl {
public:
    // prevent constructor by default
    FileSizePresetTokenImpl& operator=(FileSizePresetTokenImpl const&);
    FileSizePresetTokenImpl(FileSizePresetTokenImpl const&);
    FileSizePresetTokenImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSizePresetTokenImpl() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace Core

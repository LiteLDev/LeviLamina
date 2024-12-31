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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSizePresetToken() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

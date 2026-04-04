#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
namespace Core { class PathView; }
// clang-format on

namespace Core {

class FileSizePresetManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSizePresetManager();

    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetInitialSizeForFile(::Core::PathView filePath, uint64 initialFileSize) = 0;

    virtual ::std::optional<uint64> checkFileInitialSize(::Core::PathView filePath) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

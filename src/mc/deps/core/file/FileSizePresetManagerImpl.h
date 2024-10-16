#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileSizePresetManagerImpl {
public:
    // prevent constructor by default
    FileSizePresetManagerImpl& operator=(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl();

public:
    // NOLINTBEGIN
    MCVAPI std::optional<uint64> checkFileInitialSize(class Core::Path const& filePath);

    MCVAPI std::unique_ptr<class Core::FileSizePresetToken>
           presetInitialSizeForFile(class Core::Path const& filePath, uint64 initialFileSize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** vftableForCoreFileSizePresetManager();

    MCAPI std::optional<uint64> checkFileInitialSize$(class Core::Path const& filePath);

    MCAPI std::unique_ptr<class Core::FileSizePresetToken>
          presetInitialSizeForFile$(class Core::Path const& filePath, uint64 initialFileSize);

    // NOLINTEND
};

}; // namespace Core

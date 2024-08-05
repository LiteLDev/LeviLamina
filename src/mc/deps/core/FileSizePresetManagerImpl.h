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
    MCVAPI std::optional<uint64> checkFileInitialSize(class Core::Path const&);

    MCVAPI std::unique_ptr<class Core::FileSizePresetToken> presetInitialSizeForFile(class Core::Path const&, uint64);

    // NOLINTEND
};

}; // namespace Core

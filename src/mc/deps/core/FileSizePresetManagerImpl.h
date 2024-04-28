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
    // symbol: ?checkFileInitialSize@FileSizePresetManagerImpl@Core@@UEAA?AV?$optional@_K@std@@AEBVPath@2@@Z
    MCVAPI std::optional<uint64> checkFileInitialSize(class Core::Path const&);

    // symbol:
    // ?presetInitialSizeForFile@FileSizePresetManagerImpl@Core@@UEAA?AV?$unique_ptr@VFileSizePresetToken@Core@@U?$default_delete@VFileSizePresetToken@Core@@@std@@@std@@AEBVPath@2@_K@Z
    MCVAPI std::unique_ptr<class Core::FileSizePresetToken> presetInitialSizeForFile(class Core::Path const&, uint64);

    // NOLINTEND
};

}; // namespace Core

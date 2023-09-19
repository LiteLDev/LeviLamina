#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/FilePickerManager.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
namespace Bedrock { class FilePickerManager; }
// clang-format on

namespace Bedrock {

class FilePickerManagerImpl : public ::Bedrock::FilePickerManager {
public:
    // prevent constructor by default
    FilePickerManagerImpl& operator=(FilePickerManagerImpl const&);
    FilePickerManagerImpl(FilePickerManagerImpl const&);

public:
    // NOLINTBEGIN
    // symbol: ?directoryPickingEnabledForPlatform@FilePickerManagerImpl@Bedrock@@UEBA_NXZ
    MCVAPI bool directoryPickingEnabledForPlatform() const;

    // symbol:
    // ?pickDirectory@FilePickerManagerImpl@Bedrock@@UEAA?AV?$shared_ptr@V?$IAsyncResult@UDirectoryPickerResult@FilePickerManager@Bedrock@@@Threading@Bedrock@@@std@@AEBVDirectoryPickerConfig@2@@Z
    MCVAPI std::shared_ptr<
        class Bedrock::Threading::IAsyncResult<struct Bedrock::FilePickerManager::DirectoryPickerResult>>
    pickDirectory(class Bedrock::DirectoryPickerConfig const&);

    // symbol: ??0FilePickerManagerImpl@Bedrock@@QEAA@XZ
    MCAPI FilePickerManagerImpl();

    // NOLINTEND
};

}; // namespace Bedrock

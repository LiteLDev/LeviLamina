#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/platform_features/file_picker/FilePickerManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DirectoryPickerConfig; }
// clang-format on

namespace Bedrock {

class FilePickerManagerImpl : public ::Bedrock::FilePickerManager {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool directoryPickingEnabledForPlatform() const /*override*/;

    virtual ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) /*override*/;

    virtual ~FilePickerManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $directoryPickingEnabledForPlatform() const;

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::FilePickerManager::DirectoryPickerResult>
    $pickDirectory(::Bedrock::DirectoryPickerConfig const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForImplBase();
    // NOLINTEND
};

} // namespace Bedrock

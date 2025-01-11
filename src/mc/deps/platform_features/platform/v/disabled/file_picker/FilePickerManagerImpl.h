#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"
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
    // vIndex: 1
    virtual bool directoryPickingEnabledForPlatform() const /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::FilePickerManager::DirectoryPickerResult>>
    pickDirectory(::Bedrock::DirectoryPickerConfig const&) /*override*/;

    // vIndex: 0
    virtual ~FilePickerManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilePickerManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $directoryPickingEnabledForPlatform() const;

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::FilePickerManager::DirectoryPickerResult>>
    $pickDirectory(::Bedrock::DirectoryPickerConfig const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForImplBase();
    // NOLINTEND
};

} // namespace Bedrock

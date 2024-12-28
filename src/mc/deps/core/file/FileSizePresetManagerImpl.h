#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
namespace Core { class Path; }
// clang-format on

namespace Core {

class FileSizePresetManagerImpl : public ::Core::FileSizePresetManager, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk33addc;
    ::ll::UntypedStorage<8, 16> mUnkbcb807;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSizePresetManagerImpl& operator=(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl(FileSizePresetManagerImpl const&);
    FileSizePresetManagerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetInitialSizeForFile(::Core::Path const& filePath, uint64 initialFileSize) /*override*/;

    // vIndex: 2
    virtual ::std::optional<uint64> checkFileInitialSize(::Core::Path const& filePath) /*override*/;

    // vIndex: 0
    virtual ~FileSizePresetManagerImpl() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetInitialSizeForFile(::Core::Path const& filePath, uint64 initialFileSize);

    MCAPI ::std::optional<uint64> $checkFileInitialSize(::Core::Path const& filePath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFileSizePresetManager();

    MCAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Core

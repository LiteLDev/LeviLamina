#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileSizePresetManager.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSizePresetToken; }
namespace Core { class PathView; }
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
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetInitialSizeForFile(::Core::PathView filePath, uint64 initialFileSize) /*override*/;

    virtual ::std::optional<uint64> checkFileInitialSize(::Core::PathView filePath) /*override*/;

    virtual ~FileSizePresetManagerImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetInitialSizeForFile(::Core::PathView filePath, uint64 initialFileSize);

    MCNAPI ::std::optional<uint64> $checkFileInitialSize(::Core::PathView filePath);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFileSizePresetManager();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};

} // namespace Core

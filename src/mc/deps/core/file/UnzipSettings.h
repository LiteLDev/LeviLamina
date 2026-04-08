#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/ZipFileRestrictions.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
// clang-format on

namespace Core::ZipUtils {

class UnzipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Core::ZipUtils::ZipFileRestrictions>     mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                       mDeleteZipOnSuccess;
    ::ll::TypedStorage<1, 1, bool>                                       mPreventOverwrites;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>> mFileAccess;
    ::ll::TypedStorage<8, 32, ::std::string>                             mPassword;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mSelectedPaths;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>              mUnselectedPaths;
    ::ll::TypedStorage<8, 8, uint64>                                     mMaxDirectoryDepth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnzipSettings();

    MCAPI ~UnzipSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils

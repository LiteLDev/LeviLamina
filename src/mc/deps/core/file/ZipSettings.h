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

class ZipSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::Core::ZipUtils::ZipFileRestrictions>     mRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                       mZipDirectoryContents;
    ::ll::TypedStorage<1, 1, bool>                                       mSkipInaccessibleFiles;
    ::ll::TypedStorage<4, 4, int>                                        mCompressionLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>> mFileAccess;
    ::ll::TypedStorage<8, 32, ::std::string>                             mPassword;
    ::ll::TypedStorage<4, 4, int>                                        mZip64;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ZipSettings();

    MCAPI ~ZipSettings();
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

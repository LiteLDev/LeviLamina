#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class Path; }
// clang-format on

namespace Core {

class UnzipFileMinizip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27a55a;
    ::ll::UntypedStorage<8, 8> mUnk5c2091;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipFileMinizip& operator=(UnzipFileMinizip const&);
    UnzipFileMinizip(UnzipFileMinizip const&);
    UnzipFileMinizip();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnzipFileMinizip() /*override*/ = default;

    // vIndex: 1
    virtual bool isGood() const /*override*/;

    // vIndex: 2
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity) /*override*/;

    // vIndex: 3
    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() /*override*/;

    // vIndex: 4
    virtual ::Core::ZipUtils::UnzipResult goToNextFile() /*override*/;

    // vIndex: 5
    virtual ::std::string getCurrentFileName() const /*override*/;

    // vIndex: 6
    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() /*override*/;

    // vIndex: 7
    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() /*override*/;

    // vIndex: 8
    virtual void appendCurrentFileContents(
        ::std::string&                                   str,
        uint64                                           bufferSize,
        ::std::function<void(int, ::std::string const&)> onReadCallback
    ) /*override*/;

    // vIndex: 9
    virtual uint64 getTotalFilesInZip() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UnzipFileMinizip(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess, ::Core::Path const& zipPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess, ::Core::Path const& zipPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isGood() const;

    MCAPI ::Core::ZipUtils::UnzipResult $locateFile(char const* fileName, int caseSensitivity);

    MCAPI ::Core::ZipUtils::UnzipResult $goToFirstFile();

    MCAPI ::Core::ZipUtils::UnzipResult $goToNextFile();

    MCAPI ::std::string $getCurrentFileName() const;

    MCAPI ::Core::ZipUtils::UnzipResult $openCurrentFileForReading();

    MCAPI ::Core::ZipUtils::UnzipResult $closeCurrentFile();

    MCAPI void $appendCurrentFileContents(
        ::std::string&                                   str,
        uint64                                           bufferSize,
        ::std::function<void(int, ::std::string const&)> onReadCallback
    );

    MCAPI uint64 $getTotalFilesInZip();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

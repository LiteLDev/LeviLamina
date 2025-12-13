#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class UnzipFileMinizip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk27a55a;
    ::ll::UntypedStorage<8, 8>  mUnk5c2091;
    ::ll::UntypedStorage<8, 32> mUnkb32ca0;
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
    virtual ~UnzipFileMinizip() /*override*/;

    // vIndex: 1
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity) /*override*/;

    // vIndex: 2
    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() /*override*/;

    // vIndex: 3
    virtual ::Core::ZipUtils::UnzipResult goToNextFile() /*override*/;

    // vIndex: 4
    virtual ::std::string getCurrentFileName() const /*override*/;

    // vIndex: 5
    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() /*override*/;

    // vIndex: 6
    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() /*override*/;

    // vIndex: 7
    virtual void readCurrentFileContentsIntoMemory(::std::string& str) /*override*/;

    // vIndex: 8
    virtual void
    readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback) /*override*/;

    // vIndex: 9
    virtual uint64 getTotalFilesInZip() /*override*/;

    // vIndex: 10
    virtual uint64 getCurrentFileUncompressedSize() /*override*/;

    // vIndex: 11
    virtual bool _isGood() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI UnzipFileMinizip(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess, ::Core::PathView zipPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess, ::Core::PathView zipPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::ZipUtils::UnzipResult $locateFile(char const* fileName, int caseSensitivity);

    MCNAPI ::Core::ZipUtils::UnzipResult $goToFirstFile();

    MCNAPI ::Core::ZipUtils::UnzipResult $goToNextFile();

    MCNAPI ::std::string $getCurrentFileName() const;

    MCNAPI ::Core::ZipUtils::UnzipResult $openCurrentFileForReading();

    MCNAPI ::Core::ZipUtils::UnzipResult $closeCurrentFile();

    MCNAPI void $readCurrentFileContentsIntoMemory(::std::string& str);

    MCNAPI void $readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback);

    MCNAPI uint64 $getTotalFilesInZip();

    MCNAPI uint64 $getCurrentFileUncompressedSize();

    MCNAPI bool $_isGood() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core

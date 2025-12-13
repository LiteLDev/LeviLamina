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
    virtual ~UnzipFileMinizip() /*override*/;

    virtual ::Core::ZipUtils::UnzipResult locateFile(char const* fileName, int caseSensitivity) /*override*/;

    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() /*override*/;

    virtual ::Core::ZipUtils::UnzipResult goToNextFile() /*override*/;

    virtual ::std::string getCurrentFileName() const /*override*/;

    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() /*override*/;

    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() /*override*/;

    virtual void readCurrentFileContentsIntoMemory(::std::string& str) /*override*/;

    virtual void
    readCurrentFileContents(uint64 bufferSize, ::std::function<void(int, void const*)> onReadCallback) /*override*/;

    virtual uint64 getTotalFilesInZip() /*override*/;

    virtual uint64 getCurrentFileUncompressedSize() /*override*/;

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

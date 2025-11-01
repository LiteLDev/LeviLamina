#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFileLibrary.h"
#include "mc/deps/core/file/UnzipResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class UnzipFile {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnzipFile();

    // vIndex: 1
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int) = 0;

    // vIndex: 2
    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() = 0;

    // vIndex: 3
    virtual ::Core::ZipUtils::UnzipResult goToNextFile() = 0;

    // vIndex: 4
    virtual ::std::string getCurrentFileName() const = 0;

    // vIndex: 5
    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() = 0;

    // vIndex: 6
    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() = 0;

    // vIndex: 7
    virtual void readCurrentFileContentsIntoMemory(::std::string&) = 0;

    // vIndex: 8
    virtual void readCurrentFileContents(uint64, ::std::function<void(int, void const*)>) = 0;

    // vIndex: 9
    virtual uint64 getTotalFilesInZip() = 0;

    // vIndex: 10
    virtual uint64 getCurrentFileUncompressedSize() = 0;

    // vIndex: 11
    virtual bool _isGood() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::Core::UnzipFile> create(::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess, ::Core::PathView zipPath, ::Core::UnzipFileLibrary library);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}

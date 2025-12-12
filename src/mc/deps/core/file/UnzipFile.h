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
    virtual ~UnzipFile();

    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int) = 0;

    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() = 0;

    virtual ::Core::ZipUtils::UnzipResult goToNextFile() = 0;

    virtual ::std::string getCurrentFileName() const = 0;

    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() = 0;

    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() = 0;

    virtual void readCurrentFileContentsIntoMemory(::std::string&) = 0;

    virtual void readCurrentFileContents(uint64, ::std::function<void(int, void const*)>) = 0;

    virtual uint64 getTotalFilesInZip() = 0;

    virtual uint64 getCurrentFileUncompressedSize() = 0;

    virtual bool _isGood() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::Core::UnzipFile> create(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> fileAccess,
        ::Core::PathView                             zipPath,
        ::Core::UnzipFileLibrary                     library
    );
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

} // namespace Core

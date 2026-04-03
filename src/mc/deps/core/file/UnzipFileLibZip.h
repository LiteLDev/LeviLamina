#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/UnzipResult.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class PathView; }
// clang-format on

namespace Core {

class UnzipFileLibZip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd963bc;
    ::ll::UntypedStorage<8, 8>  mUnkad17b4;
    ::ll::UntypedStorage<8, 16> mUnkb7af5d;
    ::ll::UntypedStorage<8, 80> mUnk32ee59;
    ::ll::UntypedStorage<8, 32> mUnk45f722;
    ::ll::UntypedStorage<8, 8>  mUnkd58109;
    ::ll::UntypedStorage<8, 8>  mUnk3631e8;
    ::ll::UntypedStorage<8, 8>  mUnkba5020;
    ::ll::UntypedStorage<8, 32> mUnke305f4;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipFileLibZip& operator=(UnzipFileLibZip const&);
    UnzipFileLibZip(UnzipFileLibZip const&);
    UnzipFileLibZip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnzipFileLibZip() /*override*/;

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
    MCNAPI UnzipFileLibZip(::Bedrock::NonOwnerPointer<::IFileAccess> fileAccess, ::Core::PathView zipPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::IFileAccess> fileAccess, ::Core::PathView zipPath);
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

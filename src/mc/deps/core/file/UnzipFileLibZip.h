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

class UnzipFileLibZip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd963bc;
    ::ll::UntypedStorage<8, 8>  mUnkad17b4;
    ::ll::UntypedStorage<8, 16> mUnkb7af5d;
    ::ll::UntypedStorage<8, 80> mUnk32ee59;
    ::ll::UntypedStorage<8, 32> mUnk5aad00;
    ::ll::UntypedStorage<8, 8>  mUnkd58109;
    ::ll::UntypedStorage<8, 8>  mUnk3631e8;
    ::ll::UntypedStorage<8, 8>  mUnkba5020;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipFileLibZip& operator=(UnzipFileLibZip const&);
    UnzipFileLibZip(UnzipFileLibZip const&);
    UnzipFileLibZip();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnzipFileLibZip() /*override*/;

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
    MCAPI UnzipFileLibZip(::Bedrock::NonOwnerPointer<::IFileAccess> fileAccess, ::Core::Path const& zipPath);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::IFileAccess> fileAccess, ::Core::Path const& zipPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/deps/core/file/UnzipResult.h"

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
    ::ll::UntypedStorage<8, 32> mUnk2168f3;
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
    virtual ~UnzipFileLibZip() /*override*/ = default;

    // vIndex: 1
    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int) /*override*/;

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
    virtual void readCurrentFileContentsIntoMemory(::std::string&) /*override*/;

    // vIndex: 8
    virtual void readCurrentFileContents(uint64, ::std::function<void(int, void const*)>) /*override*/;

    // vIndex: 9
    virtual uint64 getTotalFilesInZip() /*override*/;

    // vIndex: 10
    virtual uint64 getCurrentFileUncompressedSize() /*override*/;

    // vIndex: 11
    virtual bool _isGood() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core

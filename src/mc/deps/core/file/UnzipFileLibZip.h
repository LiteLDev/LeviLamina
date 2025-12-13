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
    virtual ~UnzipFileLibZip() /*override*/ = default;

    virtual ::Core::ZipUtils::UnzipResult locateFile(char const*, int) /*override*/;

    virtual ::Core::ZipUtils::UnzipResult goToFirstFile() /*override*/;

    virtual ::Core::ZipUtils::UnzipResult goToNextFile() /*override*/;

    virtual ::std::string getCurrentFileName() const /*override*/;

    virtual ::Core::ZipUtils::UnzipResult openCurrentFileForReading() /*override*/;

    virtual ::Core::ZipUtils::UnzipResult closeCurrentFile() /*override*/;

    virtual void readCurrentFileContentsIntoMemory(::std::string&) /*override*/;

    virtual void readCurrentFileContents(uint64, ::std::function<void(int, void const*)>) /*override*/;

    virtual uint64 getTotalFilesInZip() /*override*/;

    virtual uint64 getCurrentFileUncompressedSize() /*override*/;

    virtual bool _isGood() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core

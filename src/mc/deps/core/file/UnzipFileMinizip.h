#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/UnzipFile.h"
#include "mc/util/UnzipResult.h"

namespace Core {

class UnzipFileMinizip : public ::Core::UnzipFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9c298d;
    ::ll::UntypedStorage<8, 8> mUnkb4dede;
    // NOLINTEND

public:
    // prevent constructor by default
    UnzipFileMinizip& operator=(UnzipFileMinizip const&);
    UnzipFileMinizip(UnzipFileMinizip const&);
    UnzipFileMinizip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnzipFileMinizip() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class JournaledFile {
public:
    // JournaledFile inner types define
    enum class Progression : int {
        NeverWritten = 0,
        WriteFailed  = 1,
        WriteSuccess = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkcedc45;
    ::ll::UntypedStorage<8, 16> mUnkdff1df;
    ::ll::UntypedStorage<8, 64> mUnkf173f5;
    ::ll::UntypedStorage<4, 4>  mUnk35a4f6;
    // NOLINTEND

public:
    // prevent constructor by default
    JournaledFile& operator=(JournaledFile const&);
    JournaledFile(JournaledFile const&);
    JournaledFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _flushFiles();

    MCAPI ::Core::Result close();

    MCAPI ::Core::Result
    open(::Core::Path filePath, ::Core::FileOpenMode fileOpenMode, ::Core::FileBufferingMode bufferingMode);

    MCAPI ::Core::Result write(void const* pBuf, uint64 numBytes);

    MCAPI ~JournaledFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> findBackupPath(::Core::Path fileName);

    MCAPI static ::Core::PathBuffer<::std::string> findReadPath(::Core::Path fileName);

    MCAPI static bool isOldFile(::Core::Path fileName);

    MCAPI static void populateImportantFiles(::Core::Path fileName, ::std::vector<::std::string>& importantFiles);

    MCAPI static ::Core::Result replaceHeadFileWithBackup(::Core::Path fileName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

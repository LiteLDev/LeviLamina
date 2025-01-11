#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk919717;
    ::ll::UntypedStorage<8, 8>  mUnk73a9a3;
    ::ll::UntypedStorage<8, 32> mUnkd6cb9a;
    // NOLINTEND

public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&);
    FileInfo(FileInfo const&);
    FileInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileInfo(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);

    MCAPI ~FileInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

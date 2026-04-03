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
    ::ll::UntypedStorage<8, 32> mUnkf751a1;
    ::ll::UntypedStorage<8, 8>  mUnk73a9a3;
    ::ll::UntypedStorage<8, 32> mUnk4fa44b;
    // NOLINTEND

public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&);
    FileInfo(FileInfo const&);
    FileInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileInfo(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);

    MCNAPI ~FileInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&);
    FileInfo(FileInfo const&);
    FileInfo();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&);
    FileInfo();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI FileInfo(::FileInfo const&);
#endif

    MCNAPI FileInfo(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);

#ifdef LL_PLAT_C
    MCNAPI ::FileInfo& operator=(::FileInfo&&);
#endif

    MCNAPI ~FileInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::FileInfo const&);
#endif

    MCNAPI void* $ctor(::Core::Path _filePath, int _fileSize, ::std::string _fileHash);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

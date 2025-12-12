#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileOpenMode; }
// clang-format on

class LevelDbLazyFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd1586b;
    ::ll::UntypedStorage<8, 16> mUnk59f9b8;
    ::ll::UntypedStorage<8, 16> mUnk6129c9;
    ::ll::UntypedStorage<1, 2>  mUnk60005c;
    ::ll::UntypedStorage<4, 4>  mUnkc82210;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbLazyFile& operator=(LevelDbLazyFile const&);
    LevelDbLazyFile(LevelDbLazyFile const&);
    LevelDbLazyFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status Append(::leveldb::Slice const& slice);

    MCNAPI ::leveldb::Status Flush();

    MCNAPI LevelDbLazyFile(::std::string filename, ::Core::FileOpenMode openMode, int maxOpenFiles);

    MCNAPI ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch);

    MCNAPI ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;

    MCNAPI ~LevelDbLazyFile();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::atomic<uint64>& mFileCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string filename, ::Core::FileOpenMode openMode, int maxOpenFiles);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

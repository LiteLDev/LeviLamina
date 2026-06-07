#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

class InMemorySequentialFile : public ::leveldb::SequentialFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka09c7f;
    ::ll::UntypedStorage<8, 8>  mUnk686272;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemorySequentialFile& operator=(InMemorySequentialFile const&);
    InMemorySequentialFile(InMemorySequentialFile const&);
    InMemorySequentialFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemorySequentialFile() /*override*/;

    virtual ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch) /*override*/;

    virtual ::leveldb::Status Skip(uint64 n) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InMemorySequentialFile(::std::shared_ptr<::InMemoryFile> file);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::InMemoryFile> file);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(uint64 n, ::leveldb::Slice* result, char* scratch);

    MCNAPI ::leveldb::Status $Skip(uint64 n);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // vIndex: 0
    virtual ~InMemorySequentialFile() /*override*/ = default;

    // vIndex: 1
    virtual ::leveldb::Status Read(uint64 n, ::leveldb::Slice* result, char* scratch) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status Skip(uint64 n) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $Read(uint64 n, ::leveldb::Slice* result, char* scratch);

    MCAPI ::leveldb::Status $Skip(uint64 n);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

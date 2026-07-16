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
    virtual ~InMemorySequentialFile() /*override*/ = default;

    virtual ::leveldb::Status Read(uint64, ::leveldb::Slice*, char*) /*override*/;

    virtual ::leveldb::Status Skip(uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

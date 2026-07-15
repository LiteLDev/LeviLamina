#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InMemoryRandomAccessFile : public ::leveldb::RandomAccessFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk59aba8;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryRandomAccessFile& operator=(InMemoryRandomAccessFile const&);
    InMemoryRandomAccessFile(InMemoryRandomAccessFile const&);
    InMemoryRandomAccessFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InMemoryRandomAccessFile() /*override*/ = default;

    virtual ::leveldb::Status Read(uint64, uint64, ::leveldb::Slice*, char*) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

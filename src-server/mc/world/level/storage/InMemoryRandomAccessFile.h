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
    // vIndex: 0
    virtual ~InMemoryRandomAccessFile() /*override*/ = default;

    // vIndex: 1
    virtual ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

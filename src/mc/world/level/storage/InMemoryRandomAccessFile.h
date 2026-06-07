#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InMemoryFile;
// clang-format on

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
    virtual ~InMemoryRandomAccessFile() /*override*/;

    virtual ::leveldb::Status Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit InMemoryRandomAccessFile(::std::shared_ptr<::InMemoryFile> file);
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
    MCNAPI ::leveldb::Status $Read(uint64 offset, uint64 n, ::leveldb::Slice* result, char* scratch) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

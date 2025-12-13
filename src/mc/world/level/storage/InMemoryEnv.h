#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

class InMemoryEnv : public ::FlushableEnv {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka7132a;
    ::ll::UntypedStorage<8, 32>  mUnk67ea58;
    ::ll::UntypedStorage<8, 136> mUnk787769;
    // NOLINTEND

public:
    // prevent constructor by default
    InMemoryEnv& operator=(InMemoryEnv const&);
    InMemoryEnv(InMemoryEnv const&);
    InMemoryEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InMemoryEnv() /*override*/ = default;

    // vIndex: 1
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    // vIndex: 4
    virtual ::leveldb::Status
    NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    // vIndex: 7
    virtual ::leveldb::Status RemoveFile(::std::string const& fname) /*override*/;

    // vIndex: 13
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;

    // vIndex: 5
    virtual bool FileExists(::std::string const& f) /*override*/;

    // vIndex: 6
    virtual ::leveldb::Status GetChildren(::std::string const& dir, ::std::vector<::std::string>* r) /*override*/;

    // vIndex: 22
    virtual void flushToPermanentStorage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _flushWithTransaction();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r);

    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r);

    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r);

    MCNAPI ::leveldb::Status $NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& fname);

    MCNAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);

    MCNAPI bool $FileExists(::std::string const& f);

    MCNAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* r);

    MCNAPI void $flushToPermanentStorage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

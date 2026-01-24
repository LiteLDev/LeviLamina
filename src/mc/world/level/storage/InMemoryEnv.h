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
    virtual ~InMemoryEnv() /*override*/ = default;

    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;

    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;

    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    virtual ::leveldb::Status
    NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    virtual ::leveldb::Status RemoveFile(::std::string const& f) /*override*/;

    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;

    virtual bool FileExists(::std::string const& f) /*override*/;

    virtual ::leveldb::Status GetChildren(::std::string const& dir, ::std::vector<::std::string>* r) /*override*/;

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

    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& f);

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

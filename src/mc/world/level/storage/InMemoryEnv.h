#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/FlushableEnv.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

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
    virtual ~InMemoryEnv() /*override*/;

    // vIndex: 1
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    // vIndex: 4
    virtual ::leveldb::Status NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    // vIndex: 7
    virtual ::leveldb::Status DeleteFileA(::std::string const& f) /*override*/;

    // vIndex: 11
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;

    // vIndex: 5
    virtual bool FileExists(::std::string const& f) /*override*/;

    // vIndex: 6
    virtual ::leveldb::Status GetChildren(::std::string const& dir, ::std::vector<::std::string>* r) /*override*/;

    // vIndex: 20
    virtual void flushToPermanentStorage() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InMemoryEnv(::leveldb::Env* env, ::Core::Path const& rootDbPath);

    MCAPI void _flushWithTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::leveldb::Env* env, ::Core::Path const& rootDbPath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r);

    MCAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r);

    MCAPI ::leveldb::Status $NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r);

    MCAPI ::leveldb::Status $NewAppendableFile(::std::string const& f, ::leveldb::WritableFile** r);

    MCAPI ::leveldb::Status $DeleteFileA(::std::string const& f);

    MCAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);

    MCAPI bool $FileExists(::std::string const& f);

    MCAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* r);

    MCAPI void $flushToPermanentStorage();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

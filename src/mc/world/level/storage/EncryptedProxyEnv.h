#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EncryptedProxyEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfea032;
    ::ll::UntypedStorage<8, 32> mUnkedb53e;
    ::ll::UntypedStorage<8, 32> mUnk6f13c3;
    ::ll::UntypedStorage<1, 1>  mUnk535aec;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedProxyEnv& operator=(EncryptedProxyEnv const&);
    EncryptedProxyEnv(EncryptedProxyEnv const&);
    EncryptedProxyEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    // vIndex: 7
    virtual ::leveldb::Status DeleteFileA(::std::string const& f) /*override*/;

    // vIndex: 11
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;

    // vIndex: 0
    virtual ~EncryptedProxyEnv() /*override*/;
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

    MCAPI ::leveldb::Status $DeleteFileA(::std::string const& f);

    MCAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

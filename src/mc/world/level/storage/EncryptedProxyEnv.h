#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EncryptedProxyEnv : public ::leveldb::EnvWrapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkfea032;
    ::ll::UntypedStorage<8, 32> mUnk138938;
    ::ll::UntypedStorage<8, 32> mUnkb3cded;
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
    virtual ::leveldb::Status NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r) /*override*/;

    virtual ::leveldb::Status NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r) /*override*/;

    virtual ::leveldb::Status NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r) /*override*/;

    virtual ::leveldb::Status RemoveFile(::std::string const& f) /*override*/;

    virtual ::leveldb::Status RenameFile(::std::string const& s, ::std::string const& t) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

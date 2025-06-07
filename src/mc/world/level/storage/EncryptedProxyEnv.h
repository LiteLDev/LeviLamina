#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/EncryptedProxyReadMode.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

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
    virtual ~EncryptedProxyEnv() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncryptedProxyEnv(
        ::leveldb::Env*          env,
        ::ContentIdentity const& contentIdentity,
        ::std::string const&     contentKey,
        ::EncryptedProxyReadMode mode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::leveldb::Env*          env,
        ::ContentIdentity const& contentIdentity,
        ::std::string const&     contentKey,
        ::EncryptedProxyReadMode mode
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& f, ::leveldb::SequentialFile** r);

    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& f, ::leveldb::RandomAccessFile** r);

    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& f, ::leveldb::WritableFile** r);

    MCNAPI ::leveldb::Status $DeleteFileA(::std::string const& f);

    MCNAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

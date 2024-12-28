#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
struct SnapshotFilenameAndLength;
namespace Core { class Path; }
// clang-format on

class SnapshotEnv : public ::leveldb::EnvWrapper {
public:
    // SnapshotEnv inner types declare
    // clang-format off
    class DeleteFileEntry;
    // clang-format on

    // SnapshotEnv inner types define
    class DeleteFileEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk526abe;
        ::ll::UntypedStorage<1, 1>  mUnk67b7f6;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeleteFileEntry& operator=(DeleteFileEntry const&);
        DeleteFileEntry(DeleteFileEntry const&);
        DeleteFileEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DeleteFileEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk953b73;
    ::ll::UntypedStorage<8, 80> mUnk840b69;
    ::ll::UntypedStorage<8, 8>  mUnkfaff08;
    ::ll::UntypedStorage<8, 80> mUnk2eddae;
    ::ll::UntypedStorage<8, 80> mUnk287ed3;
    ::ll::UntypedStorage<1, 1>  mUnk270131;
    ::ll::UntypedStorage<8, 24> mUnk3d0f16;
    ::ll::UntypedStorage<8, 80> mUnk5736a3;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotEnv& operator=(SnapshotEnv const&);
    SnapshotEnv(SnapshotEnv const&);
    SnapshotEnv();

public:
    // virtual functions
    // NOLINTBEGIN
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
    virtual ::leveldb::Status DeleteFileA(::std::string const& f) /*override*/;

    // vIndex: 11
    virtual ::leveldb::Status RenameFile(::std::string const& from, ::std::string const& to) /*override*/;

    // vIndex: 0
    virtual ~SnapshotEnv() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SnapshotEnv(::leveldb::Env* env);

    MCAPI bool _isQueuedForRemoval(::Core::PathBuffer<::std::string> const& file);

    MCAPI ::std::vector<::SnapshotFilenameAndLength> createSnapshot(::Core::Path const& dir);

    MCAPI void releaseSnapshot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::leveldb::Env* env);
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

    MCAPI ::leveldb::Status $NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCAPI ::leveldb::Status $DeleteFileA(::std::string const& f);

    MCAPI ::leveldb::Status $RenameFile(::std::string const& from, ::std::string const& to);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

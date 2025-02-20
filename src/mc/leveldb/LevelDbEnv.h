#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LevelDbEnv : public ::Bedrock::EnableNonOwnerReferences, public ::leveldb::Env {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk98e970;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const&);
    LevelDbEnv(LevelDbEnv const&);
    LevelDbEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelDbEnv() /*override*/ = default;

    // vIndex: 1
    virtual ::leveldb::Status
    NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result) /*override*/;

    // vIndex: 2
    virtual ::leveldb::Status
    NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result) /*override*/;

    // vIndex: 3
    virtual ::leveldb::Status
    NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    // vIndex: 4
    virtual ::leveldb::Status
    NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    // vIndex: 5
    virtual bool FileExists(::std::string const& fname) /*override*/;

    // vIndex: 6
    virtual ::leveldb::Status
    GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut) /*override*/;

    // vIndex: 7
    virtual ::leveldb::Status DeleteFileA(::std::string const& fname) /*override*/;

    // vIndex: 8
    virtual ::leveldb::Status CreateDir(::std::string const& path) /*override*/;

    // vIndex: 9
    virtual ::leveldb::Status DeleteDir(::std::string const& name) /*override*/;

    // vIndex: 10
    virtual ::leveldb::Status GetFileSize(::std::string const& fname, uint64* size) /*override*/;

    // vIndex: 11
    virtual ::leveldb::Status RenameFile(::std::string const& src, ::std::string const& target) /*override*/;

    // vIndex: 12
    virtual ::leveldb::Status LockFile(::std::string const& fname, ::leveldb::FileLock** lock) /*override*/;

    // vIndex: 13
    virtual ::leveldb::Status UnlockFile(::leveldb::FileLock* lock) /*override*/;

    // vIndex: 14
    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;

    // vIndex: 15
    virtual void StartThread(void (*function)(void*), void* arg) /*override*/;

    // vIndex: 16
    virtual ::leveldb::Status GetTestDirectory(::std::string* result) /*override*/;

    // vIndex: 17
    virtual ::leveldb::Status NewLogger(::std::string const& fname, ::leveldb::Logger** result) /*override*/;

    // vIndex: 18
    virtual uint64 NowMicros() /*override*/;

    // vIndex: 19
    virtual void SleepForMicroseconds(int microseconds) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::LevelDbEnv*& sSingleton();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::leveldb::Status $NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result);

    MCAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result);

    MCAPI ::leveldb::Status $NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCAPI ::leveldb::Status $NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCAPI bool $FileExists(::std::string const& fname);

    MCAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut);

    MCAPI ::leveldb::Status $DeleteFileA(::std::string const& fname);

    MCAPI ::leveldb::Status $CreateDir(::std::string const& path);

    MCAPI ::leveldb::Status $DeleteDir(::std::string const& name);

    MCAPI ::leveldb::Status $GetFileSize(::std::string const& fname, uint64* size);

    MCAPI ::leveldb::Status $RenameFile(::std::string const& src, ::std::string const& target);

    MCAPI ::leveldb::Status $LockFile(::std::string const& fname, ::leveldb::FileLock** lock);

    MCAPI ::leveldb::Status $UnlockFile(::leveldb::FileLock* lock);

    MCAPI void $Schedule(void (*function)(void*), void* arg);

    MCFOLD void $StartThread(void (*function)(void*), void* arg);

    MCAPI ::leveldb::Status $GetTestDirectory(::std::string* result);

    MCAPI ::leveldb::Status $NewLogger(::std::string const& fname, ::leveldb::Logger** result);

    MCAPI uint64 $NowMicros();

    MCAPI void $SleepForMicroseconds(int microseconds);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForEnableNonOwnerReferences();

    MCAPI static void** $vftableForEnv();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class LevelDbEnv : public ::Bedrock::EnableNonOwnerReferences, public ::leveldb::Env {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk98e970;
    ::ll::UntypedStorage<4, 4> mUnkfe3fa7;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const&);
    LevelDbEnv(LevelDbEnv const&);
    LevelDbEnv();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelDbEnv() /*override*/ = default;

    virtual ::leveldb::Status
    NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result) /*override*/;

    virtual ::leveldb::Status
    NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result) /*override*/;

    virtual ::leveldb::Status
    NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    virtual ::leveldb::Status
    NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result) /*override*/;

    virtual bool FileExists(::std::string const& fname) /*override*/;

    virtual ::leveldb::Status
    GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut) /*override*/;

    virtual ::leveldb::Status RemoveFile(::std::string const& fname) /*override*/;

    virtual ::leveldb::Status CreateDir(::std::string const& path) /*override*/;

    virtual ::leveldb::Status RemoveDir(::std::string const& dirname) /*override*/;

    virtual ::leveldb::Status GetFileSize(::std::string const& fname, uint64* size) /*override*/;

    virtual ::leveldb::Status RenameFile(::std::string const& src, ::std::string const& target) /*override*/;

    virtual ::leveldb::Status LockFile(::std::string const& fname, ::leveldb::FileLock** lock) /*override*/;

    virtual ::leveldb::Status UnlockFile(::leveldb::FileLock* lock) /*override*/;

    virtual void Schedule(void (*function)(void*), void* arg) /*override*/;

    virtual void StartThread(void (*function)(void*), void* arg) /*override*/;

    virtual ::leveldb::Status GetTestDirectory(::std::string* result) /*override*/;

    virtual ::leveldb::Status NewLogger(::std::string const& fname, ::leveldb::Logger** result) /*override*/;

    virtual uint64 NowMicros() /*override*/;

    virtual void SleepForMicroseconds(int microseconds) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::LevelDbEnv*& sSingleton();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::leveldb::Status $NewSequentialFile(::std::string const& fname, ::leveldb::SequentialFile** result);

    MCNAPI ::leveldb::Status $NewRandomAccessFile(::std::string const& fname, ::leveldb::RandomAccessFile** result);

    MCNAPI ::leveldb::Status $NewWritableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCNAPI ::leveldb::Status $NewAppendableFile(::std::string const& fname, ::leveldb::WritableFile** result);

    MCNAPI bool $FileExists(::std::string const& fname);

    MCNAPI ::leveldb::Status $GetChildren(::std::string const& dir, ::std::vector<::std::string>* pChildrenOut);

    MCNAPI ::leveldb::Status $RemoveFile(::std::string const& fname);

    MCNAPI ::leveldb::Status $CreateDir(::std::string const& path);

    MCNAPI ::leveldb::Status $RemoveDir(::std::string const& dirname);

    MCNAPI ::leveldb::Status $GetFileSize(::std::string const& fname, uint64* size);

    MCNAPI ::leveldb::Status $RenameFile(::std::string const& src, ::std::string const& target);

    MCNAPI ::leveldb::Status $LockFile(::std::string const& fname, ::leveldb::FileLock** lock);

    MCNAPI ::leveldb::Status $UnlockFile(::leveldb::FileLock* lock);

    MCNAPI void $Schedule(void (*function)(void*), void* arg);

    MCNAPI void $StartThread(void (*function)(void*), void* arg);

    MCNAPI ::leveldb::Status $GetTestDirectory(::std::string* result);

    MCNAPI ::leveldb::Status $NewLogger(::std::string const& fname, ::leveldb::Logger** result);

    MCNAPI uint64 $NowMicros();

    MCNAPI void $SleepForMicroseconds(int microseconds);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForEnv();
    // NOLINTEND
};

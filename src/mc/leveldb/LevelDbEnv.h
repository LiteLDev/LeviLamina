#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelDbEnv {
public:
    // prevent constructor by default
    LevelDbEnv& operator=(LevelDbEnv const&);
    LevelDbEnv(LevelDbEnv const&);

public:
    // NOLINTBEGIN
    MCVAPI leveldb::Status CreateDir(std::string const& path);

    MCVAPI leveldb::Status DeleteDir(std::string const& name);

    MCVAPI leveldb::Status DeleteFileA(std::string const&);

    MCVAPI bool FileExists(std::string const& fname);

    MCVAPI leveldb::Status GetChildren(std::string const& dir, std::vector<std::string>* pChildrenOut);

    MCVAPI leveldb::Status GetFileSize(std::string const& fname, uint64* size);

    MCVAPI leveldb::Status GetTestDirectory(std::string* result);

    MCVAPI leveldb::Status LockFile(std::string const& fname, leveldb::FileLock** lock);

    MCVAPI leveldb::Status NewAppendableFile(std::string const& fname, leveldb::WritableFile** result);

    MCVAPI leveldb::Status NewLogger(std::string const& fname, leveldb::Logger** result);

    MCVAPI leveldb::Status NewRandomAccessFile(std::string const& fname, leveldb::RandomAccessFile** result);

    MCVAPI leveldb::Status NewSequentialFile(std::string const& fname, leveldb::SequentialFile** result);

    MCVAPI leveldb::Status NewWritableFile(std::string const& fname, leveldb::WritableFile** result);

    MCVAPI uint64 NowMicros();

    MCVAPI leveldb::Status RenameFile(std::string const& src, std::string const& target);

    MCVAPI void Schedule(void (*function)(void*), void* arg);

    MCVAPI void SleepForMicroseconds(int microseconds);

    MCVAPI void StartThread(void (*function)(void*), void* arg);

    MCVAPI leveldb::Status UnlockFile(leveldb::FileLock* lock);

    MCVAPI ~LevelDbEnv();

    MCAPI bool IsComplete() const;

    MCAPI LevelDbEnv();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForBedrockEnableNonOwnerReferences();

    MCAPI static void** $vftableForleveldbEnv();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI leveldb::Status CreateDir$(std::string const& path);

    MCAPI leveldb::Status DeleteDir$(std::string const& name);

    MCAPI leveldb::Status DeleteFileA$(std::string const&);

    MCAPI bool FileExists$(std::string const& fname);

    MCAPI leveldb::Status GetChildren$(std::string const& dir, std::vector<std::string>* pChildrenOut);

    MCAPI leveldb::Status GetFileSize$(std::string const& fname, uint64* size);

    MCAPI leveldb::Status GetTestDirectory$(std::string* result);

    MCAPI leveldb::Status LockFile$(std::string const& fname, leveldb::FileLock** lock);

    MCAPI leveldb::Status NewAppendableFile$(std::string const& fname, leveldb::WritableFile** result);

    MCAPI leveldb::Status NewLogger$(std::string const& fname, leveldb::Logger** result);

    MCAPI leveldb::Status NewRandomAccessFile$(std::string const& fname, leveldb::RandomAccessFile** result);

    MCAPI leveldb::Status NewSequentialFile$(std::string const& fname, leveldb::SequentialFile** result);

    MCAPI leveldb::Status NewWritableFile$(std::string const& fname, leveldb::WritableFile** result);

    MCAPI uint64 NowMicros$();

    MCAPI leveldb::Status RenameFile$(std::string const& src, std::string const& target);

    MCAPI void Schedule$(void (*function)(void*), void* arg);

    MCAPI void SleepForMicroseconds$(int microseconds);

    MCAPI void StartThread$(void (*function)(void*), void* arg);

    MCAPI leveldb::Status UnlockFile$(leveldb::FileLock* lock);

    MCAPI static class LevelDbEnv*& sSingleton();

    // NOLINTEND
};

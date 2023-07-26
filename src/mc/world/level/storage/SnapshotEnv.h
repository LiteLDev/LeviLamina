#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class SnapshotEnv {
public:
    // SnapshotEnv inner types declare
    // clang-format off
    class DeleteFileEntry;
    // clang-format on

    // SnapshotEnv inner types define
    class DeleteFileEntry {

    public:
        // prevent constructor by default
        DeleteFileEntry& operator=(DeleteFileEntry const&) = delete;
        DeleteFileEntry(DeleteFileEntry const&)            = delete;
        DeleteFileEntry()                                  = delete;

    public:
        /**
         * @symbol ??1DeleteFileEntry\@SnapshotEnv\@\@QEAA\@XZ
         */
        MCAPI ~DeleteFileEntry(); // NOLINT
    };

public:
    // prevent constructor by default
    SnapshotEnv& operator=(SnapshotEnv const&) = delete;
    SnapshotEnv(SnapshotEnv const&)            = delete;
    SnapshotEnv()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?NewSequentialFile\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVSequentialFile\@3\@\@Z
     */
    virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile**); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?NewRandomAccessFile\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVRandomAccessFile\@3\@\@Z
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile**); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?NewWritableFile\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile**); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?NewAppendableFile\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVWritableFile\@3\@\@Z
     */
    virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile**); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?FileExists\@EnvWrapper\@leveldb\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool FileExists(std::string const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?GetChildren\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@5\@\@Z
     */
    virtual class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?DeleteFileA\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status DeleteFileA(std::string const&); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?CreateDir\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status CreateDir(std::string const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?DeleteDir\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status DeleteDir(std::string const&); // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?GetFileSize\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEA_K\@Z
     */
    virtual class leveldb::Status GetFileSize(std::string const&, unsigned __int64*); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?RenameFile\@SnapshotEnv\@\@UEAA?AVStatus\@leveldb\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual class leveldb::Status RenameFile(std::string const&, std::string const&); // NOLINT
    /**
     * @vftbl 12
     * @symbol
     * ?LockFile\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVFileLock\@2\@\@Z
     */
    virtual class leveldb::Status LockFile(std::string const&, class leveldb::FileLock**); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?UnlockFile\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@PEAVFileLock\@2\@\@Z
     */
    virtual class leveldb::Status UnlockFile(class leveldb::FileLock*); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?Schedule\@EnvWrapper\@leveldb\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    virtual void Schedule(void (*)(void*), void*); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?StartThread\@EnvWrapper\@leveldb\@\@UEAAXP6AXPEAX\@Z0\@Z
     */
    virtual void StartThread(void (*)(void*), void*); // NOLINT
    /**
     * @vftbl 16
     * @symbol
     * ?GetTestDirectory\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@PEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class leveldb::Status GetTestDirectory(std::string*); // NOLINT
    /**
     * @vftbl 17
     * @symbol
     * ?NewLogger\@EnvWrapper\@leveldb\@\@UEAA?AVStatus\@2\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAPEAVLogger\@2\@\@Z
     */
    virtual class leveldb::Status NewLogger(std::string const&, class leveldb::Logger**); // NOLINT
    /**
     * @vftbl 18
     * @symbol ?NowMicros\@EnvWrapper\@leveldb\@\@UEAA_KXZ
     */
    virtual unsigned __int64 NowMicros(); // NOLINT
    /**
     * @vftbl 19
     * @symbol ?SleepForMicroseconds\@EnvWrapper\@leveldb\@\@UEAAXH\@Z
     */
    virtual void SleepForMicroseconds(int); // NOLINT
    /**
     * @symbol ??0SnapshotEnv\@\@QEAA\@PEAVEnv\@leveldb\@\@\@Z
     */
    MCAPI SnapshotEnv(class leveldb::Env*); // NOLINT
    /**
     * @symbol
     * ?createSnapshot\@SnapshotEnv\@\@QEAA?AV?$vector\@USnapshotFilenameAndLength\@\@V?$allocator\@USnapshotFilenameAndLength\@\@\@std\@\@\@std\@\@AEBVPath\@Core\@\@\@Z
     */
    MCAPI std::vector<struct SnapshotFilenameAndLength> createSnapshot(class Core::Path const&); // NOLINT
    /**
     * @symbol ?releaseSnapshot\@SnapshotEnv\@\@QEAAXXZ
     */
    MCAPI void releaseSnapshot(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_isQueuedForRemoval\@SnapshotEnv\@\@AEAA_NAEBV?$PathBuffer\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Core\@\@\@Z
     */
    MCAPI bool _isQueuedForRemoval(class Core::PathBuffer<std::string> const&); // NOLINT

private:
};

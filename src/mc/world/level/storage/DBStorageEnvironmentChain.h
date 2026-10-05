#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class CompactionListenerEnv;
class EncryptedProxyEnv;
class FlushableEnv;
class LevelDbEnv;
class SnapshotEnv;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
// clang-format on

class DBStorageEnvironmentChain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EncryptedProxyEnv>>       mEncryptedEnv;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FlushableEnv>>            mFlushableEnv;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FlushableEnv>>            mPreSnapshotBufferEnv;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SnapshotEnv>>             mSnapshotEnv;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompactionListenerEnv>>   mCompactionListenerEnv;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv>> mLevelDbEnv;
    ::ll::TypedStorage<8, 8, ::leveldb::Env*>                              mWrappedEnv;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>           mDbPath;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::FlushableEnv> createFlushableEnv(
        ::leveldb::Env*                            currentEnv,
        ::std::shared_ptr<::Core::FileStorageArea> storageAreaForLevel,
        ::Core::Path const&                        dbPath
    );
    // NOLINTEND
};

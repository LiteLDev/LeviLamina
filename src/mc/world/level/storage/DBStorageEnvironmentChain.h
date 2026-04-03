#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class FlushableEnv;
class LevelDbEnv;
struct DBStorageConfig;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

class DBStorageEnvironmentChain {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5ef3ee;
    ::ll::UntypedStorage<8, 8>  mUnkff82bf;
    ::ll::UntypedStorage<8, 8>  mUnk556f35;
    ::ll::UntypedStorage<8, 8>  mUnkdbbdca;
    ::ll::UntypedStorage<8, 8>  mUnk715292;
    ::ll::UntypedStorage<8, 24> mUnkd18cb9;
    ::ll::UntypedStorage<8, 8>  mUnkdc46a3;
    ::ll::UntypedStorage<8, 32> mUnk69e817;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorageEnvironmentChain& operator=(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain(DBStorageEnvironmentChain const&);
    DBStorageEnvironmentChain();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DBStorageEnvironmentChain(
        ::DBStorageConfig const&                    config,
        ::Core::Path const&                         dbPath,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv
    );

    MCNAPI ::Core::Result isChainValid(bool bRequireFilePresence) const;

    MCNAPI ~DBStorageEnvironmentChain();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::FlushableEnv> createFlushableEnv(
        ::leveldb::Env*                            currentEnv,
        ::std::shared_ptr<::Core::FileStorageArea> storageAreaForLevel,
        ::Core::Path const&                        dbPath
    );

    MCNAPI static bool isContentKeyValid(
        ::leveldb::Env*                            rootEnv,
        ::Core::Path const&                        dbPath,
        ::ContentIdentity const&                   contentIdentity,
        ::std::string const&                       contentKey,
        ::std::shared_ptr<::Core::FileStorageArea> storageArea
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::DBStorageConfig const&                    config,
        ::Core::Path const&                         dbPath,
        ::Bedrock::NotNullNonOwnerPtr<::LevelDbEnv> levelDbEnv
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

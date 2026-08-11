#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FlushableEnv;
namespace Core { class FileStorageArea; }
namespace Core { class Path; }
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
    // NOLINTEND
};

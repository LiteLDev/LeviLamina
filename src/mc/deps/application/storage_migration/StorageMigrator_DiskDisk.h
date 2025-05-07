#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"
#include "mc/deps/application/storage_migration/StorageMigrator.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrator_DiskDisk : public ::Bedrock::StorageMigration::StorageMigrator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk853ea8;
    ::ll::UntypedStorage<8, 32> mUnkc70e85;
    ::ll::UntypedStorage<8, 32> mUnk9dd82d;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrator_DiskDisk& operator=(StorageMigrator_DiskDisk const&);
    StorageMigrator_DiskDisk(StorageMigrator_DiskDisk const&);
    StorageMigrator_DiskDisk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StorageMigrator_DiskDisk() /*override*/ = default;

    // vIndex: 1
    virtual bool doQuickCompletionCheck() /*override*/;

    // vIndex: 2
    virtual void
        _runMigration(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>, ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles>, ::std::function<void(::Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>, ::std::function<void(::Bedrock::StorageMigration::MigrationResult)>)
            const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

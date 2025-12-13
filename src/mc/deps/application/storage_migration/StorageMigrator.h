#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationResult.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrator : public ::std::enable_shared_from_this<::Bedrock::StorageMigration::StorageMigrator> {
public:
    // StorageMigrator inner types declare
    // clang-format off
    class MigrationProgress;
    // clang-format on

    // StorageMigrator inner types define
    class MigrationProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkdd4c51;
        ::ll::UntypedStorage<4, 4>  mUnk43a903;
        ::ll::UntypedStorage<4, 4>  mUnk1ca0e6;
        ::ll::UntypedStorage<8, 32> mUnk7978a9;
        ::ll::UntypedStorage<8, 32> mUnk61d1d0;
        // NOLINTEND

    public:
        // prevent constructor by default
        MigrationProgress& operator=(MigrationProgress const&);
        MigrationProgress(MigrationProgress const&);
        MigrationProgress();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StorageMigrator() = default;

    // vIndex: 1
    virtual bool doQuickCompletionCheck() = 0;

    // vIndex: 2
    virtual void _runMigration(
        ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>,
        ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles>,
        ::std::function<void(::Bedrock::StorageMigration::StorageMigrator::MigrationProgress)>,
        ::std::function<void(::Bedrock::StorageMigration::MigrationResult)>
    ) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
namespace Bedrock::StorageMigration { struct StorageMigrationInputs; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrationService : public ::Bedrock::EnableNonOwnerReferences,
                                public ::Bedrock::ImplBase<::Bedrock::StorageMigration::StorageMigrationService> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize(
        ::Bedrock::StorageMigration::StorageMigrationInputs const&,
        ::Core::Path const&,
        ::std::function<::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator>(
            ::Bedrock::StorageMigration::StorageMigrationInputs const&,
            ::Core::Path const&,
            ::std::string const&
        )>,
        ::Bedrock::StorageMigration::StorageMigrationType
    ) = 0;

    virtual bool checkMigrationPreviouslyCompleted() = 0;

    virtual bool checkMigrationInProgress() = 0;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData> loadManifest() = 0;

    virtual void setMigrationUIActive(bool) = 0;

    virtual ::Bedrock::StorageMigration::StorageMigrationType getMigrationType() const = 0;

    virtual ::Bedrock::StorageMigration::StorageMigrationInputs const& getInputs() const = 0;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::MigrationDetector> getDetector() const = 0;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator> getMigrator() const = 0;

    virtual bool isMigrationUIActive() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

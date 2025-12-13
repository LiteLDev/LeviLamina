#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/StorageMigrationService.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::StorageMigration {

class StorageMigrationServiceImpl : public ::Bedrock::StorageMigration::StorageMigrationService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7e1e61;
    ::ll::UntypedStorage<8, 16> mUnkd8cb36;
    ::ll::UntypedStorage<8, 16> mUnk78404f;
    ::ll::UntypedStorage<8, 32> mUnk50281b;
    ::ll::UntypedStorage<8, 32> mUnk842973;
    ::ll::UntypedStorage<4, 4>  mUnk6b6842;
    ::ll::UntypedStorage<1, 1>  mUnk6aeab6;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationServiceImpl& operator=(StorageMigrationServiceImpl const&);
    StorageMigrationServiceImpl(StorageMigrationServiceImpl const&);
    StorageMigrationServiceImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void initialize(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Bedrock::StorageMigration::StorageMigrationType
    ) /*override*/;

    virtual bool checkMigrationPreviouslyCompleted() /*override*/;

    virtual bool checkMigrationInProgress() /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData> loadManifest() /*override*/;

    virtual void setMigrationUIActive(bool) /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getSource() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getDestination() const /*override*/;

    virtual ::Bedrock::StorageMigration::StorageMigrationType getMigrationType() const /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::MigrationDetector> getDetector() const /*override*/;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator> getMigrator() const /*override*/;

    virtual bool isMigrationUIActive() const /*override*/;

    virtual ~StorageMigrationServiceImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

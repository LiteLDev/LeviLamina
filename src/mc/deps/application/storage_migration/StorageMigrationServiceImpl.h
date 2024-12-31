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
    // vIndex: 1
    virtual void initialize(
        ::Core::Path const&,
        ::Core::Path const&,
        ::Bedrock::StorageMigration::StorageMigrationType
    ) /*override*/;

    // vIndex: 2
    virtual bool checkMigrationPreviouslyCompleted() /*override*/;

    // vIndex: 3
    virtual bool checkMigrationInProgress() /*override*/;

    // vIndex: 4
    virtual ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData> loadManifest() /*override*/;

    // vIndex: 5
    virtual void setMigrationUIActive(bool) /*override*/;

    // vIndex: 6
    virtual ::Core::PathBuffer<::std::string> const& getSource() const /*override*/;

    // vIndex: 7
    virtual ::Core::PathBuffer<::std::string> const& getDestination() const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::StorageMigration::StorageMigrationType getMigrationType() const /*override*/;

    // vIndex: 9
    virtual ::std::shared_ptr<::Bedrock::StorageMigration::MigrationDetector> getDetector() const /*override*/;

    // vIndex: 10
    virtual ::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator> getMigrator() const /*override*/;

    // vIndex: 11
    virtual bool isMigrationUIActive() const /*override*/;

    // vIndex: 0
    virtual ~StorageMigrationServiceImpl() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

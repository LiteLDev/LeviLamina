#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/MainMenuScreenModel.h"
#include "mc/client/gui/screens/models/StorageMigrationStatus.h"
#include "mc/deps/application/storage_migration/StorageMigrationType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct MinecraftScreenModelContext;
namespace Bedrock::StorageMigration { class MigrationDetector; }
namespace Bedrock::StorageMigration { class StorageMigrationService; }
namespace Bedrock::StorageMigration { class StorageMigrator; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

class StorageMigrationProgressScreenModel : public ::MainMenuScreenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::StorageMigrationStatus>                                         mTransferStatus;
    ::ll::TypedStorage<4, 4, ::Bedrock::StorageMigration::StorageMigrationType>                  mMigrationType;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>>      mManifest;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::StorageMigration::MigrationDetector>> mDetector;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::StorageMigration::StorageMigrator>>   mMigrator;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageMigrationProgressScreenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageMigrationProgressScreenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StorageMigrationProgressScreenModel(::MinecraftScreenModelContext context);

    MCAPI void beginTransfer();

    MCAPI void
    initTransferSystem(::Bedrock::NonOwnerPointer<::Bedrock::StorageMigration::StorageMigrationService> const& service);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftScreenModelContext context);
    // NOLINTEND
};

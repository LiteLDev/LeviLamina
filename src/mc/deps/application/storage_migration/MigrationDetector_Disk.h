#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/storage_migration/MigrationDetector.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

namespace Bedrock::StorageMigration {

class MigrationDetector_Disk : public ::Bedrock::StorageMigration::MigrationDetector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8520a2;
    ::ll::UntypedStorage<8, 32> mUnk10b783;
    ::ll::UntypedStorage<8, 32> mUnk195b5b;
    ::ll::UntypedStorage<8, 16> mUnk1689de;
    ::ll::UntypedStorage<8, 16> mUnke0be58;
    ::ll::UntypedStorage<1, 1>  mUnk86b830;
    // NOLINTEND

public:
    // prevent constructor by default
    MigrationDetector_Disk& operator=(MigrationDetector_Disk const&);
    MigrationDetector_Disk(MigrationDetector_Disk const&);
    MigrationDetector_Disk();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MigrationDetector_Disk() /*override*/ = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles> getFoundFiles() const /*override*/;

    // vIndex: 2
    virtual void _runDetector(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

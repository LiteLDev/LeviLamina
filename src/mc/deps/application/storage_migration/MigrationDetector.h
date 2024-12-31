#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskResult;
namespace Bedrock::StorageMigration { struct FoundFiles; }
namespace Bedrock::StorageMigration { struct ManifestData; }
// clang-format on

namespace Bedrock::StorageMigration {

class MigrationDetector : public ::std::enable_shared_from_this<::Bedrock::StorageMigration::MigrationDetector> {
public:
    // prevent constructor by default
    MigrationDetector& operator=(MigrationDetector const&);
    MigrationDetector(MigrationDetector const&);
    MigrationDetector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MigrationDetector() = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles> getFoundFiles() const = 0;

    // vIndex: 2
    virtual void _runDetector(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>) = 0;
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

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~MigrationDetector() = default;

    virtual ::std::shared_ptr<::Bedrock::StorageMigration::FoundFiles> getFoundFiles() const = 0;

    virtual void _runDetector(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData>) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::function<::TaskResult()>
    createDetectionTask(::std::shared_ptr<::Bedrock::StorageMigration::ManifestData> manifest);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::StorageMigration

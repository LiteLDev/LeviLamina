#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mUUID;
    ::ll::TypedStorage<8, 24, ::SemVersion> mVersion;
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

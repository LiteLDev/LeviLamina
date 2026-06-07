#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>  mUUID;
    ::ll::TypedStorage<8, 24, ::SemVersion> mVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool operator==(::SharedTypes::v3_0_0::PackManifestDefinition::PackDependency const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

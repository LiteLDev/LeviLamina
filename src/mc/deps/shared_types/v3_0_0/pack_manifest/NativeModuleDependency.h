#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/shared_types/v3_0_0/pack_manifest/VersionSelectType.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct NativeModuleDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mModuleName;
    ::ll::TypedStorage<
        8,
        32,
        ::std::variant<::SharedTypes::v3_0_0::PackManifestDefinition::VersionSelectType, ::SemVersion>>
        mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeModuleDependency(NativeModuleDependency const&);
    NativeModuleDependency();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::NativeModuleDependency const&);

    MCAPI ~NativeModuleDependency();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

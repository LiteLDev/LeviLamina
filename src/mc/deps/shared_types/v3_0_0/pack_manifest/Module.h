#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/platform/UUID.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Module {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mType;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                    mUUID;
    ::ll::TypedStorage<8, 24, ::SemVersion>                   mVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDescription;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mLanguage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mEntry;
    // NOLINTEND

public:
    // prevent constructor by default
    Module();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Module(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Module&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Module&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Module&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);

    MCAPI ~Module();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Module const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

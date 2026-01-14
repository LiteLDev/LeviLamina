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

struct Header {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDescription;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                    mUUID;
    ::ll::TypedStorage<8, 24, ::SemVersion>                   mVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mMinEngineVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mBaseGameVersion;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mPackScope;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mPlatformLocked;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mAllowRandomSeed;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mLockTemplateOptions;
    ::ll::TypedStorage<8, 32, ::std::optional<::SemVersion>>  mOptimizationVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    Header();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Header(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCAPI Header(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Header&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Header&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);

    MCAPI ~Header();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Header&&);

    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Header const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

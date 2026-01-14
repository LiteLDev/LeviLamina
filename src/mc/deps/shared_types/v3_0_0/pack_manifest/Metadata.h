#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Metadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                           mAuthors;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                          mUrl;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                          mLicense;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                          mProductType;
    ::ll::TypedStorage<8, 24, ::std::optional<::std::map<::std::string, ::std::vector<::SemVersion>>>> mGeneratedWith;
    // NOLINTEND

public:
    // prevent constructor by default
    Metadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCAPI Metadata(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);

    MCAPI ~Metadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata&&);

    MCAPI void* $ctor(::SharedTypes::v3_0_0::PackManifestDefinition::Metadata const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

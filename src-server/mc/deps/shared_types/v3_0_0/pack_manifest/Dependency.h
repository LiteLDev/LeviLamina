#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Dependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka90e03;
    ::ll::UntypedStorage<8, 24> mUnk5e5c18;
    ::ll::UntypedStorage<8, 24> mUnkfc9d9e;
    // NOLINTEND

public:
    // prevent constructor by default
    Dependency(Dependency const&);
    Dependency();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Dependency&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Dependency&&);

    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Dependency&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Dependency const&);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

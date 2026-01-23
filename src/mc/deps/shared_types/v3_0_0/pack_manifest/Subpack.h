#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Subpack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mFolderName;
    ::ll::TypedStorage<4, 4, int>            mMemoryTier;
    // NOLINTEND

public:
    // prevent constructor by default
    Subpack(Subpack const&);
    Subpack();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&&);

    MCFOLD ::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack const&);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct Subpack {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86db54;
    ::ll::UntypedStorage<8, 32> mUnk4389d1;
    ::ll::UntypedStorage<4, 4>  mUnk10b66e;
    // NOLINTEND

public:
    // prevent constructor by default
    Subpack& operator=(Subpack const&);
    Subpack(Subpack const&);
    Subpack();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&
    operator=(::SharedTypes::v3_0_0::PackManifestDefinition::Subpack&&);
    // NOLINTEND
};

} // namespace SharedTypes::v3_0_0::PackManifestDefinition

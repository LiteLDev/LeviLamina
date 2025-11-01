#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v3_0_0::PackManifestDefinition {

struct PackDependency {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk20eb67;
    ::ll::UntypedStorage<8, 24> mUnkb8384b;
    // NOLINTEND

public:
    // prevent constructor by default
    PackDependency& operator=(PackDependency const&);
    PackDependency(PackDependency const&);
    PackDependency();

};

}

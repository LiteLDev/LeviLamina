#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkac95db;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Description const&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Description&&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet

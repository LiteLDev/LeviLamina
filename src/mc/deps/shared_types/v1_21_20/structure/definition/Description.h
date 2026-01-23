#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<13>> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureDefinition::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureDefinition::Description const&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition

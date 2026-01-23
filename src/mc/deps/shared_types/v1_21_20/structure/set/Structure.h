#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<13>> mStructure;
    ::ll::TypedStorage<1, 1, uchar>                         mWeight;
    // NOLINTEND

public:
    // prevent constructor by default
    Structure(Structure const&);
    Structure();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureSet::Structure&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Structure&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureSet::Structure&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Structure const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureSet {

struct Structure {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd4895b;
    ::ll::UntypedStorage<1, 1>  mUnk7b112a;
    // NOLINTEND

public:
    // prevent constructor by default
    Structure(Structure const&);
    Structure();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Structure&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Structure&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureSet::Structure&
    operator=(::SharedTypes::v1_21_20::JigsawStructureSet::Structure const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureSet

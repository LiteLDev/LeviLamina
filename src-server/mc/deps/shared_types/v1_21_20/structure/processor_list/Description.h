#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureProcessorList {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk199e9c;
    // NOLINTEND

public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Description& operator=(::SharedTypes::v1_21_20::JigsawStructureProcessorList::Description&&);

    MCNAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

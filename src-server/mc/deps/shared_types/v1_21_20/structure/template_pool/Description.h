#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb85b24;
    // NOLINTEND

public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description& operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description&&);

    MCNAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}

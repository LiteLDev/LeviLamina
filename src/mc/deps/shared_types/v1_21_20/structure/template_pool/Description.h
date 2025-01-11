#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct Description {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b4139;
    // NOLINTEND

public:
    // prevent constructor by default
    Description(Description const&);
    Description();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description const&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Description&&);

    MCAPI ~Description();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct SinglePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk346d1e;
    ::ll::UntypedStorage<8, 32> mUnk4d6da9;
    ::ll::UntypedStorage<8, 32> mUnk18a100;
    // NOLINTEND

public:
    // prevent constructor by default
    SinglePoolElement(SinglePoolElement const&);
    SinglePoolElement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&&);

    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool

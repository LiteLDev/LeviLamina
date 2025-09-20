#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct SinglePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d6da9;
    ::ll::UntypedStorage<8, 32> mUnk18a100;
    ::ll::UntypedStorage<1, 1>  mUnkc4a555;
    // NOLINTEND

public:
    // prevent constructor by default
    SinglePoolElement(SinglePoolElement const&);
    SinglePoolElement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement const&);

    MCNAPI ~SinglePoolElement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool

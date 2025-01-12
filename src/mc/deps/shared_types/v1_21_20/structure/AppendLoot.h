#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct AppendLoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnka4786e;
    ::ll::UntypedStorage<8, 32> mUnk3e925c;
    // NOLINTEND

public:
    // prevent constructor by default
    AppendLoot(AppendLoot const&);
    AppendLoot();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot&&);

    MCFOLD ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot const&);

    MCAPI ~AppendLoot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule

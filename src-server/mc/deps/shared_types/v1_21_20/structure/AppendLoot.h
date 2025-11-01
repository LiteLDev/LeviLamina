#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct AppendLoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9ae2db;
    // NOLINTEND

public:
    // prevent constructor by default
    AppendLoot& operator=(AppendLoot const&);
    AppendLoot(AppendLoot const&);
    AppendLoot();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::AppendLoot&&);

    MCNAPI ~AppendLoot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule

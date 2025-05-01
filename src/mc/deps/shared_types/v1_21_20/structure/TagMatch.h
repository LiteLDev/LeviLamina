#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct TagMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd1450f;
    // NOLINTEND

public:
    // prevent constructor by default
    TagMatch(TagMatch const&);
    TagMatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch&&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch&
    operator=(::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::TagMatch const&);

    MCNAPI ~TagMatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule

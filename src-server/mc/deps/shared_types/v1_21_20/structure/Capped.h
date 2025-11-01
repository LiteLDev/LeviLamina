#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockIgnore; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockRules; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct ProtectedBlock; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {

struct Capped {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkcb18fd;
    ::ll::UntypedStorage<4, 12> mUnkf07a09;
    // NOLINTEND

public:
    // prevent constructor by default
    Capped& operator=(Capped const&);
    Capped(Capped const&);
    Capped();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Capped();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors

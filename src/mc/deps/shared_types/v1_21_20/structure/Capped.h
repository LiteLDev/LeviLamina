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
    ::ll::UntypedStorage<4, 4>  mUnk59813e;
    ::ll::UntypedStorage<8, 48> mUnkcb18fd;
    ::ll::UntypedStorage<4, 16> mUnkf07a09;
    // NOLINTEND

public:
    // prevent constructor by default
    Capped& operator=(Capped const&);
    Capped(Capped const&);
    Capped();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Capped();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors

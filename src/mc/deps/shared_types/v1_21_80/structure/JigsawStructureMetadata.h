#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct JigsawStructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                  mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_80::JigsawBlockMetadata>> mJigsawBlocks;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80

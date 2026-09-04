#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadata; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct JigsawStructureMetadataRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::SharedTypes::v1_21_50::JigsawStructureMetadata>> mMetadata;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50

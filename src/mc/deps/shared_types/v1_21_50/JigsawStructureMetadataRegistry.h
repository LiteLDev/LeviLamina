#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct JigsawStructureMetadataRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5d3c8b;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadataRegistry& operator=(JigsawStructureMetadataRegistry const&);
    JigsawStructureMetadataRegistry(JigsawStructureMetadataRegistry const&);
    JigsawStructureMetadataRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct JigsawStructureMetadataRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk99be8d;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadataRegistry& operator=(JigsawStructureMetadataRegistry const&);
    JigsawStructureMetadataRegistry(JigsawStructureMetadataRegistry const&);
    JigsawStructureMetadataRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80

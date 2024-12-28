#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockIgnore; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockRules; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct Capped; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct ProtectedBlock; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructure::Processors {
// functions
// NOLINTBEGIN
MCAPI void bindTypes(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::std::variant<
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock> const& lhs,
    ::std::variant<
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
        ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock> const& rhs
);

MCAPI bool operator==(
    ::SharedTypes::v1_21_20::JigsawStructure::Processors::Capped const& lhs,
    ::SharedTypes::v1_21_20::JigsawStructure::Processors::Capped const& rhs
);
// NOLINTEND

} // namespace SharedTypes::v1_21_20::JigsawStructure::Processors

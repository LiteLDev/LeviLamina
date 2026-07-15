#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/BlockIgnore.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockRules.h"
#include "mc/deps/shared_types/v1_21_20/structure/Capped.h"
#include "mc/deps/shared_types/v1_21_20/structure/ProtectedBlock.h"
#include "mc/deps/shared_types/v1_21_20/structure/processor_list/Description.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20::JigsawStructureProcessorList {

struct Contents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Description> mDescription;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockRules,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::ProtectedBlock,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::BlockIgnore,
            ::SharedTypes::v1_21_20::JigsawStructure::Processors::Capped>>>
        mProcessors;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureProcessorList

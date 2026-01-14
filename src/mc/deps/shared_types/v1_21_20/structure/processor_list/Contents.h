#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/processor_list/Description.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockIgnore; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct BlockRules; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct Capped; }
namespace SharedTypes::v1_21_20::JigsawStructure::Processors { struct ProtectedBlock; }
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
    // prevent constructor by default
    Contents& operator=(Contents const&);
    Contents(Contents const&);
    Contents();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&
    operator=(::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&&);

    MCAPI ~Contents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureProcessorList

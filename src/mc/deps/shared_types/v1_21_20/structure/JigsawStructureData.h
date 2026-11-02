#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct JigsawStructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents>>
        mProcessorLists;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents>>
        mTemplatePools;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents>>
        mJigsawDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents>>
        mJigsawStructureSets;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureData& operator=(JigsawStructureData const&);
    JigsawStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureData(::SharedTypes::v1_21_20::JigsawStructureData const&);

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureData& operator=(::SharedTypes::v1_21_20::JigsawStructureData&&);

    MCNAPI ~JigsawStructureData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20

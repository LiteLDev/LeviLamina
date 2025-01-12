#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IWorldRegistriesProvider;
class JigsawStructureRegistry;
class StructureManager;
class StructureTemplatePool;
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
namespace br::worldgen { class StructureRegistry; }
namespace br::worldgen { struct JigsawStructure; }
namespace br::worldgen { struct StructureProcessor; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

struct JigsawStructureParser {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::br::worldgen::JigsawStructure> prepareJigsawDefinitionData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const& jigsawsData,
        ::IWorldRegistriesProvider&                                                        registries
    );

    MCAPI static ::std::unordered_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>
    prepareJigsawSetData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents> const& stuctureSets,
        ::br::worldgen::StructureRegistry const&                                    structureRegistry
    );

    MCAPI static ::std::unordered_map<
        ::std::string,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>>
    prepareProcessorsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents> const& documents
    );

    MCAPI static ::std::vector<::StructureTemplatePool> prepareTemplatePoolsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents> const& templatePoolsData,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                    structureManager,
        ::JigsawStructureRegistry&                                                           registry
    );

    MCAPI static ::br::worldgen::JigsawStructure processJigsawDefinition(
        ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const& jigsawData,
        ::IWorldRegistriesProvider&                                         registries
    );

    MCAPI static ::std::shared_ptr<::br::worldgen::StructureSet> processJigsawSet(
        ::SharedTypes::v1_21_20::JigsawStructureSet::Contents const& setData,
        ::br::worldgen::StructureRegistry const&                     structureRegistry
    );

    MCAPI static ::StructureTemplatePool processTemplatePool(
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents const& templatePool,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                     structureManager,
        ::JigsawStructureRegistry&                                            registry
    );
    // NOLINTEND
};

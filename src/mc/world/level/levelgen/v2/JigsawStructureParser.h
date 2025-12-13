#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FeatureRegistry;
class IStructureTemplateManager;
class IWorldRegistriesProvider;
class JigsawStructureRegistry;
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
    // JigsawStructureParser inner types define
    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::br::worldgen::JigsawStructure> prepareJigsawDefinitionData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents> const& jigsawsData,
        ::IWorldRegistriesProvider&                                                        registries
    );

    MCNAPI static ::std::unordered_map<::std::string, ::std::shared_ptr<::br::worldgen::StructureSet>>
    prepareJigsawSetData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureSet::Contents> const& stuctureSets,
        ::br::worldgen::StructureRegistry const&                                    structureRegistry
    );

    MCNAPI static ::std::unordered_map<
        ::std::string,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>>
    prepareProcessorsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents> const& documents
    );

    MCNAPI static ::std::vector<::StructureTemplatePool> prepareTemplatePoolsData(
        ::std::vector<::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents> const& templatePoolsData,
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>                           structureManager,
        ::JigsawStructureRegistry&                                                           registry,
        ::FeatureRegistry const&                                                             features
    );

    MCNAPI static ::br::worldgen::JigsawStructure processJigsawDefinition(
        ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents const& jigsawData,
        ::IWorldRegistriesProvider&                                         registries
    );

    MCNAPI static ::std::shared_ptr<::br::worldgen::StructureSet> processJigsawSet(
        ::SharedTypes::v1_21_20::JigsawStructureSet::Contents const& setData,
        ::br::worldgen::StructureRegistry const&                     structureRegistry
    );

    MCNAPI static ::StructureTemplatePool processTemplatePool(
        ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents const& templatePool,
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>            structureManager,
        ::JigsawStructureRegistry&                                            registry,
        ::FeatureRegistry const&                                              features
    );
    // NOLINTEND
};

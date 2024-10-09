#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/world/item/CreativeItemCategory.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDefinitionGroup {
public:
    // BlockDefinitionGroup inner types declare
    // clang-format off
    struct BlockResource;
    // clang-format on

    // BlockDefinitionGroup inner types define
    struct BlockResource {
    public:
        // prevent constructor by default
        BlockResource& operator=(BlockResource const&);
        BlockResource(BlockResource const&);
        BlockResource();

    public:
        // NOLINTBEGIN
        MCAPI ~BlockResource();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    BlockDefinitionGroup& operator=(BlockDefinitionGroup const&);
    BlockDefinitionGroup(BlockDefinitionGroup const&);
    BlockDefinitionGroup();

public:
    // NOLINTBEGIN
    MCAPI explicit BlockDefinitionGroup(struct cereal::ReflectionCtx const& ctx);

    MCAPI void buildBlockSchema(class BlockComponentFactory const& factory);

    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(
        struct BlockDefinitionGroup::BlockResource const& resource,
        class Experiments const&                          experiments
    );

    MCAPI std::vector<std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;

    MCAPI std::vector<struct BlockDefinition const*> getBlockDefinitions() const;

    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const& definition, class Level& level);

    MCAPI void initializeBlocks(class Level& level);

    MCAPI std::unique_ptr<struct BlockDefinition> loadResource(
        std::string                                upgradedJsonData,
        class Core::PathBuffer<std::string> const& res,
        std::string const&                         resourcePacklocation,
        class SemVersion const&                    engineVersion,
        class Experiments const&                   experiments,
        bool                                       isBaseGamePack
    );

    MCAPI void loadResources(
        class ResourcePackManager const&   resourcePackManager,
        class BlockComponentFactory const& factory,
        class Experiments const&           experiments
    );

    MCAPI void registerBlockDefinition(std::unique_ptr<struct BlockDefinition> blockDef);

    MCAPI void registerBlockFromDefinition(struct BlockDefinition const& definition, bool assertIfAlreadyExists);

    MCAPI void registerBlocks();

    MCAPI ~BlockDefinitionGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buildBlockComponentsSchema(
        std::shared_ptr<
            class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&
                                           components,
        class BlockComponentFactory const& factory
    );

    MCAPI void _buildBlockDescriptionSchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>>&
            description
    );

    MCAPI void _buildBlockMenuCategorySchema(
        std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDescription>>&
            description
    );

    MCAPI bool _loadBlockDescription(
        class Json::Value const& root,
        struct BlockDescription& desc,
        class SemVersion const&  engineVersion,
        class SemVersion const&  jsonVersion,
        class Experiments const& experiments,
        bool                     isBaseGamePack
    );

    MCAPI bool _loadComponents(
        class Json::Value const& root,
        struct BlockDefinition&  definition,
        class Experiments const& experiments
    );

    MCAPI bool _loadEvents(class Json::Value const& root, struct BlockDefinition& definition);

    MCAPI bool _parseComponents(
        class Json::Value const&               blockRoot,
        struct BlockComponentGroupDescription& componentGroupDescription,
        std::string const&                     blockIdentifier,
        class SemVersion const&                engineVersion,
        class SemVersion const&                originalJsonVersion,
        class Experiments const&               experiments
    );

    MCAPI ::CreativeItemCategory _stringToCreativeItemCategory(std::string const& str);

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/json/JsonSchemaObjectNode.h"
#include "mc/enums/CreativeItemCategory.h"

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
    MCAPI explicit BlockDefinitionGroup(struct cereal::ReflectionCtx const&);

    MCAPI void buildBlockSchema(class BlockComponentFactory const& factory);

    MCAPI std::unique_ptr<struct BlockDefinition> generateBlockDefinition(
        struct BlockDefinitionGroup::BlockResource const& resource,
        class Experiments const&                          experiments
    );

    MCAPI std::vector<std::pair<std::string, class CompoundTag>> generateServerBlockProperties() const;

    MCAPI std::vector<struct BlockDefinition const*> getBlockDefinitions() const;

    MCAPI void initializeBlockFromDefinition(struct BlockDefinition const&, class Level&);

    MCAPI void initializeBlocks(class Level&);

    MCAPI std::unique_ptr<struct BlockDefinition> loadResource(
        std::string,
        class Core::PathBuffer<std::string> const&,
        std::string const&,
        class SemVersion const&,
        class Experiments const&,
        bool
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
        class Json::Value const&,
        struct BlockDescription&,
        class SemVersion const&,
        class SemVersion const&,
        class Experiments const&,
        bool
    );

    MCAPI bool _loadComponents(
        class Json::Value const& root,
        struct BlockDefinition&  definition,
        class Experiments const& experiments
    );

    MCAPI bool _loadEvents(class Json::Value const& root, struct BlockDefinition& definition);

    MCAPI bool _parseComponents(
        class Json::Value const&,
        struct BlockComponentGroupDescription&,
        std::string const&      blockIdentifier,
        class SemVersion const& engineVersion,
        class SemVersion const&,
        class Experiments const& experiments
    );

    MCAPI ::CreativeItemCategory _stringToCreativeItemCategory(std::string const& str);

    // NOLINTEND
};

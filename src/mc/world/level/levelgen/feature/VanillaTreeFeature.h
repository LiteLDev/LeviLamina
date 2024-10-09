#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonParseState.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"

// auto generated forward declare list
// clang-format off
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
    // size:ok
public:
    // prevent constructor by default
    VanillaTreeFeature& operator=(VanillaTreeFeature const&);
    VanillaTreeFeature(VanillaTreeFeature const&);
    VanillaTreeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaTreeFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _buildSchema(
        class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>,
            struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>& schemaNode
    );

    MCAPI static void _buildVanillaCanopyVariants(
        class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>,
            struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>& schemaNode,
        std::function<
            class ITreeCanopyWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>
            canopyAccessor
    );

    MCAPI static void _buildVanillaRootVariants(
        class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>,
            struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>& schemaNode,
        std::function<class ITreeRootWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>
            rootAccessor
    );

    MCAPI static void _buildVanillaTrunkVariants(
        class JsonUtil::JsonSchemaObjectNode<
            class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct FeatureLoading::FeatureRootParseContext>,
            struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>>& schemaNode,
        std::function<class ITreeTrunkWrapper&(struct FeatureLoading::ConcreteFeatureHolder<class VanillaTreeFeature>*)>
            trunkAccessor
    );

    // NOLINTEND
};

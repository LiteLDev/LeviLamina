#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonParseState.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITreeCanopyWrapper;
class ITreeTrunkWrapper;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
    // size:ok
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaTreeFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _buildSchema(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
            ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode
    );

    MCAPI static void _buildVanillaCanopyVariants(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
            ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode,
        ::std::function<::ITreeCanopyWrapper&(::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>*)>
            canopyAccessor
    );

    MCAPI static void _buildVanillaTrunkVariants(
        ::JsonUtil::JsonSchemaObjectNode<
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
            ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode,
        ::std::function<::ITreeTrunkWrapper&(::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>*)>
            trunkAccessor
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

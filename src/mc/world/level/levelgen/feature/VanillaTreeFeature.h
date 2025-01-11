#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonParseState.h"
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class ITreeCanopyWrapper;
class ITreeTrunkWrapper;
class Random;
class RenderParams;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaTreeFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _buildSchema(::JsonUtil::JsonSchemaObjectNode<
                 ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
                 ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode);

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

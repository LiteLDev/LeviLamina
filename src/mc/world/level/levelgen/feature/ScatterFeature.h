#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ScatterParams;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace SharedTypes::v1_21_10 { struct CoordinateRangeData; }
namespace SharedTypes::v1_21_10 { struct ScatterChanceData; }
namespace SharedTypes::v1_21_10 { struct ScatterParamsData; }
// clang-format on

class ScatterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkdd3a61;
    ::ll::UntypedStorage<8, 216> mUnk35a126;
    ::ll::UntypedStorage<1, 1>   mUnk80a297;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatterFeature& operator=(ScatterFeature const&);
    ScatterFeature(ScatterFeature const&);
    ScatterFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScatterFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_10::CoordinateRangeData
    _createCoordinateRangeDataFromExpression(::SharedTypes::Legacy::ExpressionNode const& expressionNode);

    MCAPI void addCoordinateEvaluationOrder(
        ::SharedTypes::v1_21_10::ScatterParamsData&               scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateEvaluationOrder const& coordinateEvaluationOrder
    );

    MCAPI void addCoordinateRangeDataX(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
    );

    MCAPI void addCoordinateRangeDataXExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
    );

    MCAPI void addCoordinateRangeDataY(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
    );

    MCAPI void addCoordinateRangeDataYExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
    );

    MCAPI void addCoordinateRangeDataZ(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
    );

    MCAPI void addCoordinateRangeDataZExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
    );

    MCAPI void addIterations(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& iterations
    );

    MCAPI void addScatterChance(
        ::SharedTypes::v1_21_10::ScatterParamsData&       scatterParamsData,
        ::SharedTypes::v1_21_10::ScatterChanceData const& scatterChance
    );

    MCAPI void addScatterChanceExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& scatterChance
    );

    MCAPI void addScatterParams(::ScatterParams const& scatterParams);
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

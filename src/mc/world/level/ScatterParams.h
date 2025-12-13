#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/IntRange.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Random;
class RenderParams;
struct BiomeScatterParamData;
struct BiomeStringList;
namespace SharedTypes::v1_21_10 { struct CoordinateRangeData; }
namespace SharedTypes::v1_21_10 { struct ScatterParamsData; }
// clang-format on

class ScatterParams {
public:
    // ScatterParams inner types declare
    // clang-format off
    struct ChanceInformation;
    struct CoordinateRange;
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    class ScatteredPositions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RenderParams&>        mMolangParams;
        ::ll::TypedStorage<8, 8, ::Random&>              mRandom;
        ::ll::TypedStorage<8, 8, ::ScatterParams const&> mScatterParams;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mOrigin;
        ::ll::TypedStorage<4, 4, uint>                   mIterations;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScatteredPositions& operator=(ScatteredPositions const&);
        ScatteredPositions(ScatteredPositions const&);
        ScatteredPositions();
    };

    enum class NeedsMolang : int {
        No  = 0,
        Yes = 1,
    };

    struct CoordinateRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                               mMinOrSingleValue;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                               mMax;
        ::ll::TypedStorage<4, 4, uint>                                            mGridStepSize;
        ::ll::TypedStorage<4, 4, uint>                                            mGridOffset;
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType> mDistribution;
        ::ll::TypedStorage<4, 12, ::std::optional<::IntRange>>                    mFastPathRange;
        // NOLINTEND

    public:
        // prevent constructor by default
        CoordinateRange& operator=(CoordinateRange const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CoordinateRange();

        MCNAPI CoordinateRange(::ScatterParams::CoordinateRange const&);

        MCNAPI CoordinateRange(::ScatterParams::CoordinateRange&&);

        MCNAPI int _eval(int evaluatedMin, int evaluatedMax, uint& stepIndex, ::Random& random) const;

        MCNAPI ~CoordinateRange();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::ScatterParams::CoordinateRange const&);

        MCNAPI void* $ctor(::ScatterParams::CoordinateRange&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ChanceInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mChancePercent;
        ::ll::TypedStorage<4, 4, int>               mNumerator;
        ::ll::TypedStorage<4, 4, int>               mDenominator;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ChanceInformation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::ScatterParams::CoordinateRange[3]>              mCoordinateRanges;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder> mEvalOrder;
    ::ll::TypedStorage<8, 24, ::ScatterParams::ChanceInformation>                mScatterChance;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                  mIterations;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatterParams(ScatterParams const&);
    ScatterParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _fillCoordinateRangeFromData(
        ::std::string const&                                coordinateName,
        ::ScatterParams::CoordinateRange&                   coordinateRange,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData,
        ::MolangVersion const&                              molangVersion,
        ::LogArea                                           logArea
    );

    MCNAPI ::BlockPos
    _getPos(uint stepIndex, ::BlockPos const& origin, ::Random& random, ::RenderParams& molangParams) const;

    MCNAPI void fillFromData(
        ::SharedTypes::v1_21_10::ScatterParamsData const& data,
        ::MolangVersion                                   molangVersion,
        ::LogArea                                         logArea
    );

    MCNAPI ::ScatterParams& operator=(::ScatterParams const&);

    MCNAPI void
    readSerializedScatterParamData(::BiomeScatterParamData const& data, ::BiomeStringList const& stringList);

    MCNAPI ::ScatterParams::ScatteredPositions
    scatter(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void serializeScatterParamData(::BiomeScatterParamData& data, ::BiomeStringList& stringList) const;

    MCNAPI ~ScatterParams();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _parseExpressionNodeFloat(
        ::ExpressionOp       op,
        ::std::string const& expression,
        ::ExpressionNode&    node,
        float                defaultValue
    );

    MCNAPI static void initMolangParams(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

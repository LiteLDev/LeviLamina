#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/IntRange.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Random;
class RenderParams;
struct BiomeScatterParamData;
struct BiomeStringList;
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
    enum class NeedsMolang : int {
        No  = 0,
        Yes = 1,
    };

    struct ChanceInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mChancePercent;
        ::ll::TypedStorage<4, 4, int>               mNumerator;
        ::ll::TypedStorage<4, 4, int>               mDenominator;
        // NOLINTEND
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
        // member functions
        // NOLINTBEGIN
        MCNAPI ~CoordinateRange();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

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
    ScatterParams& operator=(ScatterParams const&);
    ScatterParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScatterParams(::ScatterParams&&);

    MCAPI ScatterParams(::ScatterParams const&);

    MCAPI void fillFromData(
        ::SharedTypes::v1_21_10::ScatterParamsData const& data,
        ::MolangVersion                                   molangVersion,
        ::LogArea                                         logArea
    );

    MCAPI void readSerializedScatterParamData(::BiomeScatterParamData const& data, ::BiomeStringList const& stringList);

    MCAPI ::ScatterParams::ScatteredPositions
    scatter(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void serializeScatterParamData(::BiomeScatterParamData& data, ::BiomeStringList& stringList) const;

    MCAPI ~ScatterParams();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initMolangParams(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random);

    MCAPI static void initScatterParamIndices();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScatterParams&&);

    MCAPI void* $ctor(::ScatterParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

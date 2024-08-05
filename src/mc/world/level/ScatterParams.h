#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/ExpressionNode.h"

class ScatterParams {
public:
    // ScatterParams inner types declare
    // clang-format off
    class ChanceInformation;
    struct CoordinateRange;
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    class ChanceInformation {
    public:
        // prevent constructor by default
        ChanceInformation& operator=(ChanceInformation const&);
        ChanceInformation(ChanceInformation const&);
        ChanceInformation();

    public:
        // NOLINTBEGIN
        MCAPI ~ChanceInformation();

        // NOLINTEND
    };

    struct CoordinateRange {
    public:
        enum class Distribution : int {
            SingleValued    = 0x0,
            Uniform         = 0x1,
            Gaussian        = 0x2,
            InverseGaussian = 0x3,
            FixedGrid       = 0x4,
            JitteredGrid    = 0x5,
            Triangle        = 0x6,
        };
        struct Extent {
            int mMin;
            int mMax;
        };

    public:
        ExpressionNode        mMinOrSingleValue; // this+0x0
        ExpressionNode        mMax;              // this+0xE8
        int                   mGridStepSize;     // this+0x1D0
        int                   mGridOffset;       // this+0x1D4
        Distribution          mDistribution;     // this+0x1D8
        std::optional<Extent> mFastPathRange;    // this+0x1DC

    public:
        // prevent constructor by default
        CoordinateRange& operator=(CoordinateRange const&);

    public:
        // NOLINTBEGIN
        MCAPI CoordinateRange();

        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange&&);

        MCAPI CoordinateRange(struct ScatterParams::CoordinateRange const&);

        MCAPI int _eval(int evaluatedMin, int evaluatedMax, uint& stepIndex, class Random& random) const;

        MCAPI ~CoordinateRange();

        // NOLINTEND
    };

    class ScatteredPositions {
    public:
        // prevent constructor by default
        ScatteredPositions& operator=(ScatteredPositions const&);
        ScatteredPositions(ScatteredPositions const&);
        ScatteredPositions();

    public:
        // NOLINTBEGIN
        MCAPI bool empty();

        MCAPI class BlockPos nextPos();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    ScatterParams& operator=(ScatterParams const&);
    ScatterParams(ScatterParams const&);

public:
    // NOLINTBEGIN
    MCAPI ScatterParams();

    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class CompoundTag const& tag);

    MCAPI class ScatterParams::ScatteredPositions
    scatter(class RenderParams& molangParams, class BlockPos const& pos, class Random& random) const;

    MCAPI ~ScatterParams();

    MCAPI static void
    initMolangParams(class RenderParams& molangParams, class BlockPos const& pos, class Random& random);

    MCAPI static void initScatterParamIndices();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class BlockPos
    _getPos(uint stepIndex, class BlockPos const& origin, class Random& random, class RenderParams& molangParams) const;

    MCAPI void _parseExpressionNodeFloat(
        class CompoundTag const& tag,
        std::string const&       tagName,
        std::string const&,
        class ExpressionNode& node,
        float                 defaultValue
    );

    // NOLINTEND
};

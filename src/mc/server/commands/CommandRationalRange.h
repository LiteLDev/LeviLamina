#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRationalRange {
public:
    // CommandRationalRange inner types define
    enum class BoundType {};

    enum class ValueType {};

public:
    // prevent constructor by default
    CommandRationalRange& operator=(CommandRationalRange const&);
    CommandRationalRange(CommandRationalRange const&);

public:
    // NOLINTBEGIN
    // symbol: ??0CommandRationalRange@@QEAA@XZ
    MCAPI CommandRationalRange();

    // symbol: ??0CommandRationalRange@@QEAA@MM_N0@Z
    MCAPI CommandRationalRange(float, float, bool, bool);

    // symbol: ??0CommandRationalRange@@QEAA@HH_N0@Z
    MCAPI CommandRationalRange(int, int, bool, bool);

    // symbol: ?changeToValueType@CommandRationalRange@@QEAA?AV1@AEBW4ValueType@1@@Z
    MCAPI class CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const&);

    // symbol: ?getMaxValue@CommandRationalRange@@QEBA?AV?$variant@HM@std@@XZ
    MCAPI std::variant<int, float> getMaxValue() const;

    // symbol: ?getMinValue@CommandRationalRange@@QEBA?AV?$variant@HM@std@@XZ
    MCAPI std::variant<int, float> getMinValue() const;

    // symbol: ?hasBoundType@CommandRationalRange@@QEBA_NAEBW4BoundType@1@@Z
    MCAPI bool hasBoundType(::CommandRationalRange::BoundType const&) const;

    // symbol: ?isOfValueType@CommandRationalRange@@QEBA_NAEBW4ValueType@1@@Z
    MCAPI bool isOfValueType(::CommandRationalRange::ValueType const&) const;

    // symbol: ?isWithinRange@CommandRationalRange@@QEBA_NAEBV?$variant@HM@std@@@Z
    MCAPI bool isWithinRange(std::variant<int, float> const&) const;

    // symbol: ?resetToValueType@CommandRationalRange@@QEAAXAEBW4ValueType@1@@Z
    MCAPI void resetToValueType(::CommandRationalRange::ValueType const&);

    // symbol: ?setInvert@CommandRationalRange@@QEAAX_N@Z
    MCAPI void setInvert(bool);

    // symbol: ?setValue@CommandRationalRange@@QEAAXAEBV?$variant@HM@std@@AEBW4BoundType@1@@Z
    MCAPI void setValue(std::variant<int, float> const&, ::CommandRationalRange::BoundType const&);

    // NOLINTEND
};

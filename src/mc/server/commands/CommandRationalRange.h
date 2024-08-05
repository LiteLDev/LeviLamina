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
    MCAPI CommandRationalRange();

    MCAPI CommandRationalRange(float, float, bool, bool);

    MCAPI CommandRationalRange(int, int, bool, bool);

    MCAPI class CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const&);

    MCAPI std::variant<int, float> getMaxValue() const;

    MCAPI std::variant<int, float> getMinValue() const;

    MCAPI bool hasBoundType(::CommandRationalRange::BoundType const&) const;

    MCAPI bool isOfValueType(::CommandRationalRange::ValueType const&) const;

    MCAPI bool isWithinRange(std::variant<int, float> const&) const;

    MCAPI void resetToValueType(::CommandRationalRange::ValueType const&);

    MCAPI void setInvert(bool);

    MCAPI void setValue(std::variant<int, float> const&, ::CommandRationalRange::BoundType const&);

    // NOLINTEND
};

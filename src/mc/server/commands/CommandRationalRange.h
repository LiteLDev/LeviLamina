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

    MCAPI CommandRationalRange(float minFloatVal, float maxFloatVal, bool invert, bool inclusive);

    MCAPI CommandRationalRange(int minIntVal, int maxIntVal, bool invert, bool inclusive);

    MCAPI class CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const& valueType);

    MCAPI std::variant<int, float> getMaxValue() const;

    MCAPI std::variant<int, float> getMinValue() const;

    MCAPI bool hasBoundType(::CommandRationalRange::BoundType const& type) const;

    MCAPI bool isOfValueType(::CommandRationalRange::ValueType const& valueType) const;

    MCAPI bool isWithinRange(std::variant<int, float> const& value) const;

    MCAPI void resetToValueType(::CommandRationalRange::ValueType const& valueType);

    MCAPI void setInvert(bool val);

    MCAPI void setValue(std::variant<int, float> const& value, ::CommandRationalRange::BoundType const& type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

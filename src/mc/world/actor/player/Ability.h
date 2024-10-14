#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Options {};

    enum class Type {};

public:
    // prevent constructor by default
    Ability& operator=(Ability const&);
    Ability(Ability const&);

public:
    // NOLINTBEGIN
    MCAPI Ability();

    MCAPI Ability(bool value, ::Ability::Options ops);

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCAPI ::Ability::Type getType() const;

    MCAPI bool hasOption(::Ability::Options op) const;

    MCAPI bool isSet() const;

    MCAPI bool operator!=(class Ability const& rhs) const;

    MCAPI void setBool(bool val);

    MCAPI void setFloat(float val);

    MCAPI void unSet();

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

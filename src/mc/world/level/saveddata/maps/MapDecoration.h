#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MapDecoration {
public:
    // MapDecoration inner types define
    enum class Type {};

public:
    // prevent constructor by default
    MapDecoration& operator=(MapDecoration const&);
    MapDecoration(MapDecoration const&);

public:
    // NOLINTBEGIN
    MCAPI MapDecoration();

    MCAPI MapDecoration(
        ::MapDecoration::Type   img,
        schar                   x,
        schar                   y,
        schar                   rot,
        std::string const&      label,
        class mce::Color const& color
    );

    MCAPI class mce::Color const& getColor() const;

    MCAPI ::MapDecoration::Type getImg() const;

    MCAPI std::string const& getLabel() const;

    MCAPI schar getRot() const;

    MCAPI schar getX() const;

    MCAPI schar getY() const;

    MCAPI void load(class CompoundTag const& tag);

    MCAPI void save(class CompoundTag& tag);

    MCAPI ~MapDecoration();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

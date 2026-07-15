#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

struct IBiomeEnvironmentAttributeGlue {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBiomeEnvironmentAttributeGlue() = default;

    virtual void applyToBiome(::Biome&, ::std::string const&, ::entt::meta_any const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

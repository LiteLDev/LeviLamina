#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystems {

class IVanillaSystemsEventingAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVanillaSystemsEventingAdapter() = default;

    virtual void doFireEventActorValueValidationFailed(::std::string const&, char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace VanillaSystems

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystems {

class IVanillaSystemsEventingAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVanillaSystemsEventingAdapter();

    virtual void doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) = 0;
    // NOLINTEND
};

} // namespace VanillaSystems

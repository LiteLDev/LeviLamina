#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VanillaSystems {

class IVanillaSystemsEventingAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IVanillaSystemsEventingAdapter() = default;

    // vIndex: 1
    virtual void doFireEventActorValueValidationFailed(::std::string const&, char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IVanillaSystemsEventingAdapter; }
// clang-format on

namespace VanillaSystems {

struct VanillaSystemsEventingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::VanillaSystems::IVanillaSystemsEventingAdapter*>> mEventing;
    // NOLINTEND
};

} // namespace VanillaSystems

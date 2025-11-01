#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_systems/eventing/IVanillaSystemsEventingAdapter.h"

namespace VanillaSystems {

class VanillaSystemsEventingAdapter : public ::VanillaSystems::IVanillaSystemsEventingAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfaffcb;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaSystemsEventingAdapter& operator=(VanillaSystemsEventingAdapter const&);
    VanillaSystemsEventingAdapter(VanillaSystemsEventingAdapter const&);
    VanillaSystemsEventingAdapter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void
    doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller) /*override*/;

    // vIndex: 0
    virtual ~VanillaSystemsEventingAdapter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $doFireEventActorValueValidationFailed(::std::string const& invalidValue, char const* caller);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace VanillaSystems

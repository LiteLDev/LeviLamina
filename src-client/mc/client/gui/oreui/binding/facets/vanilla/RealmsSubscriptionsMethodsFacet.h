#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsSubscriptions; }
// clang-format on

namespace OreUI {

class RealmsSubscriptionsMethodsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsSubscriptionsMethodsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsSubscriptions>> mRealmsSubscriptions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSubscriptionsMethodsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSubscriptionsMethodsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsSubscriptionsMethodsFacet(
        ::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions
    );

    MCNAPI void initialize();

    MCNAPI void reset();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::RealmsSubscriptions> realmsSubscriptions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

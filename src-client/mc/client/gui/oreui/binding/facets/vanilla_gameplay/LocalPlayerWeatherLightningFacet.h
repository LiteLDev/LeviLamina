#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
struct LocalPlayerChangedConnector;
// clang-format on

namespace OreUI {

class LocalPlayerWeatherLightningFacet : public ::OreUI::FacetBase<::OreUI::LocalPlayerWeatherLightningFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>            mIsLightning;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 8, ::LocalPlayer const*>             mLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayerWeatherLightningFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~LocalPlayerWeatherLightningFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LocalPlayerWeatherLightningFacet(::LocalPlayerChangedConnector const& localPlayerChangedConnector);

    MCFOLD ::std::optional<bool> const& getIsLightning() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LocalPlayerChangedConnector const& localPlayerChangedConnector);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

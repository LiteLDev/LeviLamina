#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/network/realms/OptInState.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesSettingsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesSettingsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Realms::Stories::FetchStatus _getFetchState() const;

    MCAPI ::Realms::OptInState _getPlayerOptInStatus() const;

    MCAPI ::Realms::Stories::PostStatus _getPostState() const;

    MCAPI bool _getRealmCoordinatesStatus() const;

    MCAPI bool _getRealmEventsStatus() const;

    MCAPI bool _getRealmNotificationsStatus() const;

    MCAPI ::Realms::OptInState _getRealmOptInStatus() const;

    MCAPI bool _getRealmTimelineRequired() const;

    MCAPI bool _getRealmTimelineStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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

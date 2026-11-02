#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/network/realms/OptInState.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesSettingsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesSettingsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesSettingsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsStoriesSettingsFacet(::std::shared_ptr<::Realms::Stories::FacetStateManager> provider);

    MCNAPI ::Realms::Stories::FetchStatus _getFetchState() const;

    MCNAPI ::Realms::OptInState _getPlayerOptInStatus() const;

    MCNAPI ::Realms::Stories::PostStatus _getPostState() const;

    MCNAPI bool _getRealmCoordinatesStatus() const;

    MCNAPI bool _getRealmEventsStatus() const;

    MCNAPI bool _getRealmNotificationsStatus() const;

    MCNAPI ::Realms::OptInState _getRealmOptInStatus() const;

    MCNAPI bool _getRealmTimelineRequired() const;

    MCNAPI bool _getRealmTimelineStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::Stories::FacetStateManager> provider);
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

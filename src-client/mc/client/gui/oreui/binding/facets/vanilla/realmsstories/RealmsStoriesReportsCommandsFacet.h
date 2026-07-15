#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

namespace OreUI {

class RealmsStoriesReportsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesReportsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModerationManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsStoriesReportsCommandsFacet(
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

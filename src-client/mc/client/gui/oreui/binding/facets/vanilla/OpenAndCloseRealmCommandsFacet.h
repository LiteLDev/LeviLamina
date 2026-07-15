#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class OpenAndCloseRealmManager; }
// clang-format on

namespace OreUI {

class OpenAndCloseRealmCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OpenAndCloseRealmCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mRealmOpenCloseStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenAndCloseRealmCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OpenAndCloseRealmCommandsFacet(
        ::std::shared_ptr<::Realms::OpenAndCloseRealmManager> openAndCloseRealmManager
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
    MCAPI void* $ctor(::std::shared_ptr<::Realms::OpenAndCloseRealmManager> openAndCloseRealmManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/CreatePreviewRealmFromSubscriptionResult.h"
#include "mc/client/network/realms/RealmId.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenController;
class PlayScreenModel;
// clang-format on

namespace OreUI {

class CreatePreviewRealmFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::CreatePreviewRealmFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>          mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenController>> mMainMenuScreenController;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                       isAlive;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>   mCreatePreviewRealmFromSubscriptionTask;
    ::ll::TypedStorage<1, 2, ::std::optional<::OreUI::CreatePreviewRealmFromSubscriptionResult>>
                                                mCreatePreviewRealmFromSubscriptionResult;
    ::ll::TypedStorage<8, 8, ::Realms::RealmId> mCreatedPreviewRealmId;
    ::ll::TypedStorage<8, 8, ::Realms::RealmId> mSelectedSubscriptionId;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePreviewRealmFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CreatePreviewRealmFacet(::std::shared_ptr<::PlayScreenModel> playScreenModel);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> playScreenModel);
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

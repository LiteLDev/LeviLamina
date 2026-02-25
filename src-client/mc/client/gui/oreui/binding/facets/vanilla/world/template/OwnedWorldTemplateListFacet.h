#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct OwnedWorldTemplateDataBindings; }
namespace World { class OwnedWorldTemplateManager; }
// clang-format on

namespace OreUI {

class OwnedWorldTemplateListFacet : public ::OreUI::FacetBase<::OreUI::OwnedWorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 8, ::World::OwnedWorldTemplateManager&>                         mOwnedWorldTemplateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::OwnedWorldTemplateDataBindings>>     mOwnedWorldTemplateList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnedWorldTemplateListFacet& operator=(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet(OwnedWorldTemplateListFacet const&);
    OwnedWorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~OwnedWorldTemplateListFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnedWorldTemplateListFacet(
        ::World::OwnedWorldTemplateManager&                        ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI void _refresh();

    MCFOLD ::std::vector<::OreUI::OwnedWorldTemplateDataBindings> const& getOwnedTemplateWorldsList();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::OwnedWorldTemplateManager&                        ownedWorldTemplateManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
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

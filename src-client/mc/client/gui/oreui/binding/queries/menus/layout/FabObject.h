#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IPropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/RefreshPolicyObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct BannerFab; }
namespace Bedrock::Services::layout::model { struct ExperienceFab; }
namespace Bedrock::Services::layout::model { struct ExperienceListFab; }
namespace Bedrock::Services::layout::model { struct ExperiencePdpFab; }
namespace Bedrock::Services::layout::model { struct FabBase; }
namespace Bedrock::Services::layout::model { struct SimpleAnnouncementFab; }
namespace Bedrock::Services::layout::model { struct StandardMarketplaceItemListFab; }
// clang-format on

namespace OreUI {

class FabObject : public ::OreUI::PropertyObject<::OreUI::FabObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mType;
    ::ll::TypedStorage<8, 712, ::OreUI::RefreshPolicyObject>                      mRefreshPolicy;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mVariant;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::IPropertyObject>> mDerivedFab;
    // NOLINTEND

public:
    // prevent constructor by default
    FabObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FabObject() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FabObject(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperienceListFab const& fab
    );

    MCAPI FabObject(
        ::std::string const&                                     name,
        ::OreUI::Detail::IPropertyObject*                        parent,
        ::Bedrock::Services::layout::model::ExperienceFab const& fab
    );

    MCAPI FabObject(
        ::std::string const&                                 name,
        ::OreUI::Detail::IPropertyObject*                    parent,
        ::Bedrock::Services::layout::model::BannerFab const& fab
    );

    MCAPI FabObject(
        ::std::string const&                                                      name,
        ::OreUI::Detail::IPropertyObject*                                         parent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );

    MCAPI FabObject(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::FabBase const& fab
    );

    MCAPI FabObject(
        ::std::string const&                                             name,
        ::OreUI::Detail::IPropertyObject*                                parent,
        ::Bedrock::Services::layout::model::SimpleAnnouncementFab const& fab
    );

    MCAPI FabObject(
        ::std::string const&                                        name,
        ::OreUI::Detail::IPropertyObject*                           parent,
        ::Bedrock::Services::layout::model::ExperiencePdpFab const& fab
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperienceListFab const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                                     name,
        ::OreUI::Detail::IPropertyObject*                        parent,
        ::Bedrock::Services::layout::model::ExperienceFab const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                                 name,
        ::OreUI::Detail::IPropertyObject*                    parent,
        ::Bedrock::Services::layout::model::BannerFab const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                                                      name,
        ::OreUI::Detail::IPropertyObject*                                         parent,
        ::Bedrock::Services::layout::model::StandardMarketplaceItemListFab const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                               name,
        ::OreUI::Detail::IPropertyObject*                  parent,
        ::Bedrock::Services::layout::model::FabBase const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                                             name,
        ::OreUI::Detail::IPropertyObject*                                parent,
        ::Bedrock::Services::layout::model::SimpleAnnouncementFab const& fab
    );

    MCAPI void* $ctor(
        ::std::string const&                                        name,
        ::OreUI::Detail::IPropertyObject*                           parent,
        ::Bedrock::Services::layout::model::ExperiencePdpFab const& fab
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI

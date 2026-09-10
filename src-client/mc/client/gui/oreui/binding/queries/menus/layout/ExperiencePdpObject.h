#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceImageSetObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperiencePdp; }
namespace OreUI { class ExperiencePdpActivityObject; }
namespace OreUI { class ExperiencePdpNewsObject; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperiencePdpObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePdpObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>     mTitle;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>     mDescription;
    ::ll::TypedStorage<8, 1560, ::OreUI::ExperienceImageSetObject> mBanner;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::ExperiencePdpActivityObject,
            ::std::allocator<::OreUI::ExperiencePdpActivityObject>>>
                                                                                  mActivities;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ExperiencePdpNewsObject>> mNews;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperiencePdpObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperiencePdpObject(
        ::std::string const&                                     name,
        ::OreUI::Detail::IPropertyObject*                        parent,
        ::Bedrock::Services::layout::model::ExperiencePdp const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                     name,
        ::OreUI::Detail::IPropertyObject*                        parent,
        ::Bedrock::Services::layout::model::ExperiencePdp const& src
    );
    // NOLINTEND
};

} // namespace OreUI

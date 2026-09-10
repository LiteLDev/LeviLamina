#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/ExperienceListingObject.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/LocalizedStringObject.h"
#include "mc/client/store/services/ExperienceMode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct ExperiencePreview; }
namespace OreUI { class LinksToObject; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExperiencePreviewObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePreviewObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                      mExperienceId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Bedrock::Services::layout::model::ExperienceMode>> mMode;
    ::ll::TypedStorage<8, 440, ::OreUI::LocalizedStringObject>                                        mTitle;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                      mCreatorName;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                      mCreatorId;
    ::ll::TypedStorage<8, 1808, ::OreUI::ExperienceListingObject>                                     mListing;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LinksToObject>>                               mLinksTo;
    // NOLINTEND

public:
    // prevent constructor by default
    ExperiencePreviewObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExperiencePreviewObject(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperiencePreview const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                         name,
        ::OreUI::Detail::IPropertyObject*                            parent,
        ::Bedrock::Services::layout::model::ExperiencePreview const& src
    );
    // NOLINTEND
};

} // namespace OreUI

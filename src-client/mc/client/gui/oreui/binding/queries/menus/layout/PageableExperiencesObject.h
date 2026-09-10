#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ExperiencePreviewObject; }
// clang-format on

namespace OreUI {

class PageableExperiencesObject : public ::OreUI::PropertyObject<::OreUI::PageableExperiencesObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mContinuationToken;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ExperiencePreviewObject, ::std::allocator<::OreUI::ExperiencePreviewObject>>>
        mExperiences;
    // NOLINTEND
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct FacetAchievementCategoryData; }
// clang-format on

namespace OreUI {

class AchievementCategoriesFacet : public ::OreUI::FacetBase<::OreUI::AchievementCategoriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetAchievementCategoryData>> mStandardCategoryData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FacetAchievementCategoryData>> mReleaseCategoryData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~AchievementCategoriesFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AchievementCategoriesFacet();

    MCFOLD ::std::vector<::OreUI::FacetAchievementCategoryData> const& getReleaseCategoryData() const;

    MCFOLD ::std::vector<::OreUI::FacetAchievementCategoryData> const& getStandardCategoryData() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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

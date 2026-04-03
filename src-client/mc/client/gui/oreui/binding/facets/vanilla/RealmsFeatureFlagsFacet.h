#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
class RealmsAPI;
// clang-format on

namespace OreUI {

class RealmsFeatureFlagsFacet : public ::OreUI::FacetBase<::OreUI::RealmsFeatureFlagsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mRealmsFeatureFlags;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFeatureFlagsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~RealmsFeatureFlagsFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsFeatureFlagsFacet(::std::weak_ptr<::RealmsAPI> realmsApi);

    MCFOLD ::std::vector<::std::string> const& getAllFeatureFlags() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::RealmsAPI> realmsApi);
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

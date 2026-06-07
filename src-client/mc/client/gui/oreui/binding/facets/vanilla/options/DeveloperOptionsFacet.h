#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
// clang-format on

namespace OreUI {

class DeveloperOptionsFacet : public ::OreUI::FacetBase<::OreUI::DeveloperOptionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&> mOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    DeveloperOptionsFacet& operator=(DeveloperOptionsFacet const&);
    DeveloperOptionsFacet(DeveloperOptionsFacet const&);
    DeveloperOptionsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeveloperOptionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DeveloperOptionsFacet(::IOptionRegistry& options);

    MCFOLD bool isRealmsPreproductionEnvironment() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IOptionRegistry& options);
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
// clang-format on

namespace OreUI {

class ProfanityFilterFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ProfanityFilterFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityFilterContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfanityFilterFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfanityFilterFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ProfanityFilterFacet(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext);

    MCNAPI bool isProfanityInString(::std::string const& stringToCheck) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

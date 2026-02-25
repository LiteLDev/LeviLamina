#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IFacet; }
// clang-format on

namespace OreUI::Debug {

class IFacetProvider : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unordered_map<::std::string, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IFacet>> getActiveFacets() = 0;

    virtual ~IFacetProvider() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Debug

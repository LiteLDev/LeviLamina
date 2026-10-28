#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/BaseCssProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
// clang-format on

namespace OreUI::Styling {

struct CssRemProperty : public ::OreUI::Styling::BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::std::variant<::std::optional<int>, ::std::optional<float>>> mValue;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    );
    // NOLINTEND
};

} // namespace OreUI::Styling

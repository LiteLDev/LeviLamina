#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/BaseCssProperty.h"
#include "mc/client/gui/oreui/CssPrimitivePropertyOptions.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
// clang-format on

namespace OreUI::Styling {

struct CssPrimitiveProperty : public ::OreUI::Styling::BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::std::optional<int>,
            ::std::optional<float>,
            ::std::optional<::std::string>,
            ::std::optional<bool>>>
                                                                            mValue;
    ::ll::TypedStorage<1, 2, ::OreUI::Styling::CssPrimitivePropertyOptions> mOptions;
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

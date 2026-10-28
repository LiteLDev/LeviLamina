#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/BaseCssProperty.h"
#include "mc/deps/shared_types/beta/data_drivenui/styling/BoxSizeBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
// clang-format on

namespace OreUI::Styling {

struct CssBoxSizeProperty : public ::OreUI::Styling::BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::optional<::SharedTypes::Beta::DataDrivenUI::Styling::BoxSizeBase>> mValue;
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

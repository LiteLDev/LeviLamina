#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/BaseCssProperty.h"
#include "mc/detail/ColorBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
namespace SharedTypes { struct Color255RGB; }
namespace SharedTypes { struct Color255RGBA; }
// clang-format on

namespace OreUI::Styling {

struct CssColorProperty : public ::OreUI::Styling::BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::optional<::Detail::ColorBase>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    CssColorProperty();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CssColorProperty(
        ::std::string const&                                                     propertyName,
        ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>& value
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                                     propertyName,
        ::std::variant<::SharedTypes::Color255RGBA, ::SharedTypes::Color255RGB>& value
    );
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

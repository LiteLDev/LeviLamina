#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Styling { struct CssParsingOptions; }
// clang-format on

namespace OreUI::Styling {

struct BaseCssProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mPropertyName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseCssProperty() = default;

    virtual ::std::string convertToCss(
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    ) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getCssFloatProp(
        ::std::string const&                       propertyName,
        ::std::optional<float> const&              value,
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    );

    MCAPI static ::std::string getCssFloatRemProp(
        ::std::string const&                       propertyName,
        ::std::optional<float> const&              value,
        ::OreUI::Styling::CssParsingOptions const& options,
        ::std::unordered_set<::std::string>&       addedProperties
    );
    // NOLINTEND
};

} // namespace OreUI::Styling

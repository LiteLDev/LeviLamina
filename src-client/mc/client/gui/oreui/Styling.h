#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IDataDrivenUIRepository;
namespace OreUI::Styling { struct CssBackgroundTextureProperty; }
namespace OreUI::Styling { struct CssBoxSizeProperty; }
namespace OreUI::Styling { struct CssColorProperty; }
namespace OreUI::Styling { struct CssPanelTextShadowProperty; }
namespace OreUI::Styling { struct CssParsingOptions; }
namespace OreUI::Styling { struct CssPrimitiveProperty; }
namespace OreUI::Styling { struct CssRemProperty; }
namespace SharedTypes::Beta::DataDrivenUI::Styling { struct Style; }
// clang-format on

namespace OreUI::Styling {
// functions
// NOLINTBEGIN
MCAPI ::std::string
generateStyles(::IDataDrivenUIRepository& dataDrivenUIRepository, ::OreUI::Styling::CssParsingOptions const& options);

MCAPI ::std::vector<::std::variant<
    ::OreUI::Styling::CssBackgroundTextureProperty,
    ::OreUI::Styling::CssBoxSizeProperty,
    ::OreUI::Styling::CssColorProperty,
    ::OreUI::Styling::CssPrimitiveProperty,
    ::OreUI::Styling::CssPanelTextShadowProperty,
    ::OreUI::Styling::CssRemProperty>>
getStyleCssProperties(::SharedTypes::Beta::DataDrivenUI::Styling::Style& style);
// NOLINTEND

} // namespace OreUI::Styling

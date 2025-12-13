#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/persona/PersonaColorOption.h"

// auto generated forward declare list
// clang-format off
namespace persona::color { class SwatchList; }
namespace persona::color { class SwatchListInfo; }
namespace persona::color { struct Swatch; }
// clang-format on

namespace persona::color {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::persona::color::SwatchList>
createSwatchList(::std::vector<::persona::color::Swatch>&& swatches);

MCNAPI_C ::persona::color::SwatchListInfo
createSwatchListInfo(::std::unique_ptr<::persona::color::SwatchList> const& swatchList, ::std::string&& name);

MCNAPI_C ::persona::color::SwatchListInfo getSwatchListInfoByColorOption(::persona::PersonaColorOption colorOption);
// NOLINTEND

} // namespace persona::color

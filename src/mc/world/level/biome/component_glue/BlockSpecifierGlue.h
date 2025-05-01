#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
namespace SharedTypes::v1_20_60 { struct BlockSpecifier; }
// clang-format on

namespace BlockSpecifierGlue {
// functions
// NOLINTBEGIN
MCNAPI ::std::unique_ptr<::BlockDescriptor>
getResolvedBlock(::SharedTypes::v1_20_60::BlockSpecifier const& blockSpecifier);
// NOLINTEND

} // namespace BlockSpecifierGlue

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
MCAPI ::std::unique_ptr<::BlockDescriptor> getResolvedBlockDescriptor(::SharedTypes::v1_20_60::BlockSpecifier const& blockSpecifier);
// NOLINTEND

}

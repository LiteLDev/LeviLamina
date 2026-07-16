#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemStackBase;
namespace Json { class Value; }
// clang-format on

namespace Util::CodeBuilder {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value createObject(::ItemStackBase const& item);

MCNAPI ::Json::Value createObject(::Block const& val, int aux);
// NOLINTEND

} // namespace Util::CodeBuilder

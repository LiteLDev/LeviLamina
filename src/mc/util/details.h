#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_utils/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace JsonUtil { class EmptyClass; }
namespace JsonUtil::details { struct BlockReference; }
// clang-format on

namespace JsonUtil::details {
// functions
// NOLINTBEGIN
MCAPI ::Block const* _getBlockDefaultState(::std::string const& blockTypeName);

MCAPI ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JsonUtil::details::BlockReference>>
_getOrMakeBlockReferenceSchema();
// NOLINTEND

} // namespace JsonUtil::details

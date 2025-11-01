#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace JsonUtil { class EmptyClass; }
namespace JsonUtil::details { struct BlockReference; }
// clang-format on

namespace JsonUtil::details {
// functions
// NOLINTBEGIN
MCNAPI ::Block const* _getBlockDefaultState(::std::string const& blockTypeName);

MCNAPI ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::JsonUtil::details::BlockReference>> _getOrMakeBlockReferenceSchema();
// NOLINTEND

}

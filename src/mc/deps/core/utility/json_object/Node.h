#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/NodeBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Node : public ::Bedrock::JSONObject::NodeBase {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::JSONObject::ObjectNode* asObject();

    MCAPI ::Bedrock::JSONObject::Node* operator=(::Bedrock::JSONObject::ValueWrapper const& rhs);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/JSONType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Node {
public:
    // prevent constructor by default
    Node& operator=(Node const&);
    Node(Node const&);
    Node();

public:
    // NOLINTBEGIN
    MCAPI class Bedrock::JSONObject::ObjectNode* asObject();

    MCAPI ::Bedrock::JSONObject::JSONType getType() const;

    MCAPI class Bedrock::JSONObject::Node* operator=(class Bedrock::JSONObject::ValueWrapper const& rhs);

    MCAPI std::string toJSONString() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ~Node();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

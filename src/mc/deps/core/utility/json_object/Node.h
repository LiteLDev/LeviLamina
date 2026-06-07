#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/NodeBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Node : public ::Bedrock::JSONObject::NodeBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::JSONObject::ObjectNode const* asObject() const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode* asObject();

    MCNAPI ::Bedrock::JSONObject::StringNode const* asString() const;

    MCNAPI bool isObject() const;

    MCNAPI bool isString() const;

    MCNAPI ::Bedrock::JSONObject::Node* operator=(::Bedrock::JSONObject::ValueWrapper const& rhs);

#ifdef LL_PLAT_C
    MCNAPI bool toBool(bool defaultValue) const;
#endif

    MCNAPI void toJSONString(::std::string& dest) const;

#ifdef LL_PLAT_C
    MCNAPI int toSInt32(int defaultValue) const;
#endif
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

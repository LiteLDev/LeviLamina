#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ObjectNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ObjectNode inner types declare
    // clang-format off
    template<int T0> class iterator_base;
    // clang-format on

    // ObjectNode inner types define
    template <int T0>
    class iterator_base {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<1> begin() const;

    MCNAPI void clear();

    MCNAPI_C ::Bedrock::JSONObject::ObjectNode::iterator_base<1> end() const;

    MCNAPI_C ::Bedrock::JSONObject::ObjectNode::iterator_base<1> find(::std::string_view keyStr) const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<0>
    insert(::std::string_view keyStr, ::Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);

    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const& contents);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ArrayNode inner types declare
    // clang-format off
    template<int T0> class iterator_base;
    // clang-format on

    // ArrayNode inner types define
    template <int T0>
    class iterator_base {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Bedrock::JSONObject::ArrayNode::iterator_base<1> begin() const;

    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const& contents);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

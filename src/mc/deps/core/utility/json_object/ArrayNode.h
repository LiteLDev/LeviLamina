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
    class iterator_base {
    public:
        // prevent constructor by default
        iterator_base& operator=(iterator_base const&);
        iterator_base(iterator_base const&);
        iterator_base();
    };

public:
    // prevent constructor by default
    ArrayNode& operator=(ArrayNode const&);
    ArrayNode(ArrayNode const&);
    ArrayNode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const& contents);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

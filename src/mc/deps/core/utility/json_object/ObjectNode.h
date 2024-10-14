#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ObjectNode {
public:
    // ObjectNode inner types declare
    // clang-format off
    template<int T0> class iterator_base;
    // clang-format on

    // ObjectNode inner types define
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
    ObjectNode& operator=(ObjectNode const&);
    ObjectNode(ObjectNode const&);
    ObjectNode();

public:
    // NOLINTBEGIN
    MCAPI class Bedrock::JSONObject::ObjectNode::iterator_base<0> begin();

    MCAPI void clear();

    MCAPI class Bedrock::JSONObject::ObjectNode::iterator_base<0> end();

    MCAPI class Bedrock::JSONObject::ObjectNode::iterator_base<0>
    insert(std::string_view keyStr, class Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);

    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const& contents);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI explicit ObjectNode(class Bedrock::JSONObject::MemoryPage* owningPage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

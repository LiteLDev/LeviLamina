#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
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
    // symbol: ?clear@ObjectNode@JSONObject@Bedrock@@QEAAXXZ
    MCAPI void clear();

    // symbol:
    // ?insert@ObjectNode@JSONObject@Bedrock@@QEAA?AV?$iterator_base@$0A@@123@V?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBVValueWrapper@23@_N@Z
    MCAPI class Bedrock::JSONObject::ObjectNode::iterator_base<0>
    insert(std::string_view keyStr, class Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);

    // symbol: ?setContents@ObjectNode@JSONObject@Bedrock@@QEAA_NAEBVValueWrapper@23@@Z
    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const& contents);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

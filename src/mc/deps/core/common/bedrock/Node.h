#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // symbol: ?asObject@Node@JSONObject@Bedrock@@QEAAPEAVObjectNode@23@XZ
    MCAPI class Bedrock::JSONObject::ObjectNode* asObject();

    // symbol: ??4Node@JSONObject@Bedrock@@QEAAPEAV012@AEBVValueWrapper@12@@Z
    MCAPI class Bedrock::JSONObject::Node* operator=(class Bedrock::JSONObject::ValueWrapper const& rhs);

    // symbol:
    // ?toJSONString@Node@JSONObject@Bedrock@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toJSONString() const;

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

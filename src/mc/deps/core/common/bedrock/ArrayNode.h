#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode {
public:
    // prevent constructor by default
    ArrayNode& operator=(ArrayNode const&);
    ArrayNode(ArrayNode const&);
    ArrayNode();

public:
    // NOLINTBEGIN
    // symbol: ?clear@ArrayNode@JSONObject@Bedrock@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?setContents@ArrayNode@JSONObject@Bedrock@@QEAA_NAEBVValueWrapper@23@@Z
    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const& contents);

    // symbol: ??1ArrayNode@JSONObject@Bedrock@@QEAA@XZ
    MCAPI ~ArrayNode();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0ArrayNode@JSONObject@Bedrock@@AEAA@PEAVMemoryPage@12@@Z
    MCAPI explicit ArrayNode(class Bedrock::JSONObject::MemoryPage*);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

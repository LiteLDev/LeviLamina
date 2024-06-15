#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class BooleanNode {
public:
    // prevent constructor by default
    BooleanNode& operator=(BooleanNode const&);
    BooleanNode(BooleanNode const&);
    BooleanNode();

    // private:
    // NOLINTBEGIN
    // symbol: ??0BooleanNode@JSONObject@Bedrock@@AEAA@PEAVMemoryPage@12@_N@Z
    MCAPI BooleanNode(class Bedrock::JSONObject::MemoryPage*, bool value);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

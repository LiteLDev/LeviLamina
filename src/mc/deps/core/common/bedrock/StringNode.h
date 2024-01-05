#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class StringNode {
public:
    // prevent constructor by default
    StringNode& operator=(StringNode const&);
    StringNode(StringNode const&);
    StringNode();

public:
    // NOLINTBEGIN
    // symbol: ?set@StringNode@JSONObject@Bedrock@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI bool set(std::string_view str, bool copy);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

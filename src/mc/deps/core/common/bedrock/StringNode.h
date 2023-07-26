#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class StringNode {

public:
    // prevent constructor by default
    StringNode& operator=(StringNode const&) = delete;
    StringNode(StringNode const&)            = delete;
    StringNode()                             = delete;

public:
    /**
     * @symbol
     * ?set\@StringNode\@JSONObject\@Bedrock\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI bool set(class std::basic_string_view<char, struct std::char_traits<char>>, bool); // NOLINT
};

}; // namespace Bedrock::JSONObject

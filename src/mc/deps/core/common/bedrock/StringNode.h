#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class StringNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_STRINGNODE
public:
    StringNode& operator=(StringNode const&) = delete;
    StringNode(StringNode const&)            = delete;
    StringNode()                             = delete;
#endif

public:
    /**
     * @symbol
     * ?set\@StringNode\@JSONObject\@Bedrock\@\@QEAA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@_N\@Z
     */
    MCAPI bool set(class std::basic_string_view<char, struct std::char_traits<char>>, bool);
};

}; // namespace Bedrock::JSONObject

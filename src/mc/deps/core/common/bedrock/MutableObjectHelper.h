#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class MutableObjectHelper {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_MUTABLEOBJECTHELPER
public:
    MutableObjectHelper& operator=(MutableObjectHelper const&) = delete;
    MutableObjectHelper(MutableObjectHelper const&)            = delete;
#endif

public:
    /**
     * @symbol ??0MutableObjectHelper\@JSONObject\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI MutableObjectHelper();
    /**
     * @symbol
     * ?insert\@MutableObjectHelper\@JSONObject\@Bedrock\@\@QEAA?AU?$pair\@V?$_Tree_iterator\@V?$_Tree_val\@U?$_Tree_simple_types\@U?$pair\@$$CBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@PEAVNode\@JSONObject\@Bedrock\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@_N\@std\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@5\@AEBVValueWrapper\@23\@_N\@Z
     */
    MCAPI struct std::pair<
        class std::_Tree_iterator<class std::_Tree_val<struct std::_Tree_simple_types<struct std::pair<
            class std::basic_string_view<char, struct std::char_traits<char>> const,
            class Bedrock::JSONObject::Node*>>>>,
        bool>
    insert(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class Bedrock::JSONObject::ValueWrapper const&,
        bool
    );
};

}; // namespace Bedrock::JSONObject

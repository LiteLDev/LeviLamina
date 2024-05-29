#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class MutableObjectHelper {
public:
    // prevent constructor by default
    MutableObjectHelper& operator=(MutableObjectHelper const&);
    MutableObjectHelper(MutableObjectHelper const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MutableObjectHelper@JSONObject@Bedrock@@QEAA@XZ
    MCAPI MutableObjectHelper();

    // symbol:
    // ?insert@MutableObjectHelper@JSONObject@Bedrock@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVNode@JSONObject@Bedrock@@@std@@@std@@@std@@@std@@_N@std@@V?$basic_string_view@DU?$char_traits@D@std@@@5@AEBVValueWrapper@23@_N@Z
    MCAPI std::pair<
        std::_Tree_iterator<std::_Tree_val<
            std::_Tree_simple_types<std::pair<std::string_view const, class Bedrock::JSONObject::Node*>>>>,
        bool>
    insert(std::string_view key, class Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

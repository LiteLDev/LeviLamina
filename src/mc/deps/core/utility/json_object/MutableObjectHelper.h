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
    MCAPI MutableObjectHelper();

    MCAPI std::pair<
        std::_Tree_iterator<std::_Tree_val<
            std::_Tree_simple_types<std::pair<std::string_view const, class Bedrock::JSONObject::Node*>>>>,
        bool>
    insert(std::string_view key, class Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);

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

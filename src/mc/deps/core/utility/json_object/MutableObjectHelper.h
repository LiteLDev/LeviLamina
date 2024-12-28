#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/ObjectHelperBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class MutableObjectHelper : public ::Bedrock::JSONObject::ObjectHelperBase<0> {
public:
    // prevent constructor by default
    MutableObjectHelper& operator=(MutableObjectHelper const&);
    MutableObjectHelper(MutableObjectHelper const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MutableObjectHelper();

    MCAPI ::std::pair<
        ::std::_Tree_iterator<::std::_Tree_val<
            ::std::_Tree_simple_types<::std::pair<::std::string_view const, ::Bedrock::JSONObject::Node*>>>>,
        bool>
    insert(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject

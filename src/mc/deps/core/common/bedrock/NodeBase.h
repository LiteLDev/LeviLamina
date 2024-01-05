#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

class NodeBase {
public:
    // NodeBase inner types declare
    // clang-format off
    class Offset;
    // clang-format on

    // NodeBase inner types define
    class Offset {
    public:
        // prevent constructor by default
        Offset& operator=(Offset const&);
        Offset(Offset const&);
        Offset();
    };

public:
    // prevent constructor by default
    NodeBase& operator=(NodeBase const&);
    NodeBase(NodeBase const&);
    NodeBase();

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getBase@NodeBase@JSONObject@Bedrock@@IEBAAEBV123@VOffset@123@E@Z
    MCAPI class Bedrock::JSONObject::NodeBase const&
    _getBase(class Bedrock::JSONObject::NodeBase::Offset offset, uchar page) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?list_set_next@NodeBase@JSONObject@Bedrock@@CAXAEAV123@0@Z
    MCAPI static void list_set_next(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);

    // symbol: ?list_set_prev@NodeBase@JSONObject@Bedrock@@CAXAEAV123@0@Z
    MCAPI static void list_set_prev(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/JSONType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Document; }
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class Node; }
// clang-format on

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

public:
    // NOLINTBEGIN
    // symbol: ?getOwningDocument@NodeBase@JSONObject@Bedrock@@QEBAAEAVDocument@23@XZ
    MCAPI class Bedrock::JSONObject::Document& getOwningDocument() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0NodeBase@JSONObject@Bedrock@@IEAA@PEAVMemoryPage@12@W4JSONType@12@@Z
    MCAPI NodeBase(class Bedrock::JSONObject::MemoryPage*, ::Bedrock::JSONObject::JSONType type);

    // symbol: ?_getBase@NodeBase@JSONObject@Bedrock@@IEBAAEBV123@VOffset@123@E@Z
    MCAPI class Bedrock::JSONObject::NodeBase const&
    _getBase(class Bedrock::JSONObject::NodeBase::Offset offset, uchar page) const;

    // symbol: ?_setBase@NodeBase@JSONObject@Bedrock@@IEAAXAEAV123@AEAVOffset@123@AEAE@Z
    MCAPI void
    _setBase(class Bedrock::JSONObject::NodeBase& to, class Bedrock::JSONObject::NodeBase::Offset& offset, uchar& page);

    // symbol: ?_swapCollectionMembership@NodeBase@JSONObject@Bedrock@@IEAAXAEAV123@@Z
    MCAPI void _swapCollectionMembership(class Bedrock::JSONObject::NodeBase& other);

    // symbol: ?toNode@NodeBase@JSONObject@Bedrock@@IEAAPEAVNode@23@XZ
    MCAPI class Bedrock::JSONObject::Node* toNode();

    // symbol: ?toNode@NodeBase@JSONObject@Bedrock@@IEBAPEBVNode@23@XZ
    MCAPI class Bedrock::JSONObject::Node const* toNode() const;

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

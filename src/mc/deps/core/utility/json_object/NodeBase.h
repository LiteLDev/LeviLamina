#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/JSONType.h"

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
    MCAPI class Bedrock::JSONObject::Document& getOwningDocument() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI NodeBase(class Bedrock::JSONObject::MemoryPage* owningPage, ::Bedrock::JSONObject::JSONType type);

    MCAPI class Bedrock::JSONObject::NodeBase const&
    _getBase(class Bedrock::JSONObject::NodeBase::Offset offset, uchar page) const;

    MCAPI void
    _setBase(class Bedrock::JSONObject::NodeBase& to, class Bedrock::JSONObject::NodeBase::Offset& offset, uchar& page);

    MCAPI void _swapCollectionMembership(class Bedrock::JSONObject::NodeBase& other);

    MCAPI class Bedrock::JSONObject::Node* toNode();

    MCAPI class Bedrock::JSONObject::Node const* toNode() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void list_set_next(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);

    MCAPI static void list_set_prev(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class DocumentOptions; }
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class ParseResult; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Document {
public:
    // prevent constructor by default
    Document& operator=(Document const&);
    Document(Document const&);
    Document();

public:
    // NOLINTBEGIN
    MCAPI explicit Document(class Bedrock::JSONObject::DocumentOptions const& options);

    MCAPI class Bedrock::JSONObject::ParseResult const& loadString(std::string_view str);

    MCAPI void reset();

    MCAPI class Bedrock::JSONObject::Node* setRoot(class Bedrock::JSONObject::ValueWrapper const& value);

    MCAPI ~Document();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void* _acquireNode(
        class Bedrock::Intrusive::list<
            class Bedrock::JSONObject::NodeBase,
            class Bedrock::JSONObject::NodeBase,
            class Bedrock::JSONObject::NodeBase>& freeList,
        uint64                                    size,
        uint64                                    alignment
    );

    MCAPI void* _acquireStringBuffer(uint64 length, uint64& outCapacity);

    MCAPI class Bedrock::JSONObject::NodeBase* _createNode(class Bedrock::JSONObject::ValueWrapper const& value);

    MCAPI void _initialize();

    MCAPI void _releaseNode(class Bedrock::JSONObject::NodeBase& node);

    MCAPI void _releaseStringBuffer(class Bedrock::JSONObject::StringNode& node);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Bedrock::JSONObject::DocumentOptions const& options);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

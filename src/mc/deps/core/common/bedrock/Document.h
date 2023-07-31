#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/list.h"

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
    Document& operator=(Document const&) = delete;
    Document(Document const&)            = delete;
    Document()                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Document\@JSONObject\@Bedrock\@\@QEAA\@AEBVDocumentOptions\@12\@\@Z
     */
    MCAPI Document(class Bedrock::JSONObject::DocumentOptions const&);
    /**
     * @symbol
     * ?loadString\@Document\@JSONObject\@Bedrock\@\@QEAAAEBVParseResult\@23\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Bedrock::JSONObject::ParseResult const& loadString(std::string_view);
    /**
     * @symbol ?reset\@Document\@JSONObject\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol ?setRoot\@Document\@JSONObject\@Bedrock\@\@QEAAPEAVNode\@23\@AEBVValueWrapper\@23\@\@Z
     */
    MCAPI class Bedrock::JSONObject::Node* setRoot(class Bedrock::JSONObject::ValueWrapper const&);
    /**
     * @symbol ??1Document\@JSONObject\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~Document();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_acquireNode\@Document\@JSONObject\@Bedrock\@\@AEAAPEAXAEAV?$list\@VNodeBase\@JSONObject\@Bedrock\@\@V123\@V123\@\@Intrusive\@3\@_K1\@Z
     */
    MCAPI void* _acquireNode(
        class Bedrock::Intrusive::list<
            class Bedrock::JSONObject::NodeBase,
            class Bedrock::JSONObject::NodeBase,
            class Bedrock::JSONObject::NodeBase>&,
        uint64_t,
        uint64_t
    );
    /**
     * @symbol ?_createNode\@Document\@JSONObject\@Bedrock\@\@AEAAPEAVNodeBase\@23\@AEBVValueWrapper\@23\@\@Z
     */
    MCAPI class Bedrock::JSONObject::NodeBase* _createNode(class Bedrock::JSONObject::ValueWrapper const&);
    /**
     * @symbol ?_initialize\@Document\@JSONObject\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @symbol ?_releaseNode\@Document\@JSONObject\@Bedrock\@\@AEAAXAEAVNodeBase\@23\@\@Z
     */
    MCAPI void _releaseNode(class Bedrock::JSONObject::NodeBase&);
    /**
     * @symbol ?_releaseStringBuffer\@Document\@JSONObject\@Bedrock\@\@AEAAXAEAVStringNode\@23\@\@Z
     */
    MCAPI void _releaseStringBuffer(class Bedrock::JSONObject::StringNode&);
    // NOLINTEND
};

}; // namespace Bedrock::JSONObject

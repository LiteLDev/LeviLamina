#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class Node {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_NODE
public:
    Node& operator=(Node const&) = delete;
    Node(Node const&)            = delete;
    Node()                       = delete;
#endif

public:
    /**
     * @symbol ?asObject\@Node\@JSONObject\@Bedrock\@\@QEAAPEAVObjectNode\@23\@XZ
     */
    MCAPI class Bedrock::JSONObject::ObjectNode* asObject();
    /**
     * @symbol ??4Node\@JSONObject\@Bedrock\@\@QEAAPEAV012\@AEBVValueWrapper\@12\@\@Z
     */
    MCAPI class Bedrock::JSONObject::Node* operator=(class Bedrock::JSONObject::ValueWrapper const&);
    /**
     * @symbol
     * ?toJSONString\@Node\@JSONObject\@Bedrock\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toJSONString() const;
};

}; // namespace Bedrock::JSONObject

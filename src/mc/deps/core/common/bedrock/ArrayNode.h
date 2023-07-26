#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode {

public:
    // prevent constructor by default
    ArrayNode& operator=(ArrayNode const&) = delete;
    ArrayNode(ArrayNode const&)            = delete;
    ArrayNode()                            = delete;

public:
    /**
     * @symbol ?setContents\@ArrayNode\@JSONObject\@Bedrock\@\@QEAA_NAEBVValueWrapper\@23\@\@Z
     */
    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const&); // NOLINT
};

}; // namespace Bedrock::JSONObject

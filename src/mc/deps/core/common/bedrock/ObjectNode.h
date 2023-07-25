#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ObjectNode {
public:
    // ObjectNode inner types declare
    // clang-format off
    template<int T0> class iterator_base;
    // clang-format on

    // ObjectNode inner types define
    template <int T0>
    class iterator_base {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_OBJECTNODE_ITERATOR_BASE
    public:
        iterator_base& operator=(iterator_base const&) = delete;
        iterator_base(iterator_base const&)            = delete;
        iterator_base()                                = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_OBJECTNODE
public:
    ObjectNode& operator=(ObjectNode const&) = delete;
    ObjectNode(ObjectNode const&)            = delete;
    ObjectNode()                             = delete;
#endif

public:
    /**
     * @symbol ?clear\@ObjectNode\@JSONObject\@Bedrock\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol
     * ?insert\@ObjectNode\@JSONObject\@Bedrock\@\@QEAA?AV?$iterator_base\@$0A\@\@123\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@AEBVValueWrapper\@23\@_N\@Z
     */
    MCAPI class Bedrock::JSONObject::ObjectNode::iterator_base<0> insert(
        class std::basic_string_view<char, struct std::char_traits<char>>,
        class Bedrock::JSONObject::ValueWrapper const&,
        bool
    );
    /**
     * @symbol ?setContents\@ObjectNode\@JSONObject\@Bedrock\@\@QEAA_NAEBVValueWrapper\@23\@\@Z
     */
    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const&);
};

}; // namespace Bedrock::JSONObject

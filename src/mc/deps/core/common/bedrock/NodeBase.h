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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_NODEBASE_OFFSET
    public:
        Offset& operator=(Offset const&) = delete;
        Offset(Offset const&)            = delete;
        Offset()                         = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_JSONOBJECT_NODEBASE
public:
    NodeBase& operator=(NodeBase const&) = delete;
    NodeBase(NodeBase const&)            = delete;
    NodeBase()                           = delete;
#endif

public:
    // protected:
    /**
     * @symbol ?_getBase\@NodeBase\@JSONObject\@Bedrock\@\@IEBAAEBV123\@VOffset\@123\@E\@Z
     */
    MCAPI class Bedrock::JSONObject::NodeBase const&
    _getBase(class Bedrock::JSONObject::NodeBase::Offset, unsigned char) const;

    // private:
    /**
     * @symbol ?list_set_next\@NodeBase\@JSONObject\@Bedrock\@\@CAXAEAV123\@0\@Z
     */
    MCAPI static void list_set_next(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);
    /**
     * @symbol ?list_set_prev\@NodeBase\@JSONObject\@Bedrock\@\@CAXAEAV123\@0\@Z
     */
    MCAPI static void list_set_prev(class Bedrock::JSONObject::NodeBase&, class Bedrock::JSONObject::NodeBase&);

protected:
private:
};

}; // namespace Bedrock::JSONObject

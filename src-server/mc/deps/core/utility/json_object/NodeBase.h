#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/list_standard_operations.h"

namespace Bedrock::JSONObject {

class NodeBase : public ::Bedrock::Intrusive::
                     list_standard_operations<::Bedrock::JSONObject::NodeBase, ::Bedrock::JSONObject::NodeBase> {
public:
    // NodeBase inner types declare
    // clang-format off
    class Offset;
    // clang-format on

    // NodeBase inner types define
    class Offset {
    public:
        // member variables
        // NOLINTBEGIN
        union {
            ::ll::UntypedStorage<2, 2> mUnkd0ad5a;
            ::ll::UntypedStorage<2, 2> mUnk5228a0;
        };
        // NOLINTEND

    public:
        // prevent constructor by default
        Offset& operator=(Offset const&);
        Offset(Offset const&);
        Offset();
    };

public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<2, 2> mUnke7d0a5;
            ::ll::UntypedStorage<2, 2> mUnkab13d6;
            ::ll::UntypedStorage<2, 2> mUnk78a983;
            ::ll::UntypedStorage<1, 1> mUnk58fbd6;
            ::ll::UntypedStorage<1, 1> mUnkfe6bdf;
        };
        ::ll::UntypedStorage<8, 8> mUnk58ae72;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    NodeBase& operator=(NodeBase const&);
    NodeBase(NodeBase const&);
    NodeBase();
};

} // namespace Bedrock::JSONObject

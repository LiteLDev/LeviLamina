#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Node.h"

namespace Bedrock::JSONObject {

class NumberNode : public ::Bedrock::JSONObject::Node {
public:
    // NumberNode inner types declare
    // clang-format off
    struct InternalFormat;
    // clang-format on
    
    // NumberNode inner types define
    struct InternalFormat {
    public:
        // member variables
        // NOLINTBEGIN
        union {
            ::ll::UntypedStorage<8, 8> mUnkb620ea;
            ::ll::UntypedStorage<8, 8> mUnk233717;
        };
        ::ll::UntypedStorage<1, 1> mUnk5b8be2;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InternalFormat& operator=(InternalFormat const&);
        InternalFormat(InternalFormat const&);
        InternalFormat();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::UntypedStorage<8, 8> mUnkffbb2c;
        ::ll::UntypedStorage<8, 8> mUnk91d366;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    NumberNode& operator=(NumberNode const&);
    NumberNode(NumberNode const&);
    NumberNode();

};

}

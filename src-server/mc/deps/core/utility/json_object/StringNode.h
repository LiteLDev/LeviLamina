#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Node.h"

namespace Bedrock::JSONObject {

class StringNode : public ::Bedrock::JSONObject::Node {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnk8c1446;
            ::ll::UntypedStorage<4, 4> mUnk383b08;
            union {
                ::ll::UntypedStorage<8, 8> mUnk45b062;
                ::ll::UntypedStorage<8, 8> mUnkd4ba40;
            };
        };
        ::ll::UntypedStorage<1, 16> mUnkac85df;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    StringNode& operator=(StringNode const&);
    StringNode(StringNode const&);
    StringNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool set(::std::string_view str, bool copy);
    // NOLINTEND

};

}

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Node {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf1b47c;
    ::ll::UntypedStorage<8, 24> mUnk5dc7e3;
    ::ll::UntypedStorage<8, 24> mUnkb913b4;
    ::ll::UntypedStorage<8, 32> mUnkeae9d7;
    ::ll::UntypedStorage<8, 32> mUnk7e0f68;
    ::ll::UntypedStorage<4, 68> mUnk776974;
    ::ll::UntypedStorage<4, 8>  mUnkde6d3b;
    ::ll::UntypedStorage<4, 20> mUnk3cd2aa;
    ::ll::UntypedStorage<4, 16> mUnk8f1fe9;
    ::ll::UntypedStorage<4, 16> mUnk8ab524;
    ::ll::UntypedStorage<8, 32> mUnkce8a44;
    ::ll::UntypedStorage<4, 4>  mUnk2a10b3;
    // NOLINTEND

public:
    // prevent constructor by default
    Node& operator=(Node const&);
    Node(Node const&);
    Node();
};

} // namespace glTF

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

namespace Bedrock::Services {

class URLPathSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7e5582;
    // NOLINTEND

public:
    // prevent constructor by default
    URLPathSaver& operator=(URLPathSaver const&);
    URLPathSaver(URLPathSaver const&);
    URLPathSaver();
};

} // namespace Bedrock::Services

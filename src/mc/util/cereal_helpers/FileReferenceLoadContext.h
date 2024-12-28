#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BedrockLoadContext.h"

namespace CerealHelpers {

class FileReferenceLoadContext : public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk11b269;
    ::ll::UntypedStorage<8, 8> mUnk584667;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoadContext& operator=(FileReferenceLoadContext const&);
    FileReferenceLoadContext(FileReferenceLoadContext const&);
    FileReferenceLoadContext();
};

} // namespace CerealHelpers

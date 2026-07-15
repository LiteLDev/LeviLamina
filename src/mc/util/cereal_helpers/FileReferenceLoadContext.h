#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/BedrockLoadContext.h"

namespace CerealHelpers {

class FileReferenceLoadContext : public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6e26f3;
    ::ll::UntypedStorage<8, 8>  mUnkf1bca8;
    // NOLINTEND

public:
    // prevent constructor by default
    FileReferenceLoadContext& operator=(FileReferenceLoadContext const&);
    FileReferenceLoadContext(FileReferenceLoadContext const&);
    FileReferenceLoadContext();
};

} // namespace CerealHelpers

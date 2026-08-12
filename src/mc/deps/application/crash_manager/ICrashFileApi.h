#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

namespace Bedrock {

class ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICrashFileApi() = default;

    virtual ::std::string_view getSaveRoot() const = 0;

    virtual ::Bedrock::Result<void> createDirectory(char const* path) = 0;

    virtual ::Bedrock::Result<void> writeFile(char const* path, char const* buffer, uint64 bufferSize) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock

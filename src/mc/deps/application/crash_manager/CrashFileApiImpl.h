#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/ICrashFileApi.h"
#include "mc/platform/Result.h"

namespace Bedrock {

class CrashFileApiImpl : public ::Bedrock::ICrashFileApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getSaveRoot() const /*override*/;

    virtual ::Bedrock::Result<void> createDirectory(char const*) /*override*/;

    virtual ::Bedrock::Result<void> writeFile(char const*, char const*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock

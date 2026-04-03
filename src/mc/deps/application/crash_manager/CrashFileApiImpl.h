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

    virtual ::Bedrock::Result<void> createDirectory(char const* path) /*override*/;

    virtual ::Bedrock::Result<void> writeFile(char const* path, char const* buffer, uint64 bufferSize) /*override*/;

    virtual ~CrashFileApiImpl() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string_view $getSaveRoot() const;

    MCNAPI ::Bedrock::Result<void> $createDirectory(char const* path);

    MCNAPI ::Bedrock::Result<void> $writeFile(char const* path, char const* buffer, uint64 bufferSize);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock

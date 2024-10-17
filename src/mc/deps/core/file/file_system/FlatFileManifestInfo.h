#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
// clang-format on

namespace Core {

class FlatFileManifestInfo {
public:
    // prevent constructor by default
    FlatFileManifestInfo& operator=(FlatFileManifestInfo const&);
    FlatFileManifestInfo(FlatFileManifestInfo const&);
    FlatFileManifestInfo();

public:
    // NOLINTBEGIN
    MCAPI class Bedrock::Result<void> readFromStream(class ReadOnlyBinaryStream& manifestFileStream);

    MCAPI ~FlatFileManifestInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core

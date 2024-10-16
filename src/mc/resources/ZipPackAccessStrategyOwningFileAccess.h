#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"
#include "mc/resources/ZipPackAccessStrategy.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategyOwningFileAccess : public ::ZipPackAccessStrategy {
public:
    // prevent constructor by default
    ZipPackAccessStrategyOwningFileAccess& operator=(ZipPackAccessStrategyOwningFileAccess const&);
    ZipPackAccessStrategyOwningFileAccess(ZipPackAccessStrategyOwningFileAccess const&);
    ZipPackAccessStrategyOwningFileAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ZipPackAccessStrategyOwningFileAccess() = default;

    MCAPI ZipPackAccessStrategyOwningFileAccess(
        std::shared_ptr<class IFileAccess> fileAccess,
        class ResourceLocation const&      path,
        class Core::Path const&            subPath
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::shared_ptr<class IFileAccess> fileAccess,
        class ResourceLocation const&      path,
        class Core::Path const&            subPath
    );

    // NOLINTEND
};

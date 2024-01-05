#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/PackAccessAssetGenerationResult.h"
#include "mc/deps/core/PathBuffer.h"
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
    // vIndex: 0, symbol: __gen_??1ZipPackAccessStrategyOwningFileAccess@@UEAA@XZ
    virtual ~ZipPackAccessStrategyOwningFileAccess() = default;

    // symbol:
    // ??0ZipPackAccessStrategyOwningFileAccess@@QEAA@V?$shared_ptr@VIFileAccess@@@std@@AEBVResourceLocation@@AEBVPath@Core@@@Z
    MCAPI ZipPackAccessStrategyOwningFileAccess(
        std::shared_ptr<class IFileAccess> fileAccess,
        class ResourceLocation const&      path,
        class Core::Path const&            subPath
    );

    // NOLINTEND
};

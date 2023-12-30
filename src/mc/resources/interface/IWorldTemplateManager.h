#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace mce { class UUID; }
// clang-format on

class IWorldTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    IWorldTemplateManager& operator=(IWorldTemplateManager const&);
    IWorldTemplateManager(IWorldTemplateManager const&);
    IWorldTemplateManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IWorldTemplateManager@@UEAA@XZ
    virtual ~IWorldTemplateManager();

    // vIndex: 1, symbol:
    // ?findInstalledWorldTemplateByUUID@WorldTemplateManager@@UEBAPEBUWorldTemplateInfo@@AEBV?$vector@VUUID@mce@@V?$allocator@VUUID@mce@@@std@@@std@@@Z
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const& packUUIDs) const = 0;

    // NOLINTEND
};

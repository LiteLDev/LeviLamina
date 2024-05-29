#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Bedrock::PubSub { class Subscription; }
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

    // vIndex: 2, symbol:
    // ?registerModifiedCallback@WorldTemplateManager@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXXZ@std@@@Z
    virtual class Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void()>) = 0;

    // vIndex: 3, symbol:
    // ?getLocalTemplates@WorldTemplateManager@@UEBAAEBV?$vector@V?$unique_ptr@UWorldTemplateInfo@@U?$default_delete@UWorldTemplateInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@UWorldTemplateInfo@@U?$default_delete@UWorldTemplateInfo@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<struct WorldTemplateInfo>> const& getLocalTemplates() const = 0;

    // NOLINTEND
};

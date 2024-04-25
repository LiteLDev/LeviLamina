#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/interface/IWorldTemplateManager.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class FilePathManager; }
namespace mce { class UUID; }
// clang-format on

class WorldTemplateManager : public ::IWorldTemplateManager {
public:
    // prevent constructor by default
    WorldTemplateManager& operator=(WorldTemplateManager const&);
    WorldTemplateManager(WorldTemplateManager const&);
    WorldTemplateManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1WorldTemplateManager@@UEAA@XZ
    virtual ~WorldTemplateManager();

    // vIndex: 1, symbol:
    // ?findInstalledWorldTemplateByUUID@WorldTemplateManager@@UEBAPEBUWorldTemplateInfo@@AEBV?$vector@VUUID@mce@@V?$allocator@VUUID@mce@@@std@@@std@@@Z
    virtual struct WorldTemplateInfo const*
    findInstalledWorldTemplateByUUID(std::vector<class mce::UUID> const& packUUIDs) const;

    // vIndex: 2, symbol:
    // ?registerModifiedCallback@WorldTemplateManager@@UEAA?AVSubscription@PubSub@Bedrock@@V?$function@$$A6AXXZ@std@@@Z
    virtual class Bedrock::PubSub::Subscription registerModifiedCallback(std::function<void()>);

    // vIndex: 3, symbol:
    // ?getLocalTemplates@WorldTemplateManager@@UEBAAEBV?$vector@V?$unique_ptr@UWorldTemplateInfo@@U?$default_delete@UWorldTemplateInfo@@@std@@@std@@V?$allocator@V?$unique_ptr@UWorldTemplateInfo@@U?$default_delete@UWorldTemplateInfo@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<struct WorldTemplateInfo>> const& getLocalTemplates() const;

    // symbol:
    // ??0WorldTemplateManager@@QEAA@AEAVPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@AEAVPackSourceFactory@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@3@_N@Z
    MCAPI WorldTemplateManager(
        class PackManifestFactory&                                          packManifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        class PackSourceFactory&                                            packSourceFactory,
        Bedrock::NotNullNonOwnerPtr<class Core::FilePathManager> const&     filePathManager,
        bool                                                                initAsync
    );

    // symbol: ?findInstalledWorldTemplate@WorldTemplateManager@@QEBAPEBUWorldTemplateInfo@@AEBUPackIdVersion@@@Z
    MCAPI struct WorldTemplateInfo const* findInstalledWorldTemplate(struct PackIdVersion const& packIdentityToFind
    ) const;

    // symbol:
    // ?getWorldTemplatesPath@WorldTemplateManager@@QEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> getWorldTemplatesPath() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initialize@WorldTemplateManager@@AEAAXXZ
    MCAPI void _initialize();

    // symbol: ?_initializePackSources@WorldTemplateManager@@AEAAXXZ
    MCAPI void _initializePackSources();

    // symbol: ?_onDiscoverWorldTemplate@WorldTemplateManager@@AEAAXAEBVPack@@@Z
    MCAPI void _onDiscoverWorldTemplate(class Pack const& pack);

    // NOLINTEND
};

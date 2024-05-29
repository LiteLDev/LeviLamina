#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/resource/ResourceLoader.h"
#include "mc/resources/ResourcePackStackType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class ResourcePackManager : public ::ResourceLoader {
public:
    // prevent constructor by default
    ResourcePackManager& operator=(ResourcePackManager const&);
    ResourcePackManager(ResourcePackManager const&);
    ResourcePackManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ResourcePackManager@@UEAA@XZ
    virtual ~ResourcePackManager();

    // vIndex: 1, symbol:
    // ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool load(class ResourceLocation const& resourceLocation, std::string& resourceStream) const;

    // vIndex: 2, symbol:
    // ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual bool load(
        class ResourceLocation const&   resourceLocation,
        std::string&                    resourceStream,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 3, symbol:
    // ?load@ResourcePackManager@@UEBA_NAEBVResourceLocationPair@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    virtual bool load(
        class ResourceLocationPair const& resourceLocationPair,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensionList
    ) const;

    // vIndex: 4, symbol:
    // ?loadAllVersionsOf@ResourcePackManager@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 5, symbol: ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@@Z
    virtual bool isInStreamableLocation(class ResourceLocation const& resourceLocation) const;

    // vIndex: 6, symbol:
    // ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual bool isInStreamableLocation(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 7, symbol:
    // ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const&) const;

    // vIndex: 8, symbol:
    // ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensionList) const;

    // vIndex: 9, symbol:
    // ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const&) const;

    // vIndex: 10, symbol:
    // ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    virtual class Core::PathBuffer<std::string> getPathContainingResource(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensionList
    ) const;

    // vIndex: 11, symbol:
    // ?getPackStackIndexOfResource@ResourcePackManager@@UEBA?AU?$pair@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    virtual std::pair<int, std::string const&> getPackStackIndexOfResource(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 12, symbol:
    // ?hasCapability@ResourcePackManager@@UEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual bool hasCapability(std::string_view requiredCapability) const;

    // symbol:
    // ??0ResourcePackManager@@QEAA@V?$function@$$A6A?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ@std@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@gsl@@_N@Z
    MCAPI ResourcePackManager(
        std::function<class Core::PathBuffer<std::string>()>                getPath,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        bool                                                                needsToInitialize
    );

    // symbol: ?clearStack@ResourcePackManager@@QEAAXW4ResourcePackStackType@@_N@Z
    MCAPI void clearStack(::ResourcePackStackType stackType, bool composeStack);

    // symbol: ?composeFullStack@ResourcePackManager@@QEBAHAEAVResourcePackStack@@AEBV2@11@Z
    MCAPI int composeFullStack(
        class ResourcePackStack&       output,
        class ResourcePackStack const& globalStack,
        class ResourcePackStack const& levelStack,
        class ResourcePackStack const& addonStack
    ) const;

    // symbol: ?getFullStackMinEngineVersion@ResourcePackManager@@QEBA?AVSemVersion@@XZ
    MCAPI class SemVersion getFullStackMinEngineVersion() const;

    // symbol: ?getPackSourceReport@ResourcePackManager@@QEBAPEBVPackSourceReport@@XZ
    MCAPI class PackSourceReport const* getPackSourceReport() const;

    // symbol:
    // ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const& group) const;

    // symbol:
    // ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI std::vector<class Core::PathBuffer<std::string>>
          getResourcesOfGroup(class PackInstance const& packInstance, std::string const& group) const;

    // symbol: ?getStack@ResourcePackManager@@QEBAAEBVResourcePackStack@@W4ResourcePackStackType@@@Z
    MCAPI class ResourcePackStack const& getStack(::ResourcePackStackType stackType) const;

    // symbol: ?handlePendingStackChanges@ResourcePackManager@@QEAAXXZ
    MCAPI void handlePendingStackChanges();

    // symbol: ?hasResource@ResourcePackManager@@QEBA_NAEBVResourceLocation@@@Z
    MCAPI bool hasResource(class ResourceLocation const& resourceLocation) const;

    // symbol: ?isOnlyBaseGamePacks@ResourcePackManager@@QEBA_NXZ
    MCAPI bool isOnlyBaseGamePacks() const;

    // symbol: ?iteratePacks@ResourcePackManager@@QEBAXAEBV?$function@$$A6AXAEBVPackInstance@@@Z@std@@@Z
    MCAPI void iteratePacks(std::function<void(class PackInstance const&)> const& pred) const;

    // symbol: ?registerResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
    MCAPI void registerResourcePackListener(class ResourcePackListener& listener);

    // symbol: ?removeIf@ResourcePackManager@@QEAAXAEBV?$function@$$A6A_NAEBVPackInstance@@@Z@std@@@Z
    MCAPI void removeIf(std::function<bool(class PackInstance const&)> const& pred);

    // symbol: ?setPackSourceReport@ResourcePackManager@@QEAAX$$QEAVPackSourceReport@@@Z
    MCAPI void setPackSourceReport(class PackSourceReport&& report);

    // symbol:
    // ?setStack@ResourcePackManager@@QEAA_NV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@W4ResourcePackStackType@@_N@Z
    MCAPI bool
    setStack(std::unique_ptr<class ResourcePackStack> stack, ::ResourcePackStackType stackType, bool composeStack);

    // symbol: ?unRegisterResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener& listener);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateMinEngineVersionFromFullStack@ResourcePackManager@@AEAAXXZ
    MCAPI void _calculateMinEngineVersionFromFullStack();

    // symbol: ?_composeFullStack@ResourcePackManager@@AEAAXXZ
    MCAPI void _composeFullStack();

    // symbol: ?_getPackForResource@ResourcePackManager@@AEBAPEAVPackInstance@@AEBVPath@Core@@@Z
    MCAPI class PackInstance* _getPackForResource(class Core::Path const& resourceName) const;

    // symbol:
    // ?_getResourcesOfGroup@ResourcePackManager@@AEBAXAEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@4@@Z
    MCAPI void _getResourcesOfGroup(
        class PackInstance const&                         packInstance,
        std::string const&                                group,
        std::vector<class Core::PathBuffer<std::string>>& resources
    ) const;

    // symbol: ?_updateLanguageSubpacks@ResourcePackManager@@AEAAXXZ
    MCAPI void _updateLanguageSubpacks();

    // NOLINTEND
};

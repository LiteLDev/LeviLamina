#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {
    public:
        std::string featureName;      // this+0x0
        std::string binaryJsonOutput; // this+0x20

    public:
        // NOLINTBEGIN
        // symbol: ??1FeatureBinaryJsonFormat@FeatureRegistry@@QEAA@XZ
        MCAPI ~FeatureBinaryJsonFormat();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureRegistry& operator=(FeatureRegistry const&);
    FeatureRegistry(FeatureRegistry const&);

    std::vector<std::unique_ptr<IFeature>>                mFeatureRegistry;      // this+0x0
    std::vector<OwnerPtr<IFeature>>                       mFeatureSlots;         // this+0x18
    std::unordered_map<HashedString, uint64>              mFeatureLookupMap;     // this+0x30
    std::vector<FeatureRegistry::FeatureBinaryJsonFormat> mFeatureSerializeData; // this+0x70
    bool                                                  mClientInitialized;    // this+0x88
    std::vector<std::string>                              mLargeFeaturePasses;   // this+0x90
    std::vector<std::string>                              mSmallFeaturePasses;   // this+0xA8

    template <std::derived_from<IFeature> T, class... Args>
    T& registerFeature(std::string const& name, Args&&... args) {
        auto ptr = std::make_unique<T>(std::forward<Args>(args)...);
        auto res = *ptr;
        _registerFeature(name, std::move(ptr));
        return res;
    }

public:
    // NOLINTBEGIN
    // symbol: ??0FeatureRegistry@@QEAA@XZ
    MCAPI FeatureRegistry();

    // symbol:
    // ?forEachFeature@FeatureRegistry@@QEBAXV?$function@$$A6AXAEBVHashedString@@V?$WeakRef@VIFeature@@@@@Z@std@@@Z
    MCAPI void forEachFeature(std::function<void(class HashedString const&, class WeakRef<class IFeature>)> callback
    ) const;

    // symbol:
    // ?getLargeFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;

    // symbol:
    // ?getSmallFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;

    // symbol:
    // ?isFeaturePassDefined@FeatureRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isFeaturePassDefined(std::string const&) const;

    // symbol: ?loadFromDefinitions@FeatureRegistry@@QEAAXAEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@_N@Z
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider&, class ResourcePackManager const&, bool);

    // symbol:
    // ?lookupByName@FeatureRegistry@@QEBA?AV?$WeakRef@VIFeature@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class WeakRef<class IFeature> lookupByName(std::string const& name) const;

    // symbol:
    // ?lookupOrReserveFeature@FeatureRegistry@@QEAA?AV?$WeakRef@VIFeature@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class WeakRef<class IFeature> lookupOrReserveFeature(std::string const& name);

    // symbol:
    // ?reserveFeature@FeatureRegistry@@QEAA?AV?$WeakRef@VIFeature@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class WeakRef<class IFeature> reserveFeature(std::string const& name);

    // symbol:
    // ?reverseLookupString@FeatureRegistry@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVIFeature@@@Z
    MCAPI std::string const& reverseLookupString(class IFeature const&) const;

    // symbol:
    // ?setLargeFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);

    // symbol:
    // ?setSmallFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);

    // symbol: ?AFTER_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const AFTER_SKY_PASS;

    // symbol: ?AFTER_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const AFTER_SURFACE_PASS;

    // symbol: ?AFTER_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;

    // symbol: ?BEFORE_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BEFORE_SKY_PASS;

    // symbol: ?BEFORE_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BEFORE_SURFACE_PASS;

    // symbol:
    // ?BEFORE_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;

    // symbol: ?FINAL_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const FINAL_PASS;

    // symbol: ?FIRST_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const FIRST_PASS;

    // symbol: ?PREGENERATION_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const PREGENERATION_PASS;

    // symbol: ?SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SKY_PASS;

    // symbol: ?SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const SURFACE_PASS;

    // symbol: ?UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const UNDERGROUND_PASS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_featureNamespaceFromInput@FeatureRegistry@@AEAA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    MCAPI std::string const _featureNamespaceFromInput(std::string const& filePath, std::string const& contents);

    // symbol:
    // ?_registerFeature@FeatureRegistry@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIFeature@@U?$default_delete@VIFeature@@@std@@@3@@Z
    MCAPI void _registerFeature(std::string const& name, std::unique_ptr<class IFeature> featurePtr);

    // symbol:
    // ?_setupFeature@FeatureRegistry@@AEAA_NAEAVIWorldRegistriesProvider@@_NAEBVResourcePackManager@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3AEBVSemVersion@@1@Z
    MCAPI bool _setupFeature(
        class IWorldRegistriesProvider&,
        bool,
        class ResourcePackManager const&,
        std::string const&,
        std::string const&,
        class SemVersion const&,
        bool
    );

    // NOLINTEND
};

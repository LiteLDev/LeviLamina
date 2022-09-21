/**
 * @file  MC/FeatureRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureRegistry.
 *
 */
class FeatureRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct FeatureBinaryJsonFormat;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    class FeatureRegistry& operator=(class FeatureRegistry const &) = delete;
    FeatureRegistry(class FeatureRegistry const &) = delete;
#endif

public:
    /**
     * @hash   81808751
     * @symbol ??0FeatureRegistry@@QEAA@XZ
     */
    MCAPI FeatureRegistry();
    /**
     * @hash   -1754549438
     * @symbol ?forEachFeature@FeatureRegistry@@QEBAXV?$function@$$A6AXAEBVHashedString@@V?$WeakRefT@UFeatureRefTraits@@@@@Z@std@@@Z
     */
    MCAPI void forEachFeature(class std::function<void (class HashedString const &, class WeakRefT<struct FeatureRefTraits>)>) const;
    /**
     * @hash   1674278255
     * @symbol ?getLargeFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    /**
     * @hash   1169331487
     * @symbol ?getSmallFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    /**
     * @hash   -1551626267
     * @symbol ?isFeaturePassDefined@FeatureRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isFeaturePassDefined(std::string const &) const;
    /**
     * @hash   -191273363
     * @symbol ?loadFromDefinitions@FeatureRegistry@@QEAAXAEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBVExperiments@@_N@Z
     */
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &, bool);
    /**
     * @hash   1230201970
     * @symbol ?lookupByName@FeatureRegistry@@QEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    /**
     * @hash   -261565012
     * @symbol ?lookupOrReserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    /**
     * @hash   -750989130
     * @symbol ?reserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    /**
     * @hash   -1223234515
     * @symbol ?reverseLookupString@FeatureRegistry@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVIFeature@@@Z
     */
    MCAPI std::string const & reverseLookupString(class IFeature const &);
    /**
     * @hash   80588845
     * @symbol ?setLargeFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    /**
     * @hash   1829007917
     * @symbol ?setSmallFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
    /**
     * @hash   -2005827177
     * @symbol ?AFTER_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const AFTER_SKY_PASS;
    /**
     * @hash   -370537929
     * @symbol ?AFTER_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const AFTER_SURFACE_PASS;
    /**
     * @hash   1024236439
     * @symbol ?AFTER_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;
    /**
     * @hash   245053589
     * @symbol ?BEFORE_SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BEFORE_SKY_PASS;
    /**
     * @hash   2144465461
     * @symbol ?BEFORE_SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BEFORE_SURFACE_PASS;
    /**
     * @hash   -2043530091
     * @symbol ?BEFORE_UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
    /**
     * @hash   -1342395081
     * @symbol ?FINAL_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const FINAL_PASS;
    /**
     * @hash   955670327
     * @symbol ?FIRST_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const FIRST_PASS;
    /**
     * @hash   -383635081
     * @symbol ?PREGENERATION_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PREGENERATION_PASS;
    /**
     * @hash   1209292951
     * @symbol ?SKY_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SKY_PASS;
    /**
     * @hash   2064666935
     * @symbol ?SURFACE_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SURFACE_PASS;
    /**
     * @hash   1350455959
     * @symbol ?UNDERGROUND_PASS@FeatureRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const UNDERGROUND_PASS;

//private:
    /**
     * @hash   -850602690
     * @symbol ?_featureNamespaceFromInput@FeatureRegistry@@AEAA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const &, std::string const &);
    /**
     * @hash   1341531862
     * @symbol ?_registerFeature@FeatureRegistry@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIFeature@@U?$default_delete@VIFeature@@@std@@@3@@Z
     */
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    /**
     * @hash   1456913427
     * @symbol ?_setupFeature@FeatureRegistry@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBV23@2AEBVSemVersion@@@Z
     */
    MCAPI std::string _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &, class SemVersion const &);

private:

};
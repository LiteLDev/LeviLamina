/**
 * @file  FeatureRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   865815615
     * @symbol  ??0FeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI FeatureRegistry();
    /**
     * @hash   -954367022
     * @symbol  ?forEachFeature\@FeatureRegistry\@\@QEBAXV?$function\@$$A6AXAEBVHashedString\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachFeature(class std::function<void (class HashedString const &, class WeakRefT<struct FeatureRefTraits>)>) const;
    /**
     * @hash   -1820491249
     * @symbol  ?getLargeFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    /**
     * @hash   1969529279
     * @symbol  ?getSmallFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    /**
     * @hash   -751428475
     * @symbol  ?isFeaturePassDefined\@FeatureRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isFeaturePassDefined(std::string const &) const;
    /**
     * @hash   608924429
     * @symbol  ?loadFromDefinitions\@FeatureRegistry\@\@QEAAXAEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBVExperiments\@\@_N\@Z
     */
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &, bool);
    /**
     * @hash   2030046114
     * @symbol  ?lookupByName\@FeatureRegistry\@\@QEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    /**
     * @hash   538279132
     * @symbol  ?lookupOrReserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    /**
     * @hash   48855014
     * @symbol  ?reserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    /**
     * @hash   -423390371
     * @symbol  ?reverseLookupString\@FeatureRegistry\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVIFeature\@\@\@Z
     */
    MCAPI std::string const & reverseLookupString(class IFeature const &);
    /**
     * @hash   880432989
     * @symbol  ?setLargeFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    /**
     * @hash   -1666115235
     * @symbol  ?setSmallFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
    /**
     * @hash   -383559233
     * @symbol  ?AFTER_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SKY_PASS;
    /**
     * @hash   1251730015
     * @symbol  ?AFTER_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SURFACE_PASS;
    /**
     * @hash   -1648462913
     * @symbol  ?AFTER_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;
    /**
     * @hash   1867321533
     * @symbol  ?BEFORE_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SKY_PASS;
    /**
     * @hash   -528233891
     * @symbol  ?BEFORE_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SURFACE_PASS;
    /**
     * @hash   -421262147
     * @symbol  ?BEFORE_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
    /**
     * @hash   279872863
     * @symbol  ?FINAL_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FINAL_PASS;
    /**
     * @hash   -1717029025
     * @symbol  ?FIRST_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FIRST_PASS;
    /**
     * @hash   1238632863
     * @symbol  ?PREGENERATION_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PREGENERATION_PASS;
    /**
     * @hash   -1463406401
     * @symbol  ?SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SKY_PASS;
    /**
     * @hash   -608032417
     * @symbol  ?SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SURFACE_PASS;
    /**
     * @hash   -1322243393
     * @symbol  ?UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UNDERGROUND_PASS;

//private:
    /**
     * @hash   -50389522
     * @symbol  ?_featureNamespaceFromInput\@FeatureRegistry\@\@AEAA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const &, std::string const &);
    /**
     * @hash   2141698902
     * @symbol  ?_registerFeature\@FeatureRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIFeature\@\@U?$default_delete\@VIFeature\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    /**
     * @hash   -2037871453
     * @symbol  ?_setupFeature\@FeatureRegistry\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBV23\@2AEBVSemVersion\@\@\@Z
     */
    MCAPI std::string _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &, class SemVersion const &);

private:

};
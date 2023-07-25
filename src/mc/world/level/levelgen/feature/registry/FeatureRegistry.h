#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

class FeatureRegistry {
public:
    // FeatureRegistry inner types declare
    // clang-format off
    struct FeatureBinaryJsonFormat;
    // clang-format on

    // FeatureRegistry inner types define
    struct FeatureBinaryJsonFormat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY_FEATUREBINARYJSONFORMAT
    public:
        FeatureBinaryJsonFormat& operator=(FeatureBinaryJsonFormat const&) = delete;
        FeatureBinaryJsonFormat(FeatureBinaryJsonFormat const&)            = delete;
        FeatureBinaryJsonFormat()                                          = delete;
#endif

    public:
        /**
         * @symbol ??1FeatureBinaryJsonFormat\@FeatureRegistry\@\@QEAA\@XZ
         */
        MCAPI ~FeatureBinaryJsonFormat();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    FeatureRegistry& operator=(FeatureRegistry const&) = delete;
    FeatureRegistry(FeatureRegistry const&)            = delete;
#endif

public:
    /**
     * @symbol ??0FeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI FeatureRegistry();
    /**
     * @symbol
     * ?forEachFeature\@FeatureRegistry\@\@QEBAXV?$function\@$$A6AXAEBVHashedString\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
        forEachFeature(class std::function<void(class HashedString const&, class WeakRefT<struct FeatureRefTraits>)>)
            const;
    /**
     * @symbol
     * ?getLargeFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    /**
     * @symbol
     * ?getSmallFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    /**
     * @symbol
     * ?isFeaturePassDefined\@FeatureRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isFeaturePassDefined(std::string const&) const;
    /**
     * @symbol
     * ?loadFromDefinitions\@FeatureRegistry\@\@QEAAXAEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBVExperiments\@\@_N\@Z
     */
    MCAPI void loadFromDefinitions(
        class IWorldRegistriesProvider&,
        class ResourcePackManager const&,
        class Experiments const&,
        bool
    );
    /**
     * @symbol
     * ?lookupByName\@FeatureRegistry\@\@QEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const&) const;
    /**
     * @symbol
     * ?lookupOrReserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const&);
    /**
     * @symbol
     * ?reserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const&);
    /**
     * @symbol
     * ?reverseLookupString\@FeatureRegistry\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVIFeature\@\@\@Z
     */
    MCAPI std::string const& reverseLookupString(class IFeature const&);
    /**
     * @symbol
     * ?setLargeFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    /**
     * @symbol
     * ?setSmallFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
    /**
     * @symbol
     * ?AFTER_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SKY_PASS;
    /**
     * @symbol
     * ?AFTER_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SURFACE_PASS;
    /**
     * @symbol
     * ?AFTER_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_UNDERGROUND_PASS;
    /**
     * @symbol
     * ?BEFORE_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SKY_PASS;
    /**
     * @symbol
     * ?BEFORE_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SURFACE_PASS;
    /**
     * @symbol
     * ?BEFORE_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
    /**
     * @symbol
     * ?FINAL_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FINAL_PASS;
    /**
     * @symbol
     * ?FIRST_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FIRST_PASS;
    /**
     * @symbol
     * ?PREGENERATION_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PREGENERATION_PASS;
    /**
     * @symbol ?SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SKY_PASS;
    /**
     * @symbol
     * ?SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SURFACE_PASS;
    /**
     * @symbol
     * ?UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UNDERGROUND_PASS;

    // private:
    /**
     * @symbol
     * ?_featureNamespaceFromInput\@FeatureRegistry\@\@AEAA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const&, std::string const&);
    /**
     * @symbol
     * ?_registerFeature\@FeatureRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIFeature\@\@U?$default_delete\@VIFeature\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void _registerFeature(std::string const&, std::unique_ptr<class IFeature>);
    /**
     * @symbol
     * ?_setupFeature\@FeatureRegistry\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBV23\@2AEBVSemVersion\@\@\@Z
     */
    MCAPI std::string
    _setupFeature(class IWorldRegistriesProvider&, class ResourcePackManager const&, std::string const&, std::string const&, class SemVersion const&);

private:
};

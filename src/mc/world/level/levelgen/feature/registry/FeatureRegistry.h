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

    public:
        // prevent constructor by default
        FeatureBinaryJsonFormat& operator=(FeatureBinaryJsonFormat const&) = delete;
        FeatureBinaryJsonFormat(FeatureBinaryJsonFormat const&)            = delete;
        FeatureBinaryJsonFormat()                                          = delete;

    public:
        /**
         * @symbol ??1FeatureBinaryJsonFormat\@FeatureRegistry\@\@QEAA\@XZ
         */
        MCAPI ~FeatureBinaryJsonFormat(); // NOLINT
    };

public:
    // prevent constructor by default
    FeatureRegistry& operator=(FeatureRegistry const&) = delete;
    FeatureRegistry(FeatureRegistry const&)            = delete;

public:
    /**
     * @symbol ??0FeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI FeatureRegistry(); // NOLINT
    /**
     * @symbol
     * ?forEachFeature\@FeatureRegistry\@\@QEBAXV?$function\@$$A6AXAEBVHashedString\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
        forEachFeature(class std::function<void(class HashedString const&, class WeakRefT<struct FeatureRefTraits>)>)
            const; // NOLINT
    /**
     * @symbol
     * ?getLargeFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const; // NOLINT
    /**
     * @symbol
     * ?getSmallFeaturePasses\@FeatureRegistry\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const; // NOLINT
    /**
     * @symbol
     * ?isFeaturePassDefined\@FeatureRegistry\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isFeaturePassDefined(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?loadFromDefinitions\@FeatureRegistry\@\@QEAAXAEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBVExperiments\@\@_N\@Z
     */
    MCAPI void loadFromDefinitions(
        class IWorldRegistriesProvider&,
        class ResourcePackManager const&,
        class Experiments const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?lookupByName\@FeatureRegistry\@\@QEBA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?lookupOrReserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const&); // NOLINT
    /**
     * @symbol
     * ?reserveFeature\@FeatureRegistry\@\@QEAA?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const&); // NOLINT
    /**
     * @symbol
     * ?reverseLookupString\@FeatureRegistry\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVIFeature\@\@\@Z
     */
    MCAPI std::string const& reverseLookupString(class IFeature const&); // NOLINT
    /**
     * @symbol
     * ?setLargeFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?setSmallFeaturePasses\@FeatureRegistry\@\@QEAAXV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>); // NOLINT
    /**
     * @symbol
     * ?AFTER_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SKY_PASS; // NOLINT
    /**
     * @symbol
     * ?AFTER_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_SURFACE_PASS; // NOLINT
    /**
     * @symbol
     * ?AFTER_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AFTER_UNDERGROUND_PASS; // NOLINT
    /**
     * @symbol
     * ?BEFORE_SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SKY_PASS; // NOLINT
    /**
     * @symbol
     * ?BEFORE_SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_SURFACE_PASS; // NOLINT
    /**
     * @symbol
     * ?BEFORE_UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BEFORE_UNDERGROUND_PASS; // NOLINT
    /**
     * @symbol
     * ?FINAL_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FINAL_PASS; // NOLINT
    /**
     * @symbol
     * ?FIRST_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const FIRST_PASS; // NOLINT
    /**
     * @symbol
     * ?PREGENERATION_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PREGENERATION_PASS; // NOLINT
    /**
     * @symbol ?SKY_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SKY_PASS; // NOLINT
    /**
     * @symbol
     * ?SURFACE_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SURFACE_PASS; // NOLINT
    /**
     * @symbol
     * ?UNDERGROUND_PASS\@FeatureRegistry\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const UNDERGROUND_PASS; // NOLINT

    // private:
    /**
     * @symbol
     * ?_featureNamespaceFromInput\@FeatureRegistry\@\@AEAA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_registerFeature\@FeatureRegistry\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VIFeature\@\@U?$default_delete\@VIFeature\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void _registerFeature(std::string const&, std::unique_ptr<class IFeature>); // NOLINT
    /**
     * @symbol
     * ?_setupFeature\@FeatureRegistry\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVIWorldRegistriesProvider\@\@AEBVResourcePackManager\@\@AEBV23\@2AEBVSemVersion\@\@\@Z
     */
    MCAPI std::string
    _setupFeature(class IWorldRegistriesProvider&, class ResourcePackManager const&, std::string const&, std::string const&, class SemVersion const&); // NOLINT

private:
};

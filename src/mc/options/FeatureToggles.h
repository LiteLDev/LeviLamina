#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FeatureToggles {
public:
    // FeatureToggles inner types declare
    // clang-format off
    struct FeatureToggle;
    // clang-format on

    // FeatureToggles inner types define
    struct FeatureToggle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETOGGLES_FEATURETOGGLE
    public:
        FeatureToggle& operator=(FeatureToggle const&) = delete;
        FeatureToggle(FeatureToggle const&)            = delete;
        FeatureToggle()                                = delete;
#endif

    public:
        /**
         * @symbol ??0FeatureToggle\@FeatureToggles\@\@QEAA\@$$QEAU01\@\@Z
         */
        MCAPI FeatureToggle(struct FeatureToggles::FeatureToggle&&);
        /**
         * @symbol ??4FeatureToggle\@FeatureToggles\@\@QEAAAEAU01\@$$QEAU01\@\@Z
         */
        MCAPI struct FeatureToggles::FeatureToggle& operator=(struct FeatureToggles::FeatureToggle&&);
        /**
         * @symbol ??1FeatureToggle\@FeatureToggles\@\@QEAA\@XZ
         */
        MCAPI ~FeatureToggle();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETOGGLES
public:
    FeatureToggles& operator=(FeatureToggles const&) = delete;
    FeatureToggles(FeatureToggles const&)            = delete;
    FeatureToggles()                                 = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FEATURETOGGLES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FeatureToggles();
#endif
    /**
     * @symbol ??0FeatureToggles\@\@QEAA\@AEAVAppPlatform\@\@\@Z
     */
    MCAPI FeatureToggles(class AppPlatform&);
    /**
     * @symbol ?get\@FeatureToggles\@\@QEAAPEAVOption\@\@W4FeatureOptionID\@\@\@Z
     */
    MCAPI class Option* get(enum class FeatureOptionID);
    /**
     * @symbol ?isEnabled\@FeatureToggles\@\@QEBA_NW4FeatureOptionID\@\@\@Z
     */
    MCAPI bool isEnabled(enum class FeatureOptionID) const;

    // private:
    /**
     * @symbol
     * ?_getDisabledIfOptionExpectationsNotMetSetupCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEAVOption\@\@\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI class std::function<void(class Option&)>
        _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @symbol
     * ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEA_N\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI class std::function<void(bool&)>
        _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @symbol ?_initialize\@FeatureToggles\@\@AEAAXAEAVAppPlatform\@\@\@Z
     */
    MCAPI void _initialize(class AppPlatform&);
    /**
     * @symbol
     * ?_registerFeature\@FeatureToggles\@\@AEAAXW4FeatureOptionTabID\@\@W4FeatureOptionID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2_N1V?$function\@$$A6AXAEAVOption\@\@\@Z\@5\@V?$function\@$$A6AXAEA_N\@Z\@5\@\@Z
     */
    MCAPI void
    _registerFeature(enum class FeatureOptionTabID, enum class FeatureOptionID, std::string const&, std::string const&, bool, enum class FeatureOptionID, class std::function<void(class Option&)>, class std::function<void(bool&)>);
    /**
     * @symbol ?_registerFeatures\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _registerFeatures();
    /**
     * @symbol ?_setupDependencies\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _setupDependencies();

private:
    /**
     * @symbol
     * ?mFeatureToggles\@FeatureToggles\@\@0V?$unique_ptr\@VFeatureToggles\@\@U?$default_delete\@VFeatureToggles\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;
};

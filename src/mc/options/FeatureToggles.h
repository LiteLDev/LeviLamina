#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

class FeatureToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FeatureToggles inner types declare
    // clang-format off
    struct FeatureToggle;
    // clang-format on

    // FeatureToggles inner types define
    struct FeatureToggle {

    public:
        // prevent constructor by default
        FeatureToggle& operator=(FeatureToggle const&) = delete;
        FeatureToggle(FeatureToggle const&)            = delete;
        FeatureToggle()                                = delete;

    public:
        // NOLINTBEGIN
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
        // NOLINTEND
    };

public:
    // prevent constructor by default
    FeatureToggles& operator=(FeatureToggles const&) = delete;
    FeatureToggles(FeatureToggles const&)            = delete;
    FeatureToggles()                                 = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getDisabledIfOptionExpectationsNotMetSetupCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEAVOption\@\@\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI std::function<void(class Option&)>
        _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @symbol
     * ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEA_N\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI std::function<void(bool&)>
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
    _registerFeature(enum class FeatureOptionTabID, enum class FeatureOptionID, std::string const&, std::string const&, bool, enum class FeatureOptionID, std::function<void(class Option&)>, std::function<void(bool&)>);
    /**
     * @symbol ?_registerFeatures\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _registerFeatures();
    /**
     * @symbol ?_setupDependencies\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _setupDependencies();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mFeatureToggles\@FeatureToggles\@\@0V?$unique_ptr\@VFeatureToggles\@\@U?$default_delete\@VFeatureToggles\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;
    // NOLINTEND
};

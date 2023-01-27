/**
 * @file  FeatureToggles.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureToggles.
 *
 */
class FeatureToggles {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATURETOGGLES
public:
    class FeatureToggles& operator=(class FeatureToggles const &) = delete;
    FeatureToggles(class FeatureToggles const &) = delete;
    FeatureToggles() = delete;
#endif

public:
    /**
     * @hash   -1737621604
     * @symbol  ??0FeatureToggles\@\@QEAA\@AEAVAppPlatform\@\@\@Z
     */
    MCAPI FeatureToggles(class AppPlatform &);
    /**
     * @hash   -1168276586
     * @symbol  ?get\@FeatureToggles\@\@QEAAPEAVOption\@\@W4FeatureOptionID\@\@\@Z
     */
    MCAPI class Option * get(enum class FeatureOptionID);
    /**
     * @hash   -928175871
     * @symbol  ?isEnabled\@FeatureToggles\@\@QEBA_NW4FeatureOptionID\@\@\@Z
     */
    MCAPI bool isEnabled(enum class FeatureOptionID) const;

//private:
    /**
     * @hash   1797573501
     * @symbol  ?_getDisableIfOtherOptionDisabledSetupCallback\@FeatureToggles\@\@AEBA?AV?$function\@$$A6AXAEAVOption\@\@\@Z\@std\@\@W4FeatureOptionID\@\@\@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisableIfOtherOptionDisabledSetupCallback(enum class FeatureOptionID) const;
    /**
     * @hash   116175028
     * @symbol  ?_getDisabledIfOptionExpectationsNotMetSetupCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEAVOption\@\@\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @hash   739527995
     * @symbol  ?_getDisabledIfOtherOptionsEnabledSetupCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEAVOption\@\@\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOtherOptionsEnabledSetupCallback(std::vector<enum class FeatureOptionID>);
    /**
     * @hash   -1895235160
     * @symbol  ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback\@FeatureToggles\@\@AEAA?AV?$function\@$$A6AXAEA_N\@Z\@std\@\@V?$vector\@W4FeatureOptionID\@\@V?$allocator\@W4FeatureOptionID\@\@\@std\@\@\@3\@0\@Z
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<enum class FeatureOptionID>, std::vector<enum class FeatureOptionID>);
    /**
     * @hash   -1577470218
     * @symbol  ?_initialize\@FeatureToggles\@\@AEAAXAEAVAppPlatform\@\@\@Z
     */
    MCAPI void _initialize(class AppPlatform &);
    /**
     * @hash   -106981161
     * @symbol  ?_registerFeature\@FeatureToggles\@\@AEAAXW4FeatureOptionTabID\@\@W4FeatureOptionID\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@2_N1V?$function\@$$A6AXAEAVOption\@\@\@Z\@5\@V?$function\@$$A6AXAEA_N\@Z\@5\@\@Z
     */
    MCAPI void _registerFeature(enum class FeatureOptionTabID, enum class FeatureOptionID, std::string const &, std::string const &, bool, enum class FeatureOptionID, class std::function<void (class Option &)>, class std::function<void (bool &)>);
    /**
     * @hash   6003122
     * @symbol  ?_registerFeatures\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _registerFeatures();
    /**
     * @hash   1530337130
     * @symbol  ?_setupDependencies\@FeatureToggles\@\@AEAAXXZ
     */
    MCAPI void _setupDependencies();

private:
    /**
     * @hash   344549114
     * @symbol  ?mFeatureToggles\@FeatureToggles\@\@0V?$unique_ptr\@VFeatureToggles\@\@U?$default_delete\@VFeatureToggles\@\@\@std\@\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;

};
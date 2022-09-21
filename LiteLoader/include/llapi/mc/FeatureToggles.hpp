/**
 * @file  MC/FeatureToggles.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1418117884
     * @symbol ??0FeatureToggles@@QEAA@AEAVAppPlatform@@@Z
     */
    MCAPI FeatureToggles(class AppPlatform &);
    /**
     * @hash   1987585910
     * @symbol ?get@FeatureToggles@@QEAAPEAVOption@@W4FeatureOptionID@@@Z
     */
    MCAPI class Option * get(enum FeatureOptionID);
    /**
     * @hash   -2067280671
     * @symbol ?isEnabled@FeatureToggles@@QEBA_NW4FeatureOptionID@@@Z
     */
    MCAPI bool isEnabled(enum FeatureOptionID) const;

//private:
    /**
     * @hash   658268813
     * @symbol ?_getDisableIfOtherOptionDisabledSetupCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEAVOption@@@Z@std@@W4FeatureOptionID@@@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisableIfOtherOptionDisabledSetupCallback(enum FeatureOptionID) const;
    /**
     * @hash   -1023129660
     * @symbol ?_getDisabledIfOptionExpectationsNotMetSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOptionExpectationsNotMetSetupCallback(std::vector<enum FeatureOptionID>, std::vector<enum FeatureOptionID>);
    /**
     * @hash   -399807445
     * @symbol ?_getDisabledIfOtherOptionsEnabledSetupCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEAVOption@@@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@@Z
     */
    MCAPI class std::function<void (class Option &)> _getDisabledIfOtherOptionsEnabledSetupCallback(std::vector<enum FeatureOptionID>);
    /**
     * @hash   -538686827
     * @symbol ?_getLockIfInGameCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@XZ
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameCallback();
    /**
     * @hash   1260458200
     * @symbol ?_getLockIfInGameOrOptionExpectationsNotMetLockCallback@FeatureToggles@@AEAA?AV?$function@$$A6AXAEA_N@Z@std@@V?$vector@W4FeatureOptionID@@V?$allocator@W4FeatureOptionID@@@std@@@3@0@Z
     */
    MCAPI class std::function<void (bool &)> _getLockIfInGameOrOptionExpectationsNotMetLockCallback(std::vector<enum FeatureOptionID>, std::vector<enum FeatureOptionID>);
    /**
     * @hash   539159319
     * @symbol ?_getLockIfOtherOptionDisabledLockCallback@FeatureToggles@@AEBA?AV?$function@$$A6AXAEA_N@Z@std@@W4FeatureOptionID@@@Z
     */
    MCAPI class std::function<void (bool &)> _getLockIfOtherOptionDisabledLockCallback(enum FeatureOptionID) const;
    /**
     * @hash   1578253894
     * @symbol ?_initialize@FeatureToggles@@AEAAXAEAVAppPlatform@@@Z
     */
    MCAPI void _initialize(class AppPlatform &);
    /**
     * @hash   -1246239721
     * @symbol ?_registerFeature@FeatureToggles@@AEAAXW4FeatureOptionTabID@@W4FeatureOptionID@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@2_N1V?$function@$$A6AXAEAVOption@@@Z@5@V?$function@$$A6AXAEA_N@Z@5@@Z
     */
    MCAPI void _registerFeature(enum FeatureOptionTabID, enum FeatureOptionID, std::string const &, std::string const &, bool, enum FeatureOptionID, class std::function<void (class Option &)>, class std::function<void (bool &)>);
    /**
     * @hash   -1133301566
     * @symbol ?_registerFeatures@FeatureToggles@@AEAAXXZ
     */
    MCAPI void _registerFeatures();
    /**
     * @hash   391247706
     * @symbol ?_setupDependencies@FeatureToggles@@AEAAXXZ
     */
    MCAPI void _setupDependencies();

private:
    /**
     * @hash   -747446718
     * @symbol ?mFeatureToggles@FeatureToggles@@0V?$unique_ptr@VFeatureToggles@@U?$default_delete@VFeatureToggles@@@std@@@std@@A
     */
    MCAPI static std::unique_ptr<class FeatureToggles> mFeatureToggles;

};
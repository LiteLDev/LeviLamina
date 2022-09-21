/**
 * @file  MC/RequestActionLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "IRequestAction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RequestActionLoader.
 *
 */
class RequestActionLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REQUESTACTIONLOADER
public:
    class RequestActionLoader& operator=(class RequestActionLoader const &) = delete;
    RequestActionLoader(class RequestActionLoader const &) = delete;
    RequestActionLoader() = delete;
#endif

public:
    /**
     * @hash   809095136
     * @symbol ?isValidTag@RequestActionLoader@@SA_NW4RequestActionType@IRequestAction@@AEBVCompoundTag@@@Z
     */
    MCAPI static bool isValidTag(enum IRequestAction::RequestActionType, class CompoundTag const &);
    /**
     * @hash   1572137188
     * @symbol ?load@RequestActionLoader@@SA?AV?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@W4RequestActionType@IRequestAction@@AEBVCompoundTag@@AEAVICommandOriginLoader@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static std::unique_ptr<class IRequestAction> load(enum IRequestAction::RequestActionType, class CompoundTag const &, class ICommandOriginLoader &, std::string const &);

};
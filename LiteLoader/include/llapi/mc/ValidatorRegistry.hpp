/**
 * @file  ValidatorRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ValidatorRegistry.
 *
 */
class ValidatorRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALIDATORREGISTRY
public:
    class ValidatorRegistry& operator=(class ValidatorRegistry const &) = delete;
    ValidatorRegistry(class ValidatorRegistry const &) = delete;
    ValidatorRegistry() = delete;
#endif

public:
    /**
     * @hash   -1214035024
     * @symbol ?registerValidators@ValidatorRegistry@@SAXV?$basic_string_span@$$CBD$0?0@gsl@@V?$function@$$A6A?AVContentTierIncompatibleReason@@AEBVPackInstance@@AEBVContentTierInfo@@@Z@std@@V?$function@$$A6A?AVContentTierIncompatibleReason@@AEBUSubpackInfo@@AEBVContentTierInfo@@@Z@5@@Z
     */
    MCAPI static void registerValidators(class gsl::basic_string_span<char const, -1>, class std::function<class ContentTierIncompatibleReason (class PackInstance const &, class ContentTierInfo const &)>, class std::function<class ContentTierIncompatibleReason (struct SubpackInfo const &, class ContentTierInfo const &)>);

//private:
    /**
     * @hash   -2097042332
     * @symbol ?_get@ValidatorRegistry@@CA?AV?$ServiceReference@VValidatorRegistry@@@@XZ
     */
    MCAPI static class ServiceReference<class ValidatorRegistry> _get();

private:

};
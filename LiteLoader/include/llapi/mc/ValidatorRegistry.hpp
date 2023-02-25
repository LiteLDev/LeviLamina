/**
 * @file  ValidatorRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

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
     * @symbol  ?findValidators\@ValidatorRegistry\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVValidatorRegistryValidators\@1\@\@Z
     */
    MCAPI static bool findValidators(std::string const &, class ValidatorRegistry::ValidatorRegistryValidators &);
    /**
     * @symbol  ?registerValidators\@ValidatorRegistry\@\@SAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@V?$function\@$$A6A?AVContentTierIncompatibleReason\@\@AEBVPackInstance\@\@AEBVContentTierInfo\@\@\@Z\@std\@\@V?$function\@$$A6A?AVContentTierIncompatibleReason\@\@AEBUSubpackInfo\@\@AEBVContentTierInfo\@\@\@Z\@5\@\@Z
     */
    MCAPI static void registerValidators(class gsl::basic_string_span<char const, -1>, class std::function<class ContentTierIncompatibleReason (class PackInstance const &, class ContentTierInfo const &)>, class std::function<class ContentTierIncompatibleReason (struct SubpackInfo const &, class ContentTierInfo const &)>);

//private:
    /**
     * @symbol  ?_get\@ValidatorRegistry\@\@CA?AV?$NonOwnerPointer\@VValidatorRegistry\@\@\@Bedrock\@\@XZ
     */
    MCAPI static class Bedrock::NonOwnerPointer<class ValidatorRegistry> _get();

private:

};
/**
 * @file  PackSettingsJsonValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonValidator.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackSettingsJsonValidator.
 *
 */
class PackSettingsJsonValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSETTINGSJSONVALIDATOR
public:
    class PackSettingsJsonValidator& operator=(class PackSettingsJsonValidator const &) = delete;
    PackSettingsJsonValidator(class PackSettingsJsonValidator const &) = delete;
    PackSettingsJsonValidator() = delete;
#endif

public:
    /**
     * @symbol  ?getValidator\@PackSettingsJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@XZ
     */
    MCAPI static class JsonValidator::Property getValidator();

};
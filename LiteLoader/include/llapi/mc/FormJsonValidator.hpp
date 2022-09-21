/**
 * @file  MC/FormJsonValidator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonValidator.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FormJsonValidator.
 *
 */
class FormJsonValidator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FORMJSONVALIDATOR
public:
    class FormJsonValidator& operator=(class FormJsonValidator const &) = delete;
    FormJsonValidator(class FormJsonValidator const &) = delete;
    FormJsonValidator() = delete;
#endif

public:
    /**
     * @hash   760617205
     * @symbol ?getContentItemProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@AEBV23@00000@Z
     */
    MCAPI static class JsonValidator::Property getContentItemProperty(class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &);
    /**
     * @hash   34686364
     * @symbol ?getControlLockedProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@XZ
     */
    MCAPI static class JsonValidator::Property getControlLockedProperty();
    /**
     * @hash   -539588337
     * @symbol ?getDropdownProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
     */
    MCAPI static class JsonValidator::Property getDropdownProperty(bool);
    /**
     * @hash   -663239642
     * @symbol ?getLabelProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@XZ
     */
    MCAPI static class JsonValidator::Property getLabelProperty();
    /**
     * @hash   851958335
     * @symbol ?getSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
     */
    MCAPI static class JsonValidator::Property getSliderProperty(bool);
    /**
     * @hash   770554271
     * @symbol ?getStepSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
     */
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool);
    /**
     * @hash   -1543738307
     * @symbol ?getTextInputProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
     */
    MCAPI static class JsonValidator::Property getTextInputProperty(bool);
    /**
     * @hash   -1452892433
     * @symbol ?getToggleProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
     */
    MCAPI static class JsonValidator::Property getToggleProperty(bool);

};
/**
 * @file  FormJsonValidator.hpp
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
     * @hash   -258750091
     * @symbol  ?getContentItemProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@AEBV23\@00000\@Z
     */
    MCAPI static class JsonValidator::Property getContentItemProperty(class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &, class JsonValidator::Property const &);
    /**
     * @hash   -984604052
     * @symbol  ?getControlLockedProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@XZ
     */
    MCAPI static class JsonValidator::Property getControlLockedProperty();
    /**
     * @hash   -1558878753
     * @symbol  ?getDropdownProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getDropdownProperty(bool);
    /**
     * @hash   -1682514682
     * @symbol  ?getLabelProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@XZ
     */
    MCAPI static class JsonValidator::Property getLabelProperty();
    /**
     * @hash   -167316705
     * @symbol  ?getSliderProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getSliderProperty(bool);
    /**
     * @hash   -248628513
     * @symbol  ?getStepSliderProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool);
    /**
     * @hash   1732123085
     * @symbol  ?getTextInputProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getTextInputProperty(bool);
    /**
     * @hash   1823061215
     * @symbol  ?getToggleProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getToggleProperty(bool);

};
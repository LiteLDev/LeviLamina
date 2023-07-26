#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonValidator.h"

class FormJsonValidator {

public:
    // prevent constructor by default
    FormJsonValidator& operator=(FormJsonValidator const&) = delete;
    FormJsonValidator(FormJsonValidator const&)            = delete;
    FormJsonValidator()                                    = delete;

public:
    /**
     * @symbol ?getContentItemProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@AEBV23\@00000\@Z
     */
    MCAPI static class JsonValidator::Property
    getContentItemProperty(class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&, class JsonValidator::Property const&); // NOLINT
    /**
     * @symbol ?getControlLockedProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@XZ
     */
    MCAPI static class JsonValidator::Property getControlLockedProperty(); // NOLINT
    /**
     * @symbol ?getDropdownProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getDropdownProperty(bool); // NOLINT
    /**
     * @symbol ?getLabelProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@XZ
     */
    MCAPI static class JsonValidator::Property getLabelProperty(); // NOLINT
    /**
     * @symbol ?getSliderProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getSliderProperty(bool); // NOLINT
    /**
     * @symbol ?getStepSliderProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool); // NOLINT
    /**
     * @symbol ?getTextInputProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getTextInputProperty(bool); // NOLINT
    /**
     * @symbol ?getToggleProperty\@FormJsonValidator\@\@SA?AVProperty\@JsonValidator\@\@_N\@Z
     */
    MCAPI static class JsonValidator::Property getToggleProperty(bool); // NOLINT
};

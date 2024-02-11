#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonValidator.h"

class FormJsonValidator {
public:
    // prevent constructor by default
    FormJsonValidator& operator=(FormJsonValidator const&);
    FormJsonValidator(FormJsonValidator const&);
    FormJsonValidator();

public:
    // NOLINTBEGIN
    // symbol: ?getContentItemProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@AEBV23@00000@Z
    MCAPI static class JsonValidator::Property getContentItemProperty(
        class JsonValidator::Property const& labelType,
        class JsonValidator::Property const& toggleType,
        class JsonValidator::Property const& sliderType,
        class JsonValidator::Property const& stepSliderType,
        class JsonValidator::Property const& dropdownType,
        class JsonValidator::Property const& textInputType
    );

    // symbol: ?getControlLockedProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@XZ
    MCAPI static class JsonValidator::Property getControlLockedProperty();

    // symbol: ?getDropdownProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getDropdownProperty(bool requiresDefault);

    // symbol: ?getLabelProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@XZ
    MCAPI static class JsonValidator::Property getLabelProperty();

    // symbol: ?getSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getSliderProperty(bool requiresDefault);

    // symbol: ?getStepSliderProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getStepSliderProperty(bool requiresDefault);

    // symbol: ?getTextInputProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getTextInputProperty(bool requiresDefault);

    // symbol: ?getToggleProperty@FormJsonValidator@@SA?AVProperty@JsonValidator@@_N@Z
    MCAPI static class JsonValidator::Property getToggleProperty(bool requiresDefault);

    // NOLINTEND
};

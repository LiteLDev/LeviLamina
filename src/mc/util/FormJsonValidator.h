#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/JsonValidator.h"

class FormJsonValidator {
public:
    // prevent constructor by default
    FormJsonValidator& operator=(FormJsonValidator const&);
    FormJsonValidator(FormJsonValidator const&);
    FormJsonValidator();

public:
    // NOLINTBEGIN
    MCAPI static class JsonValidator::Property getContentItemProperty(
        class JsonValidator::Property const& labelType,
        class JsonValidator::Property const& toggleType,
        class JsonValidator::Property const& sliderType,
        class JsonValidator::Property const& stepSliderType,
        class JsonValidator::Property const& dropdownType,
        class JsonValidator::Property const& textInputType
    );

    MCAPI static class JsonValidator::Property getControlLockedProperty();

    MCAPI static class JsonValidator::Property getDropdownProperty(bool requiresDefault);

    MCAPI static class JsonValidator::Property getLabelProperty();

    MCAPI static class JsonValidator::Property getSliderProperty(bool requiresDefault);

    MCAPI static class JsonValidator::Property getStepSliderProperty(bool requiresDefault);

    MCAPI static class JsonValidator::Property getTextInputProperty(bool requiresDefault);

    MCAPI static class JsonValidator::Property getToggleProperty(bool requiresDefault);

    // NOLINTEND
};

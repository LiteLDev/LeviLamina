#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/JsonValidator.h"

class FormJsonValidator {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::JsonValidator::Property getContentItemProperty(
        ::JsonValidator::Property const& labelType,
        ::JsonValidator::Property const& toggleType,
        ::JsonValidator::Property const& sliderType,
        ::JsonValidator::Property const& stepSliderType,
        ::JsonValidator::Property const& dropdownType,
        ::JsonValidator::Property const& textInputType
    );

    MCAPI static ::JsonValidator::Property getControlLockedProperty();

    MCAPI static ::JsonValidator::Property getDropdownProperty(bool requiresDefault);

    MCAPI static ::JsonValidator::Property getSliderProperty(bool requiresDefault);

    MCAPI static ::JsonValidator::Property getStepSliderProperty(bool requiresDefault);

    MCAPI static ::JsonValidator::Property getTextInputProperty(bool requiresDefault);

    MCAPI static ::JsonValidator::Property getToggleProperty(bool requiresDefault);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/JsonValidator.h"

class FormJsonValidator {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::JsonValidator::Property getContentItemProperty(
        ::JsonValidator::Property const& labelType,
        ::JsonValidator::Property const& toggleType,
        ::JsonValidator::Property const& sliderType,
        ::JsonValidator::Property const& stepSliderType,
        ::JsonValidator::Property const& dropdownType,
        ::JsonValidator::Property const& textInputType,
        ::JsonValidator::Property const& headerType,
        ::JsonValidator::Property const& dividerType
    );

    MCNAPI static ::JsonValidator::Property getControlLockedProperty();

    MCNAPI static ::JsonValidator::Property getDropdownProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getSliderProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getStepSliderProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getStringOrObjectProperty();

    MCNAPI static ::JsonValidator::Property getTextInputProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getToggleProperty(bool requiresDefault);
    // NOLINTEND
};

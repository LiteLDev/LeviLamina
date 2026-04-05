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

#ifdef LL_PLAT_C
    MCNAPI static ::JsonValidator::Property getDividerProperty();
#endif

    MCNAPI static ::JsonValidator::Property getDropdownProperty(bool requiresDefault);

#ifdef LL_PLAT_C
    MCNAPI static ::JsonValidator::Property getElementItemProperty(
        ::JsonValidator::Property const& buttonType,
        ::JsonValidator::Property const& headerType,
        ::JsonValidator::Property const& labelType,
        ::JsonValidator::Property const& dividerType
    );

    MCNAPI static ::JsonValidator::Property getHeaderProperty();

    MCNAPI static ::JsonValidator::Property getLabelProperty();
#endif

    MCNAPI static ::JsonValidator::Property getSliderProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getStepSliderProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getStringOrObjectProperty();

    MCNAPI static ::JsonValidator::Property getTextInputProperty(bool requiresDefault);

    MCNAPI static ::JsonValidator::Property getToggleProperty(bool requiresDefault);

#ifdef LL_PLAT_C
    MCNAPI static ::JsonValidator::Property getValidator();
#endif
    // NOLINTEND
};

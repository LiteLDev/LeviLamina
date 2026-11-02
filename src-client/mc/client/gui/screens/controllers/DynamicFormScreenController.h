#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/common/JsonValidator.h"

// auto generated forward declare list
// clang-format off
class DynamicContentBindingInformation;
class MainMenuScreenModel;
namespace Json { class Reader; }
namespace Json { class Value; }
// clang-format on

class DynamicFormScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::JsonValidator::Property>                            mValidator;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::DynamicContentBindingInformation>> mBindingData;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicFormScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicFormScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicFormScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>              model,
        ::JsonValidator::Property const&                      validator,
        ::std::shared_ptr<::DynamicContentBindingInformation> bindingData
    );

    MCNAPI void _handleValidationErrors(::Json::Reader const& reader, ::std::vector<::std::string> validationErrors);

    MCNAPI void _registerBindings();

    MCNAPI bool _resolveControlEnabled(::Json::Value const& formJson) const;

    MCNAPI ::Json::Value getContentValues() const;

    MCNAPI bool parseJson(::std::string const& formJSON, ::Json::Value& outValue);

    MCNAPI bool validateAndBind(::Json::Value const& formJSON);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>              model,
        ::JsonValidator::Property const&                      validator,
        ::std::shared_ptr<::DynamicContentBindingInformation> bindingData
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};

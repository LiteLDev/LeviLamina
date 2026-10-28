#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/data_drivenui/document/DocumentDescription.h"
#include "mc/deps/shared_types/beta/data_drivenui/styling/StyleComponents.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
// clang-format on

namespace SharedTypes::Beta::DataDrivenUI::Styling {

struct Style {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Beta::DataDrivenUI::DocumentDescription>      mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::DataDrivenUI::Styling::StyleComponents> mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    Style& operator=(Style const&);
    Style();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Style(::SharedTypes::Beta::DataDrivenUI::Styling::Style const&);

    MCAPI ~Style();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& UI_STYLE_PAYLOAD_KEY();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Beta::DataDrivenUI::Styling::Style const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::DataDrivenUI::Styling

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct DocumentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    DocumentDescription(DocumentDescription const&);
    DocumentDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription&&);

    MCFOLD ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription const&);

    MCAPI ~DocumentDescription();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

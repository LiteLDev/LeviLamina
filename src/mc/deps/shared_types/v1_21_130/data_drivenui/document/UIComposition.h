#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/AttribsComposition.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/CompositionLayout.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/DocumentDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct UIComposition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 40, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsComposition>  mAttribs;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::CompositionLayout>   mLayout;
    // NOLINTEND

public:
    // prevent constructor by default
    UIComposition(UIComposition const&);
    UIComposition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIComposition&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIComposition const&);

    MCAPI ~UIComposition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& UI_COMPOSITION_PAYLOAD_KEY();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/AttribsRoot.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/DocumentDescription.h"
#include "mc/deps/shared_types/v1_21_130/data_drivenui/document/Layout.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct UIRoot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::DocumentDescription> mDescription;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_130::DataDrivenUI::AttribsRoot>         mAttribs;
    ::ll::TypedStorage<8, 24, ::SharedTypes::v1_21_130::DataDrivenUI::Layout>              mLayout;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                         mExtensionPoints;
    // NOLINTEND

public:
    // prevent constructor by default
    UIRoot();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIRoot(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);

    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot& operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot&&);

    MCAPI ::SharedTypes::v1_21_130::DataDrivenUI::UIRoot&
    operator=(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);

    MCAPI ~UIRoot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& UI_ROOT_PAYLOAD_KEY();

    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_130::DataDrivenUI::UIRoot const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

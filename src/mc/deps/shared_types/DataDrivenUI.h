#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerItem; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {
// functions
// NOLINTBEGIN
MCAPI void bindComponentTypeType(::cereal::ReflectionCtx& ctx);

MCAPI bool operator==(
    ::std::variant<
        ::SharedTypes::v1_21_130::DataDrivenUI::ContainerItem,
        ::SharedTypes::v1_21_130::DataDrivenUI::ContextList> const& lhs,
    ::std::variant<
        ::SharedTypes::v1_21_130::DataDrivenUI::ContainerItem,
        ::SharedTypes::v1_21_130::DataDrivenUI::ContextList> const& rhs
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ContainerFixedGridLayoutName();

MCAPI ::std::add_lvalue_reference_t<char const[]> ContainerItemName();

MCAPI ::std::add_lvalue_reference_t<char const[]> ContainerLayoutName();

MCAPI ::std::add_lvalue_reference_t<char const[]> ContextListName();

MCAPI ::std::add_lvalue_reference_t<char const[]> ContextName();

MCAPI ::std::add_lvalue_reference_t<char const[]> ExtensionPointName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormButtonName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormDividerName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormDropdownName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormScrollViewName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormSliderName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormSwitchName();

MCAPI ::std::add_lvalue_reference_t<char const[]> FormTextFieldName();

MCAPI ::std::add_lvalue_reference_t<char const[]> PanelCloseButtonName();

MCAPI ::std::add_lvalue_reference_t<char const[]> PanelDecorationName();

MCAPI ::std::add_lvalue_reference_t<char const[]> PanelName();

MCAPI ::std::add_lvalue_reference_t<char const[]> PanelSpacingName();

MCAPI ::std::add_lvalue_reference_t<char const[]> PanelTextName();

MCAPI ::std::add_lvalue_reference_t<char const[]> VisibilityName();
// NOLINTEND

} // namespace SharedTypes::v1_21_130::DataDrivenUI

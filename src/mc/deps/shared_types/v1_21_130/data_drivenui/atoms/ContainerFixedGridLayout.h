#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerItem; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContextList; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct TagNamed; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct ContainerFixedGridLayout
: public ::SharedTypes::v1_21_130::DataDrivenUI::
      TagNamed<::SharedTypes::v1_21_130::DataDrivenUI::ContainerFixedGridLayout, 8, $unknown_type> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::optional<::cereal::DynamicValue>> mAttribs;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::SharedTypes::v1_21_130::DataDrivenUI::ContainerItem,
            ::SharedTypes::v1_21_130::DataDrivenUI::ContextList>>>
        mChildren;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

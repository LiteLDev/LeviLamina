#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerItem; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct TagNamed; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct ContextList : public ::SharedTypes::v1_21_130::DataDrivenUI::
                         TagNamed<::SharedTypes::v1_21_130::DataDrivenUI::ContextList, 7, $unknown_type> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                                               mAttribs;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_130::DataDrivenUI::ContainerItem>> mChildren;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

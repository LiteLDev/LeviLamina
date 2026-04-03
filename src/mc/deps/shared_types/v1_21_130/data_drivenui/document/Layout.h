#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct Layout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::ContainerLayout>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Context>,
            ::std::shared_ptr<::SharedTypes::v1_21_130::DataDrivenUI::Panel>>>>
        mMarkup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Layout();
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
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI

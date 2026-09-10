#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class IntOptionQuery : public ::OreUI::QueryBase<::OreUI::IntOptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::std::optional<::OreUI::OptionProperty<int>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    IntOptionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IntOptionQuery(::OreUI::ClientDependencies const& client, ::std::string const& optionName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& optionName);
    // NOLINTEND
};

} // namespace OreUI

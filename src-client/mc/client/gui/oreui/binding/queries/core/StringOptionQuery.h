#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/OptionProperty.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class StringOptionQuery : public ::OreUI::QueryBase<::OreUI::StringOptionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::std::optional<::OreUI::OptionProperty<::std::string>>>          mValue;
    ::ll::TypedStorage<8, 208, ::std::optional<::OreUI::Property<::std::string, ::std::string>>> mDefault;
    // NOLINTEND

public:
    // prevent constructor by default
    StringOptionQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringOptionQuery(::OreUI::ClientDependencies const& client, ::std::string const& optionName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& optionName);
    // NOLINTEND
};

} // namespace OreUI

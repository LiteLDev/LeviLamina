#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PersonaClient;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class PersonaCommands : public ::OreUI::CommandGroupBase<::OreUI::PersonaCommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>> mEquipDefaultSkin;
    ::ll::TypedStorage<8, 8, ::PersonaClient&>                      mPersonaClient;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaCommands& operator=(PersonaCommands const&);
    PersonaCommands(PersonaCommands const&);
    PersonaCommands();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PersonaCommands(::OreUI::ClientDependencies const& client);

    MCAPI void _equipDefaultSkin();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/ModalType.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmId; }
// clang-format on

namespace OreUI::EntryPoints::PartyModal {
// functions
// NOLINTBEGIN
MCAPI ::std::string composeInvitePartyToCreatedRealmRoute(::Realms::RealmId realmId);

MCAPI ::std::string composeRouteForModal(::OreUI::EntryPoints::PartyModal::ModalType modal);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::add_lvalue_reference_t<char const[]> ROUTE();
// NOLINTEND

} // namespace OreUI::EntryPoints::PartyModal

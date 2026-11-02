#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/MouseButton.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/realms/PlayerPermission.h"
#include "mc/client/realms/PlayerRole.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {
// functions
// NOLINTBEGIN
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, int>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, bool>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                 binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                          binder,
    ::OreUI::Detail::CallableImpl<::std::string, ::std::string, ::std::vector<::std::string>>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<::std::string, int64>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                                binder,
    ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton, ::ContainerEnumName, int, bool, bool>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                    binder,
    ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton, ::ContainerEnumName, int>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, bool>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, float>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int, int>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                            binder,
    ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton, ::ContainerEnumName, int, bool>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                      binder,
    ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton, ::ContainerEnumName, int>* callable
);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::InventoryLeftTabIndex>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                                binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, ::std::string>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                         binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, double>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                       binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, bool>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, float>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                                     binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::ProfanityFilterContext, bool, bool, bool, bool>* callable
);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, uint, float, float, float, float>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, uint, float>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<uint64, ::std::string, float, float>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, uint64, float>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<bool, uint64>* callable);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::FileStorageDirectory>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                        binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, bool>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, float, float>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int64>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                        binder,
    ::OreUI::Detail::CallableImpl<void, int64, ::std::string, ::std::vector<::std::string>>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                               binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::Realms::PlayerPermission>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder* binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, int64, ::std::string, int, bool>*
        callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder* binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, int64, ::std::string, int>*
        callable
);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int, ::std::string, int64>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                                     binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::Realms::PlayerRole, ::Realms::PlayerPermission>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                         binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::Realms::PlayerRole>* callable
);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int64, int>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                             binder,
    ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::vector<::std::string>>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder* binder,
    ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::vector<::std::string>>*
        callable
);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string>* callable);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                              binder,
    ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                                             binder,
    ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::string>* callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder* binder,
    ::OreUI::Detail::CallableImpl<void, int64, int, ::std::string, ::std::string, ::std::string, ::std::string>*
        callable
);

MCNAPI void CoherentBind(
    ::cohtml::Binder*                                                       binder,
    ::OreUI::Detail::CallableImpl<void, int64, ::Realms::RealmsServerMode>* callable
);

MCNAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, double>* callable);

MCNAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::IPropertyObject* object);
// NOLINTEND

} // namespace OreUI::Detail

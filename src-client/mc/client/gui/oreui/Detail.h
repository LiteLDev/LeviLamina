#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {
// functions
// NOLINTBEGIN
MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, bool>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                 binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void>* callable);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int64, int>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::IPropertyObject* object);
// NOLINTEND

} // namespace OreUI::Detail

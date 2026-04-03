#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/util/ProfanityFilterContext.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {
// functions
// NOLINTBEGIN
MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, bool>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder* binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::ProfanityFilterContext, bool, ::std::string, bool, bool, bool>*
        callable
);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                             binder,
    ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int, int>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, double>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                         binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, double>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, int>* callable);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::vector<::std::string>>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, bool>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                        binder,
    ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, bool>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                       binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, bool>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int, int>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                          binder,
    ::OreUI::Detail::CallableImpl<::std::string, ::std::string, ::std::vector<::std::string>>* callable
);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<uint64, ::std::string, float, float>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                 binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string>* callable
);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void>* callable);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string>* callable);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                                binder,
    ::OreUI::Detail::CallableImpl<void, ::std::string, ::std::string, ::std::string, ::std::string>* callable
);

MCAPI void CoherentBind(
    ::cohtml::Binder*                                                                   binder,
    ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName>* callable
);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<::std::string, int64>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, int>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, uint64, float>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<bool, uint64>* callable);

MCAPI void
CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::CallableImpl<void, ::FileStorageDirectory>* callable);

MCAPI void CoherentBind(::cohtml::Binder* binder, ::OreUI::Detail::IPropertyObject* object);
// NOLINTEND

} // namespace OreUI::Detail

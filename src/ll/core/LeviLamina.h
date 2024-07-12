#pragma once

#include "ll/api/Logger.h"
#include "ll/api/mod/NativeMod.h"
namespace ll {
std::shared_ptr<mod::NativeMod> const& getSelfModIns();
Logger&                                getLogger();
constexpr const std::string_view       selfModName = "LeviLamina";
} // namespace ll

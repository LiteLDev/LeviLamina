#pragma once

#include "ll/api/Logger.h"
#include "ll/api/mod/NativeMod.h"
namespace ll {
std::shared_ptr<mod::NativeMod>  getSelfModIns();
extern Logger&                   logger;
constexpr const std::string_view selfModName = "LeviLamina";
} // namespace ll

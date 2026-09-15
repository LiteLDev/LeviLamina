#pragma once

#include <functional>

#include "ll/api/Expected.h"

namespace ll::mod {
class Mod;
}

namespace ll::protocol {

using RegistryInvalidator = std::function<void()>;
using LifecycleExecutor   = std::function<void(std::function<void()>)>;

[[nodiscard]] Expected<>
initializeModLifecycleIntegration(RegistryInvalidator invalidator, LifecycleExecutor executor) noexcept;
void shutdownModLifecycleIntegration() noexcept;

[[nodiscard]] Expected<> prepareModDisable(mod::Mod const& owner);
[[nodiscard]] Expected<> prepareModUnload(mod::Mod const& owner);
[[nodiscard]] Expected<> finalizeModUnload(mod::Mod const& owner) noexcept;

namespace detail {

void notifyRegistryChanged() noexcept;

} // namespace detail

} // namespace ll::protocol

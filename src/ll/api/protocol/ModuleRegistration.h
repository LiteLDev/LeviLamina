#pragma once

#include <cstdint>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Id.h"

namespace ll::protocol {

class PayloadRegistry;

class ModuleRegistration {
    class Impl;
    std::unique_ptr<Impl> mImpl;

    friend PayloadRegistry;

public:
    ModuleRegistration() noexcept;
    LLAPI ~ModuleRegistration() noexcept;

    ModuleRegistration(ModuleRegistration const&)            = delete;
    ModuleRegistration& operator=(ModuleRegistration const&) = delete;

    LLAPI                     ModuleRegistration(ModuleRegistration&&) noexcept;
    LLAPI ModuleRegistration& operator=(ModuleRegistration&&) noexcept;

    [[nodiscard]] LLAPI explicit operator bool() const noexcept;

    LLNDAPI ModuleId const& id() const noexcept;
    LLNDAPI std::uint64_t generation() const noexcept;
    LLNDAPI bool          active() const noexcept;

    LLAPI Expected<> reset() noexcept;
};

} // namespace ll::protocol

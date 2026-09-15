#pragma once

#include <cstdint>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Id.h"

namespace ll::protocol {

class PayloadRegistry;

class PayloadRegistration {
    class Impl;
    std::unique_ptr<Impl> mImpl;

    friend PayloadRegistry;

public:
    PayloadRegistration() noexcept;
    LLAPI ~PayloadRegistration() noexcept;

    PayloadRegistration(PayloadRegistration const&)            = delete;
    PayloadRegistration& operator=(PayloadRegistration const&) = delete;

    LLAPI                      PayloadRegistration(PayloadRegistration&&) noexcept;
    LLAPI PayloadRegistration& operator=(PayloadRegistration&&) noexcept;

    LLNDAPI explicit operator bool() const noexcept;

    LLNDAPI PayloadId const& id() const;
    LLNDAPI std::uint64_t runtimeId() const noexcept;
    LLNDAPI std::uint64_t generation() const noexcept;

    LLNDAPI bool active() const;

    LLAPI Expected<> reset() noexcept;
};

} // namespace ll::protocol

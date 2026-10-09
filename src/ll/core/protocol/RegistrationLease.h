#pragma once

#include <cstdint>
#include <memory>

#include "ll/api/Expected.h"

namespace ll::protocol::detail {

class DescriptorState;

class RegistrationLease {
    std::shared_ptr<DescriptorState> mState;

    explicit RegistrationLease(std::shared_ptr<DescriptorState> state) noexcept : mState(std::move(state)) {}

public:
    RegistrationLease() noexcept = default;
    ~RegistrationLease();

    RegistrationLease(RegistrationLease const&)            = delete;
    RegistrationLease& operator=(RegistrationLease const&) = delete;

    RegistrationLease(RegistrationLease&& other) noexcept;
    RegistrationLease& operator=(RegistrationLease&& other) noexcept;

    [[nodiscard]] static Expected<RegistrationLease>
    acquire(std::shared_ptr<DescriptorState> state, std::uint64_t generation);

    [[nodiscard]] explicit operator bool() const noexcept { return mState != nullptr; }

    [[nodiscard]] DescriptorState& state() const noexcept { return *mState; }

    void reset();
};

} // namespace ll::protocol::detail

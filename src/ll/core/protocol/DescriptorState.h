#pragma once

#include <atomic>
#include <condition_variable>
#include <cstddef>
#include <cstdint>
#include <memory>
#include <mutex>
#include <span>
#include <string>
#include <typeindex>

#include "ll/api/Expected.h"
#include "ll/api/mod/Mod.h"
#include "ll/api/protocol/ModuleDescriptor.h"
#include "ll/api/protocol/PayloadDescriptor.h"
#include "ll/api/protocol/PayloadRegistry.h"

namespace ll::protocol::detail {

enum class DescriptorLifecycle : std::uint8_t {
    Pending,
    Active,
    Draining,
    Inactive,
};

struct ModuleState {
    std::shared_ptr<ModuleDescriptor const> descriptor;
    std::weak_ptr<mod::Mod>                 owner;
    std::atomic<DescriptorLifecycle>        lifecycle{DescriptorLifecycle::Pending};
    std::atomic<std::uint32_t>              payloadCount{};
    std::atomic_bool                        closeRequested{};
};

class DescriptorState : public std::enable_shared_from_this<DescriptorState> {
    std::shared_ptr<PayloadDescriptor const> mDescriptor;
    std::weak_ptr<ModuleState>               mModule;
    std::weak_ptr<mod::Mod>                  mOwner;
    std::type_index                          mType;

    mutable std::mutex      mMutex;
    std::condition_variable mDrained;
    DescriptorLifecycle     mLifecycle{DescriptorLifecycle::Pending};
    std::size_t             mInFlight{};
    PayloadCallbacks        mCallbacks;

    void finalizeIfDrainedLocked() noexcept;

public:
    DescriptorState(
        std::shared_ptr<PayloadDescriptor const> descriptor,
        std::shared_ptr<ModuleState> const&      module,
        std::weak_ptr<mod::Mod>                  owner,
        std::type_index                          type,
        PayloadCallbacks                         callbacks,
        DescriptorLifecycle                      lifecycle
    );

    [[nodiscard]] std::shared_ptr<PayloadDescriptor const> descriptor() const noexcept { return mDescriptor; }
    [[nodiscard]] std::shared_ptr<ModuleState>             module() const noexcept { return mModule.lock(); }
    [[nodiscard]] std::weak_ptr<mod::Mod>                  owner() const noexcept { return mOwner; }
    [[nodiscard]] std::type_index                          type() const noexcept { return mType; }

    [[nodiscard]] DescriptorLifecycle lifecycle() const;
    [[nodiscard]] bool                active() const;
    [[nodiscard]] std::size_t         inFlight() const;

    bool       activate();
    Expected<> drain(bool wait);

    bool acquireLease(std::uint64_t generation);
    void releaseLease();

    Expected<std::string> encode(void const* value, SchemaVersion schema, std::size_t maxEncodedSize) const noexcept;
    Expected<>
    dispatch(PayloadContext const& context, std::span<std::byte const> body, SchemaVersion schema) const noexcept;

    [[nodiscard]] bool hasHandler() const;
};

} // namespace ll::protocol::detail

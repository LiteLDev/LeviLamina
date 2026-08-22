#include "ll/core/protocol/DescriptorState.h"

#include <unordered_map>
#include <utility>

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/RegistrationLease.h"

namespace ll::protocol::detail {

namespace descriptor_state_detail {

thread_local std::unordered_map<DescriptorState const*, std::size_t> CurrentLeases;

bool currentThreadOwns(DescriptorState const* state) {
    auto const found = CurrentLeases.find(state);
    return found != CurrentLeases.end() && found->second != 0;
}

void recordAcquire(DescriptorState const* state) { ++CurrentLeases[state]; }

void recordRelease(DescriptorState const* state) {
    auto found = CurrentLeases.find(state);
    if (found == CurrentLeases.end()) {
        return;
    }
    if (--found->second == 0) {
        CurrentLeases.erase(found);
    }
}

} // namespace descriptor_state_detail

DescriptorState::DescriptorState(
    std::shared_ptr<PayloadDescriptor const> descriptor,
    std::shared_ptr<ModuleState> const&      module,
    std::weak_ptr<mod::Mod>                  owner,
    std::type_index                          type,
    PayloadCallbacks                         callbacks,
    DescriptorLifecycle                      lifecycle
)
: mDescriptor(std::move(descriptor)),
  mModule(module),
  mOwner(std::move(owner)),
  mType(type),
  mLifecycle(lifecycle),
  mCallbacks(std::move(callbacks)) {}

void DescriptorState::finalizeIfDrainedLocked() noexcept {
    if (mLifecycle == DescriptorLifecycle::Draining && mInFlight == 0) {
        mCallbacks = {};
        mLifecycle = DescriptorLifecycle::Inactive;
        mDrained.notify_all();
    }
}

DescriptorLifecycle DescriptorState::lifecycle() const {
    std::scoped_lock lock{mMutex};
    return mLifecycle;
}

bool DescriptorState::active() const {
    std::scoped_lock lock{mMutex};
    return mLifecycle == DescriptorLifecycle::Active;
}

std::size_t DescriptorState::inFlight() const {
    std::scoped_lock lock{mMutex};
    return mInFlight;
}

bool DescriptorState::activate() {
    std::scoped_lock lock{mMutex};
    if (mLifecycle != DescriptorLifecycle::Pending) {
        return false;
    }

    mLifecycle = DescriptorLifecycle::Active;
    return true;
}

Expected<> DescriptorState::drain(bool wait) {
    std::unique_lock lock{mMutex};
    if (mLifecycle == DescriptorLifecycle::Inactive) {
        return {};
    }
    if (mLifecycle == DescriptorLifecycle::Pending || mLifecycle == DescriptorLifecycle::Active) {
        mLifecycle = DescriptorLifecycle::Draining;
    }

    finalizeIfDrainedLocked();
    if (mLifecycle == DescriptorLifecycle::Inactive || !wait) {
        return {};
    }
    if (descriptor_state_detail::currentThreadOwns(this)) {
        return makeLifecycleError(LifecycleErrc::WouldDeadlock, mDescriptor->id().str());
    }

    mDrained.wait(lock, [this] { return mLifecycle == DescriptorLifecycle::Inactive; });
    return {};
}

bool DescriptorState::acquireLease(std::uint64_t generation) {
    std::scoped_lock lock{mMutex};
    if (mLifecycle != DescriptorLifecycle::Active || mDescriptor->generation() != generation) {
        return false;
    }

    auto owner = mOwner.lock();
    if (!owner || !owner->isEnabled()) {
        return false;
    }

    ++mInFlight;
    try {
        descriptor_state_detail::recordAcquire(this);
    } catch (...) {
        --mInFlight;
        return false;
    }

    return true;
}

void DescriptorState::releaseLease() {
    std::scoped_lock lock{mMutex};

    descriptor_state_detail::recordRelease(this);
    if (mInFlight != 0) {
        --mInFlight;
    }

    finalizeIfDrainedLocked();
}

Expected<std::string>
DescriptorState::encode(void const* value, SchemaVersion schema, std::size_t maxEncodedSize) const noexcept {
    try {
        PayloadCallbacks::Encode callback;
        {
            std::scoped_lock lock{mMutex};
            callback = mCallbacks.encode;
        }
        if (!callback) {
            return makeLifecycleError(LifecycleErrc::Draining, mDescriptor->id().str());
        }
        return callback(value, schema, maxEncodedSize);
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> DescriptorState::dispatch(
    PayloadContext const&      context,
    std::span<std::byte const> body,
    SchemaVersion              schema
) const noexcept {
    try {
        PayloadCallbacks::Dispatch callback;
        {
            std::scoped_lock lock{mMutex};
            callback = mCallbacks.dispatch;
        }
        if (!callback) {
            return makeProtocolError(ProtocolErrc::UnknownPayload, mDescriptor->id().str());
        }
        return callback(context, body, schema);
    } catch (...) {
        return makeExceptionError();
    }
}

bool DescriptorState::hasHandler() const {
    std::scoped_lock lock{mMutex};
    return static_cast<bool>(mCallbacks.dispatch);
}

RegistrationLease::~RegistrationLease() {
    try {
        reset();
    } catch (...) {}
}

RegistrationLease::RegistrationLease(RegistrationLease&& other) noexcept : mState(std::move(other.mState)) {}

RegistrationLease& RegistrationLease::operator=(RegistrationLease&& other) noexcept {
    if (this != &other) {
        try {
            reset();
        } catch (...) {}

        mState = std::move(other.mState);
    }
    return *this;
}

Expected<RegistrationLease>
RegistrationLease::acquire(std::shared_ptr<DescriptorState> state, std::uint64_t generation) {
    if (!state || !state->acquireLease(generation)) {
        return makeLifecycleError(LifecycleErrc::Draining);
    }
    return RegistrationLease{std::move(state)};
}

void RegistrationLease::reset() {
    if (mState) {
        mState->releaseLease();
        mState.reset();
    }
}

} // namespace ll::protocol::detail

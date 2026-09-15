#include "ll/core/protocol/ProtocolRuntime.h"

#include "ll/core/protocol/RuntimePacketAdapter.h"

namespace ll::protocol::detail {

struct ProtocolRuntime::Impl {
    RuntimePacketAdapter adapter;
};

ProtocolRuntime::ProtocolRuntime() : mImpl(std::make_unique<Impl>()) {}
ProtocolRuntime::~ProtocolRuntime() = default;

ProtocolRuntime& ProtocolRuntime::getInstance() {
    static ProtocolRuntime instance;
    return instance;
}

Expected<> ProtocolRuntime::initialize() noexcept { return mImpl->adapter.initialize(); }

Expected<> ProtocolRuntime::installPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) noexcept {
    return mImpl->adapter.installPayloadSlot(id, runtimeId);
}

Expected<> ProtocolRuntime::setReceiver(RuntimePacketReceiver& receiver) noexcept {
    return mImpl->adapter.setReceiver(receiver);
}

bool ProtocolRuntime::initialized() const { return mImpl->adapter.initialized(); }

RuntimePacketAdapter& ProtocolRuntime::adapter() noexcept { return mImpl->adapter; }

} // namespace ll::protocol::detail

namespace ll::protocol {

Expected<> initializeRuntime() noexcept {
    try {
        return detail::ProtocolRuntime::getInstance().initialize();
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol

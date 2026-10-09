#pragma once

#include <cstdint>
#include <memory>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Id.h"

namespace ll::protocol {

[[nodiscard]] Expected<> initializeRuntime() noexcept;

} // namespace ll::protocol

namespace ll::protocol::detail {

class RuntimePacketAdapter;
class RuntimePacketReceiver;

class ProtocolRuntime {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

    ProtocolRuntime();

public:
    ~ProtocolRuntime();

    ProtocolRuntime(ProtocolRuntime const&)            = delete;
    ProtocolRuntime& operator=(ProtocolRuntime const&) = delete;

    [[nodiscard]] static ProtocolRuntime& getInstance();

    [[nodiscard]] Expected<> initialize() noexcept;
    [[nodiscard]] Expected<> installPayloadSlot(PayloadId const& id, std::uint64_t runtimeId) noexcept;
    [[nodiscard]] Expected<> setReceiver(RuntimePacketReceiver& receiver) noexcept;

    [[nodiscard]] bool                  initialized() const;
    [[nodiscard]] RuntimePacketAdapter& adapter() noexcept;
};

} // namespace ll::protocol::detail

#pragma once

#include <memory>

#include "ll/api/Expected.h"
#include "ll/core/protocol/ControlMessage.h"

namespace ll::protocol::detail {

class Transcript {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    Transcript();
    ~Transcript();

    Transcript(Transcript&&) noexcept;
    Transcript& operator=(Transcript&&) noexcept;

    Transcript(Transcript const&)            = delete;
    Transcript& operator=(Transcript const&) = delete;

    [[nodiscard]] Expected<>       add(ControlMessage const& message, CoreVersion coreProtocol);
    [[nodiscard]] TranscriptDigest finish();
};

} // namespace ll::protocol::detail

#include "ll/core/protocol/Transcript.h"

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlCodec.h"

#include "mc/deps/crypto/Hash.h"

#include <algorithm>
#include <cstring>
#include <limits>
#include <optional>
#include <string>

namespace ll::protocol::detail {

void updateHash(Crypto::Hash::Hash& hash, std::span<std::byte const> input) noexcept {
    constexpr auto MaxUpdateSize = static_cast<std::size_t>(std::numeric_limits<uint>::max());
    while (!input.empty()) {
        auto const size = std::min(input.size(), MaxUpdateSize);
        hash.update(input.data(), static_cast<uint>(size));
        input = input.subspan(size);
    }
}

TranscriptDigest toTranscriptDigest(std::string const& binaryDigest) noexcept {
    TranscriptDigest result{};
    if (binaryDigest.size() != result.size()) return result;

    std::memcpy(result.data(), binaryDigest.data(), result.size());
    return result;
}

struct Transcript::Impl {
    Crypto::Hash::Hash              hash{Crypto::Hash::HashType::Sha256};
    std::optional<TranscriptDigest> digest;
};

Transcript::Transcript() : mImpl(std::make_unique<Impl>()) {
    updateHash(
        mImpl->hash,
        {reinterpret_cast<std::byte const*>(TranscriptHashDomain.data()), TranscriptHashDomain.size()}
    );
}
Transcript::~Transcript() = default;

Transcript::Transcript(Transcript&&) noexcept            = default;
Transcript& Transcript::operator=(Transcript&&) noexcept = default;

Expected<> Transcript::add(ControlMessage const& message, CoreVersion coreProtocol) noexcept {
    if (mImpl->digest) return makeProtocolError(ProtocolErrc::InvalidState, "transcript already finalized");
    if (std::holds_alternative<Ready>(message) || std::holds_alternative<ProtocolErrorMessage>(message)) {
        return makeProtocolError(ProtocolErrc::UnexpectedMessage, "message is excluded from transcript");
    }

    auto const runtimeId     = controlRuntimeId(message);
    bool const includeDigest = !std::holds_alternative<NegotiationResult>(message);

    auto encoded = encodeControl(message, coreProtocol, includeDigest);
    if (!encoded) return forwardError(encoded.error());

    Encoder frame{sizeof(std::uint64_t) + sizeof(std::uint32_t)};
    if (auto result = frame.writeU64(runtimeId); !result) return result;
    if (auto result = frame.writeU32(static_cast<std::uint32_t>(encoded->size())); !result) return result;

    updateHash(mImpl->hash, frame.bytes());
    updateHash(mImpl->hash, {reinterpret_cast<std::byte const*>(encoded->data()), encoded->size()});
    return {};
}

TranscriptDigest Transcript::finish() noexcept {
    if (!mImpl->digest) mImpl->digest = toTranscriptDigest(mImpl->hash.final());
    return *mImpl->digest;
}

} // namespace ll::protocol::detail

#include "ll/core/protocol/Transcript.h"

#include "ll/api/protocol/Codec.h"
#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/Constants.h"
#include "ll/core/protocol/ControlCodec.h"

#include <cstring>
#include <optional>
#include <string>

#include "mc/deps/crypto/hash/Hash.h"

namespace ll::protocol::detail {

void appendBytes(std::string& output, std::span<std::byte const> input) {
    output.append(reinterpret_cast<char const*>(input.data()), input.size());
}

TranscriptDigest toTranscriptDigest(std::string const& binaryDigest) {
    TranscriptDigest result{};
    if (binaryDigest.size() != result.size()) return result;

    std::memcpy(result.data(), binaryDigest.data(), result.size());
    return result;
}

struct Transcript::Impl {
    std::string                     bytes{TranscriptHashDomain};
    std::optional<TranscriptDigest> digest{};
};

Transcript::Transcript() : mImpl(std::make_unique<Impl>()) {}
Transcript::~Transcript() = default;

Transcript::Transcript(Transcript&&) noexcept            = default;
Transcript& Transcript::operator=(Transcript&&) noexcept = default;

Expected<> Transcript::add(ControlMessage const& message, CoreVersion coreProtocol) {
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

    appendBytes(mImpl->bytes, frame.bytes());

    mImpl->bytes.append(*encoded);
    return {};
}

TranscriptDigest Transcript::finish() {
    if (!mImpl->digest) {
        mImpl->digest = toTranscriptDigest(
            Crypto::Hash::hash(
                Crypto::Hash::HashType::Sha256,
                mImpl->bytes.data(),
                static_cast<uint>(mImpl->bytes.size())
            )
        );
    }
    return *mImpl->digest;
}

} // namespace ll::protocol::detail

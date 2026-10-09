#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <span>
#include <string>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Limits.h"
#include "ll/core/protocol/ControlMessage.h"

namespace ll::protocol::detail {

[[nodiscard]] std::uint64_t controlRuntimeId(ControlMessage const& message);

[[nodiscard]] Expected<std::string> encodeControl(
    ControlMessage const& message,
    CoreVersion           coreProtocol,
    bool                  includeNegotiationDigest = true,
    std::size_t           maxBody                  = Limits::MaxControlBody
);

[[nodiscard]] Expected<ControlMessage> decodeControl(
    std::uint64_t              runtimeId,
    std::span<std::byte const> body,
    CoreVersion                coreProtocol,
    std::size_t                maxBody = Limits::MaxControlBody
);

struct DeclarationSource {
    ControlHeader                   firstHeader;
    EndpointRole                    senderRole{};
    std::uint64_t                   registryRevision{};
    std::vector<ModuleDeclaration>  modules;
    std::vector<PayloadDeclaration> payloads;
};

struct NegotiationResultSource {
    ControlHeader              firstHeader;
    CoreVersion                selectedCoreProtocol{};
    std::uint64_t              serverRegistryRevision{};
    std::uint64_t              clientRegistryRevision{};
    std::vector<ModuleResult>  modules;
    std::vector<PayloadResult> payloads;
    TranscriptDigest           transcriptDigest{};
};

[[nodiscard]] Expected<std::vector<Declaration>>
packDeclaration(DeclarationSource source, CoreVersion coreProtocol, std::size_t maxBody);

[[nodiscard]] Expected<std::vector<NegotiationResult>>
packNegotiationResult(NegotiationResultSource source, CoreVersion coreProtocol, std::size_t maxBody);

class DeclarationAssembler {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    explicit DeclarationAssembler(CoreVersion protocol = 1, std::size_t maxBody = Limits::MaxControlBody);
    ~DeclarationAssembler();

    DeclarationAssembler(DeclarationAssembler&&) noexcept;
    DeclarationAssembler& operator=(DeclarationAssembler&&) noexcept;

    DeclarationAssembler(DeclarationAssembler const&)            = delete;
    DeclarationAssembler& operator=(DeclarationAssembler const&) = delete;

    [[nodiscard]] Expected<>                  push(Declaration chunk);
    [[nodiscard]] Expected<DeclarationSource> finish();
};

class NegotiationResultAssembler {
    struct Impl;
    std::unique_ptr<Impl> mImpl;

public:
    explicit NegotiationResultAssembler(CoreVersion protocol = 1, std::size_t maxBody = Limits::MaxControlBody);
    ~NegotiationResultAssembler();

    NegotiationResultAssembler(NegotiationResultAssembler&&) noexcept;
    NegotiationResultAssembler& operator=(NegotiationResultAssembler&&) noexcept;

    NegotiationResultAssembler(NegotiationResultAssembler const&)            = delete;
    NegotiationResultAssembler& operator=(NegotiationResultAssembler const&) = delete;

    [[nodiscard]] Expected<>                        push(NegotiationResult chunk);
    [[nodiscard]] Expected<NegotiationResultSource> finish();
};

} // namespace ll::protocol::detail

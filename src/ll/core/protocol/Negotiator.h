#pragma once

#include <span>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/SessionView.h"
#include "ll/core/protocol/ControlCodec.h"
#include "ll/core/protocol/PayloadRegistryInternal.h"

namespace ll::protocol::detail {

struct NegotiationPlan {
    CoreVersion                    coreProtocol{};
    std::uint64_t                  serverRegistryRevision{};
    std::uint64_t                  clientRegistryRevision{};
    TransportLimits                limits{};
    std::vector<ModuleResult>      moduleResults;
    std::vector<PayloadResult>     payloadResults;
    std::vector<NegotiatedModule>  modules;
    std::vector<NegotiatedPayload> payloads;
};

[[nodiscard]] Expected<DeclarationSource> makeDeclaration(
    RegistrySnapshot const&   snapshot,
    EndpointRole              role,
    ControlHeader             firstHeader,
    std::span<ModuleId const> requiredModules = {}
);

[[nodiscard]] Expected<NegotiationPlan> negotiate(
    DeclarationSource const& server,
    DeclarationSource const& client,
    CoreVersion              coreProtocol,
    TransportLimits          limits
);

[[nodiscard]] Expected<>
validateNegotiationResult(NegotiationPlan const& expected, NegotiationResultSource const& received);

} // namespace ll::protocol::detail

#include "ll/core/protocol/Negotiator.h"

#include <algorithm>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <unordered_map>

#include "ll/api/protocol/Error.h"
#include "ll/core/protocol/RuntimeIdentity.h"

namespace ll::protocol::detail {

namespace negotiator_detail {

bool requiresRole(ModuleRequirement requirement, EndpointRole role) noexcept {
    switch (requirement) {
    case ModuleRequirement::Optional:
        return false;
    case ModuleRequirement::RequiredOnClient:
        return role == EndpointRole::Client;
    case ModuleRequirement::RequiredOnServer:
        return role == EndpointRole::Server;
    case ModuleRequirement::RequiredOnBoth:
        return true;
    }
    return true;
}

bool requiredModule(ModuleDeclaration const* server, ModuleDeclaration const* client) noexcept {
    return (server && server->requirement != ModuleRequirement::Optional)
        || (client && client->requirement != ModuleRequirement::Optional);
}

template <class T, class Key>
auto indexBy(std::vector<T> const& values, Key key) {
    std::map<std::string_view, T const*, std::less<>> result;
    for (auto const& value : values) result.emplace(key(value), &value);

    return result;
}

std::vector<SelectedFeature>
selectFeatures(ModuleDeclaration const& server, ModuleDeclaration const& client, bool& incompatible) {
    auto serverFeatures = indexBy(server.features, [](auto const& value) { return value.name.value(); });
    auto clientFeatures = indexBy(client.features, [](auto const& value) { return value.name.value(); });

    std::set<std::string_view, std::less<>> ids;
    std::ranges::transform(serverFeatures, std::inserter(ids, ids.end()), [](auto const& entry) {
        return entry.first;
    });
    std::ranges::transform(clientFeatures, std::inserter(ids, ids.end()), [](auto const& entry) {
        return entry.first;
    });

    std::vector<SelectedFeature> selected;
    for (auto id : ids) {
        auto serverIt = serverFeatures.find(id);
        auto clientIt = clientFeatures.find(id);

        auto const* serverFeature = serverIt == serverFeatures.end() ? nullptr : serverIt->second;
        auto const* clientFeature = clientIt == clientFeatures.end() ? nullptr : clientIt->second;
        if (!serverFeature || !clientFeature) {
            if ((serverFeature && serverFeature->required) || (clientFeature && clientFeature->required)) {
                incompatible = true;
            }

            continue;
        }

        auto version = serverFeature->versions.highestCommon(clientFeature->versions);
        if (!version) {
            if (serverFeature->required || clientFeature->required) incompatible = true;
            continue;
        }

        selected.push_back(SelectedFeature{serverFeature->name, *version});
    }

    return selected;
}

std::optional<SchemaVersion>
highestCommonSchema(std::vector<SchemaVersion> const& first, std::vector<SchemaVersion> const& second) noexcept {
    auto left  = first.rbegin();
    auto right = second.rbegin();
    while (left != first.rend() && right != second.rend()) {
        if (*left == *right) return *left;
        if (*left > *right) ++left;
        else ++right;
    }

    return std::nullopt;
}

WireFeatureDeclaration toWireFeature(FeatureDefinition const& feature) {
    return {feature.name, feature.versions, feature.required};
}

SemanticVersion toWireVersion(data::Version const& version) noexcept {
    return {version.major, version.minor, version.patch};
}

} // namespace negotiator_detail

Expected<DeclarationSource> makeDeclaration(
    RegistrySnapshot const&   snapshot,
    EndpointRole              role,
    ControlHeader             firstHeader,
    std::span<ModuleId const> requiredModules
) {
    try {
        if (role != EndpointRole::Server && !requiredModules.empty()) {
            return makeProtocolError(ProtocolErrc::InternalFailure, "client declaration policy");
        }

        DeclarationSource result{.firstHeader = firstHeader, .senderRole = role, .registryRevision = snapshot.revision};
        result.modules.reserve(snapshot.modules.size());
        result.payloads.reserve(snapshot.payloads.size());

        std::size_t featureCount{};
        for (auto const& descriptor : snapshot.modules) {
            featureCount += descriptor->definition().features.size();
            if (featureCount > Limits::MaxDeclaredFeatures) {
                return makeProtocolError(ProtocolErrc::DeclarationMalformed, "feature count");
            }

            std::vector<WireFeatureDeclaration> features;
            features.reserve(descriptor->definition().features.size());
            for (auto const& feature : descriptor->definition().features) {
                features.emplace_back(negotiator_detail::toWireFeature(feature));
            }

            result.modules.push_back(
                ModuleDeclaration{
                    descriptor->id(),
                    negotiator_detail::toWireVersion(descriptor->definition().version),
                    descriptor->definition().protocolVersions,
                    descriptor->definition().requirement,
                    std::move(features)
                }
            );
        }

        for (auto const& required : requiredModules) {
            auto declaration =
                std::ranges::find(result.modules, required, [](auto const& module) { return module.id; });
            if (declaration == result.modules.end()) {
                return makeProtocolError(ProtocolErrc::RequirementUnsatisfied, required.str());
            }

            switch (declaration->requirement) {
            case ModuleRequirement::Optional:
                declaration->requirement = ModuleRequirement::RequiredOnClient;
                break;
            case ModuleRequirement::RequiredOnServer:
                declaration->requirement = ModuleRequirement::RequiredOnBoth;
                break;
            case ModuleRequirement::RequiredOnClient:
            case ModuleRequirement::RequiredOnBoth:
                break;
            }
        }

        for (auto const& descriptor : snapshot.payloads) {
            result.payloads.push_back(
                PayloadDeclaration{
                    descriptor->id(),
                    descriptor->runtimeId(),
                    descriptor->definition().direction,
                    descriptor->definition().requirement,
                    descriptor->definition().schemas,
                    descriptor->definition().maxEncodedSize
                }
            );
        }

        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<NegotiationPlan> negotiate(
    DeclarationSource const& server,
    DeclarationSource const& client,
    CoreVersion              coreProtocol,
    TransportLimits          limits
) {
    try {
        if (server.senderRole != EndpointRole::Server || client.senderRole != EndpointRole::Client
            || coreProtocol == 0) {
            return makeProtocolError(ProtocolErrc::DeclarationMalformed, "declaration roles");
        }

        NegotiationPlan plan{
            .coreProtocol           = coreProtocol,
            .serverRegistryRevision = server.registryRevision,
            .clientRegistryRevision = client.registryRevision,
            .limits                 = limits,
        };

        auto serverModules =
            negotiator_detail::indexBy(server.modules, [](auto const& value) { return value.id.value(); });
        auto clientModules =
            negotiator_detail::indexBy(client.modules, [](auto const& value) { return value.id.value(); });

        std::set<std::string_view, std::less<>> moduleIds;
        std::ranges::transform(serverModules, std::inserter(moduleIds, moduleIds.end()), [](auto const& entry) {
            return entry.first;
        });
        std::ranges::transform(clientModules, std::inserter(moduleIds, moduleIds.end()), [](auto const& entry) {
            return entry.first;
        });

        std::unordered_map<std::string, bool> enabledModules;
        for (auto id : moduleIds) {
            auto serverIt = serverModules.find(id);
            auto clientIt = clientModules.find(id);

            auto const* serverModule = serverIt == serverModules.end() ? nullptr : serverIt->second;
            auto const* clientModule = clientIt == clientModules.end() ? nullptr : clientIt->second;
            if (!serverModule && !clientModule) {
                return makeProtocolError(ProtocolErrc::InternalFailure, "module index invariant violated");
            }

            auto const& identity = serverModule ? serverModule->id : clientModule->id;

            if (!serverModule || !clientModule) {
                auto const missingRole = serverModule ? EndpointRole::Client : EndpointRole::Server;
                auto const required =
                    (serverModule && negotiator_detail::requiresRole(serverModule->requirement, missingRole))
                    || (clientModule && negotiator_detail::requiresRole(clientModule->requirement, missingRole));

                if (required) return makeProtocolError(ProtocolErrc::RequirementUnsatisfied, identity.str());

                plan.moduleResults.push_back(
                    {identity, NegotiationStatus::Disabled, 0, WireErrorCode::RequirementUnsatisfied, {}}
                );

                enabledModules.emplace(identity.str(), false);
                continue;
            }

            auto selectedProtocol = serverModule->protocolVersions.highestCommon(clientModule->protocolVersions);
            bool incompatibleFeature{};

            auto features = negotiator_detail::selectFeatures(*serverModule, *clientModule, incompatibleFeature);
            if (!selectedProtocol || incompatibleFeature) {
                if (negotiator_detail::requiredModule(serverModule, clientModule)) {
                    return makeProtocolError(ProtocolErrc::RequirementUnsatisfied, identity.str());
                }

                plan.moduleResults.push_back(
                    {identity, NegotiationStatus::Disabled, 0, WireErrorCode::RequirementUnsatisfied, {}}
                );

                enabledModules.emplace(identity.str(), false);
                continue;
            }

            plan.moduleResults.push_back(
                {identity, NegotiationStatus::Enabled, *selectedProtocol, WireErrorCode::None, features}
            );

            std::vector<NegotiatedFeature> publicFeatures;
            publicFeatures.reserve(features.size());

            for (auto const& feature : features) {
                publicFeatures.push_back({feature.name, feature.version});
            }

            plan.modules.push_back({identity, *selectedProtocol, std::move(publicFeatures)});
            enabledModules.emplace(identity.str(), true);
        }

        auto serverPayloads =
            negotiator_detail::indexBy(server.payloads, [](auto const& value) { return value.id.value(); });
        auto clientPayloads =
            negotiator_detail::indexBy(client.payloads, [](auto const& value) { return value.id.value(); });

        std::set<std::string_view, std::less<>> payloadIds;

        std::unordered_map<std::uint64_t, std::string_view> runtimeOwners;
        for (auto const& declaration : {&server.payloads, &client.payloads}) {
            for (auto const& payload : *declaration) {
                payloadIds.emplace(payload.id.value());
                if (payload.runtimeId != payloadRuntimeId(payload.id)) {
                    return makeProtocolError(ProtocolErrc::IdentityCollision, payload.id.str());
                }

                auto [owner, inserted] = runtimeOwners.emplace(payload.runtimeId, payload.id.value());
                if (!inserted && owner->second != payload.id.value()) {
                    return makeProtocolError(ProtocolErrc::IdentityCollision, payload.id.str());
                }
            }
        }

        std::set<std::string, std::less<>> modulesDisabledByPayload;
        for (auto id : payloadIds) {
            auto serverIt = serverPayloads.find(id);
            auto clientIt = clientPayloads.find(id);

            auto const* serverPayload = serverIt == serverPayloads.end() ? nullptr : serverIt->second;
            auto const* clientPayload = clientIt == clientPayloads.end() ? nullptr : clientIt->second;
            if (!serverPayload && !clientPayload) {
                return makeProtocolError(ProtocolErrc::InternalFailure, "payload index invariant violated");
            }

            auto const& identity = serverPayload ? serverPayload->id : clientPayload->id;

            auto moduleName    = std::string{identity.module()};
            bool moduleEnabled = enabledModules.contains(moduleName) && enabledModules[moduleName];
            bool compatible    = moduleEnabled && serverPayload && clientPayload;

            std::optional<SchemaVersion> schema;
            if (compatible) {
                compatible = serverPayload->runtimeId == clientPayload->runtimeId
                          && serverPayload->direction == clientPayload->direction;

                if (serverPayload->runtimeId != clientPayload->runtimeId) {
                    return makeProtocolError(ProtocolErrc::IdentityCollision, identity.str());
                }

                schema      = negotiator_detail::highestCommonSchema(serverPayload->schemas, clientPayload->schemas);
                compatible &= schema.has_value();
            }

            bool required = (serverPayload && serverPayload->requirement == PayloadRequirement::Required)
                         || (clientPayload && clientPayload->requirement == PayloadRequirement::Required);
            if (!compatible) {
                if (required && moduleEnabled) modulesDisabledByPayload.emplace(moduleName);

                plan.payloadResults.push_back(
                    {identity,
                     serverPayload ? serverPayload->runtimeId : clientPayload->runtimeId,
                     serverPayload ? serverPayload->direction : clientPayload->direction,
                     NegotiationStatus::Disabled,
                     WireErrorCode::RequirementUnsatisfied,
                     0,
                     0}
                );
                continue;
            }

            auto maximum = std::min(
                {serverPayload->maxEncodedSize,
                 clientPayload->maxEncodedSize,
                 limits.maxPayloadBody,
                 Limits::MaxPayloadBody}
            );
            plan.payloadResults.push_back(
                {identity,
                 serverPayload->runtimeId,
                 serverPayload->direction,
                 NegotiationStatus::Enabled,
                 WireErrorCode::None,
                 *schema,
                 maximum}
            );
            plan.payloads.push_back({identity, serverPayload->runtimeId, serverPayload->direction, *schema, maximum});
        }

        if (!modulesDisabledByPayload.empty()) {
            for (auto const& moduleId : modulesDisabledByPayload) {
                auto result =
                    std::ranges::find(plan.moduleResults, moduleId, [](auto const& value) { return value.id.str(); });
                if (result == plan.moduleResults.end()) continue;

                auto serverModule = serverModules.find(moduleId);
                auto clientModule = clientModules.find(moduleId);
                if (negotiator_detail::requiredModule(
                        serverModule == serverModules.end() ? nullptr : serverModule->second,
                        clientModule == clientModules.end() ? nullptr : clientModule->second
                    )) {
                    return makeProtocolError(ProtocolErrc::RequirementUnsatisfied, moduleId);
                }

                result->status           = NegotiationStatus::Disabled;
                result->selectedProtocol = 0;
                result->reason           = WireErrorCode::RequirementUnsatisfied;
                result->features.clear();

                std::erase_if(plan.modules, [&](auto const& value) { return value.id.str() == moduleId; });
                std::erase_if(plan.payloads, [&](auto const& value) { return value.id.module() == moduleId; });

                for (auto& payload : plan.payloadResults) {
                    if (payload.id.module() == moduleId) {
                        payload.status                 = NegotiationStatus::Disabled;
                        payload.reason                 = WireErrorCode::RequirementUnsatisfied;
                        payload.selectedSchema         = 0;
                        payload.selectedMaxEncodedSize = 0;
                    }
                }
            }
        }

        return plan;
    } catch (...) {
        return makeExceptionError();
    }
}

Expected<> validateNegotiationResult(NegotiationPlan const& expected, NegotiationResultSource const& received) {
    if (received.selectedCoreProtocol != expected.coreProtocol
        || received.serverRegistryRevision != expected.serverRegistryRevision
        || received.clientRegistryRevision != expected.clientRegistryRevision
        || received.modules != expected.moduleResults || received.payloads != expected.payloadResults) {
        return makeProtocolError(ProtocolErrc::DigestMismatch, "negotiation result differs");
    }

    return {};
}

} // namespace ll::protocol::detail

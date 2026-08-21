#include "ll/api/protocol/Server.h"

#include <map>
#include <tuple>

#include "ll/core/protocol/DescriptorState.h"
#include "ll/core/protocol/ProtocolSession.h"
#include "ll/core/protocol/RegistrationLease.h"

namespace ll::protocol::server::detail {

namespace server_fanout_detail {

using ProtocolSession  = ll::protocol::detail::ProtocolSession;
using PreparedOutbound = ll::protocol::detail::PreparedOutbound;

struct Target {
    std::size_t                      recipientIndex{};
    SessionView                      view;
    std::shared_ptr<ProtocolSession> session;
    std::uint64_t                    generation{};
    PreparedOutbound                 prepared;
};

using CohortKey = std::tuple<SchemaVersion, std::uint64_t, std::uint32_t>;

Error cloneError(Error& source) noexcept {
    if (source.isA<IdentityErrorInfo>()) {
        auto& info = source.as<IdentityErrorInfo>();
        return Error{makeIdentityError(info.code, info.context)};
    }
    if (source.isA<RegistrationErrorInfo>()) {
        auto& info = source.as<RegistrationErrorInfo>();
        return Error{makeRegistrationError(info.code, info.context)};
    }
    if (source.isA<CodecErrorInfo>()) {
        auto& info = source.as<CodecErrorInfo>();
        return Error{makeCodecError(info.code, info.context)};
    }
    if (source.isA<SessionErrorInfo>()) {
        auto& info = source.as<SessionErrorInfo>();
        return Error{makeSessionError(info.code, info.context)};
    }
    if (source.isA<ProtocolErrorInfo>()) {
        auto& info = source.as<ProtocolErrorInfo>();
        return Error{makeProtocolError(info.code, info.context)};
    }
    if (source.isA<LifecycleErrorInfo>()) {
        auto& info = source.as<LifecycleErrorInfo>();
        return Error{makeLifecycleError(info.code, info.context)};
    }
    if (source.isA<TransportErrorInfo>()) {
        auto& info = source.as<TransportErrorInfo>();
        return Error{makeTransportError(info.code, info.context)};
    }

    return Error{makeStringError(source.message())};
}

} // namespace server_fanout_detail

Expected<> ServerAccess::sendErased(
    std::span<Session const>     sessions,
    std::span<std::size_t const> recipientIndices,
    std::type_index              type,
    void const*                  payload,
    FanoutResult&                result,
    std::size_t                  maximumReportedFailures
) noexcept {
    try {
        if (sessions.size() != recipientIndices.size() || payload == nullptr) {
            return makeProtocolError(ProtocolErrc::InternalFailure, "invalid fan-out input");
        }

        std::map<server_fanout_detail::CohortKey, std::vector<server_fanout_detail::Target>> cohorts;
        for (std::size_t index = 0; index < sessions.size(); ++index) {
            auto session = ll::protocol::detail::SessionAccess::lock(sessions[index]);

            auto generation = ll::protocol::detail::SessionAccess::generation(sessions[index]);
            auto view       = sessions[index].view();
            if (!session) {
                recordFanoutFailure(
                    result,
                    recipientIndices[index],
                    std::move(view),
                    makeSessionError(SessionErrc::Closed),
                    maximumReportedFailures
                );
                continue;
            }

            auto prepared = session->prepareOutbound(type, generation);
            if (!prepared) {
                recordFanoutFailure(
                    result,
                    recipientIndices[index],
                    std::move(view),
                    std::move(prepared.error()),
                    maximumReportedFailures
                );
                continue;
            }

            auto key = server_fanout_detail::CohortKey{
                prepared->binding.payload.schema,
                prepared->binding.descriptorGeneration,
                prepared->binding.payload.maxEncodedSize,
            };
            cohorts[key].push_back({
                recipientIndices[index],
                std::move(view),
                std::move(session),
                generation,
                std::move(*prepared),
            });
        }

        for (auto& [_, targets] : cohorts) {
            auto& first = targets.front();

            auto lease = ll::protocol::detail::RegistrationLease::acquire(
                first.prepared.state,
                first.prepared.binding.descriptorGeneration
            );
            if (!lease) {
                auto& error = lease.error();
                for (auto& target : targets) {
                    recordFanoutFailure(
                        result,
                        target.recipientIndex,
                        std::move(target.view),
                        server_fanout_detail::cloneError(error),
                        maximumReportedFailures
                    );
                }

                continue;
            }

            auto body = first.prepared.state->encode(
                payload,
                first.prepared.binding.payload.schema,
                first.prepared.binding.payload.maxEncodedSize
            );
            if (!body) {
                auto& error = body.error();
                for (auto& target : targets) {
                    recordFanoutFailure(
                        result,
                        target.recipientIndex,
                        std::move(target.view),
                        server_fanout_detail::cloneError(error),
                        maximumReportedFailures
                    );
                }

                continue;
            }

            for (auto& target : targets) {
                auto sent = target.session->sendPrepared(target.prepared, *body, target.generation);
                if (sent) {
                    ++result.sent;
                } else {
                    recordFanoutFailure(
                        result,
                        target.recipientIndex,
                        std::move(target.view),
                        std::move(sent.error()),
                        maximumReportedFailures
                    );
                }
            }
        }

        return {};
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol::server::detail

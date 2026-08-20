#pragma once

#include <algorithm>
#include <cstddef>
#include <optional>
#include <span>
#include <typeindex>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/protocol/Error.h"
#include "ll/api/protocol/Limits.h"
#include "ll/api/protocol/PayloadRegistry.h"
#include "ll/api/protocol/Session.h"

#include "mc/network/NetworkIdentifierWithSubId.h"

namespace ll::protocol::server {

struct FanoutOptions {
    std::size_t maxReportedFailures{64};
};

struct FanoutFailure {
    std::size_t                recipientIndex{};
    std::optional<SessionView> session;
    Error                      error;
};

struct FanoutResult {
    std::size_t                requested{};
    std::size_t                attempted{};
    std::size_t                sent{};
    std::size_t                failed{};
    std::vector<FanoutFailure> failures;
    bool                       failuresTruncated{};
};

LLNDAPI Expected<Session> getSession(NetworkIdentifierWithSubId const& recipient) noexcept;

} // namespace ll::protocol::server

namespace ll::protocol::detail {

LLNDAPI Expected<Session> resolveServerSession(NetworkIdentifierWithSubId const& recipient) noexcept;
LLNDAPI Expected<std::vector<Session>> snapshotServerSessions() noexcept;

LLNDAPI Expected<> validateServerFanoutThread() noexcept;
LLNDAPI Expected<> sendServerFanout(
    std::span<Session const>     sessions,
    std::span<std::size_t const> recipientIndices,
    std::type_index              type,
    void const*                  payload,
    server::FanoutResult&        result,
    std::size_t                  maximumReportedFailures
) noexcept;

inline void recordFanoutFailure(
    server::FanoutResult&      result,
    std::size_t                index,
    std::optional<SessionView> session,
    Error                      error,
    std::size_t                maximum
) {
    ++result.failed;
    if (result.failures.size() < maximum) {
        result.failures.push_back({index, std::move(session), std::move(error)});
    } else {
        result.failuresTruncated = true;
    }
}

template <class T>
Expected<> validateServerPayload() noexcept {
    auto descriptor = PayloadRegistry::getInstance().findPayload<T>();
    if (!descriptor) return makeSessionError(SessionErrc::NotNegotiated);

    if (descriptor->definition().direction != PayloadDirection::ServerToClient) {
        return makeSessionError(SessionErrc::WrongDirection, descriptor->id().str());
    }

    return {};
}

} // namespace ll::protocol::detail

namespace ll::protocol::server {

template <class T>
Expected<FanoutResult>
sendTo(std::span<NetworkIdentifierWithSubId const> recipients, T const& payload, FanoutOptions options = {}) noexcept {
    try {
        if (auto valid = detail::validateServerPayload<T>(); !valid) return forwardError(valid.error());
        if (auto thread = detail::validateServerFanoutThread(); !thread) return forwardError(thread.error());

        FanoutResult result{.requested = recipients.size()};

        auto maximum = std::min(options.maxReportedFailures, Limits::MaxReportedFanoutFailures);
        result.failures.reserve(std::min(maximum, recipients.size()));

        std::vector<Session>     sessions;
        std::vector<std::size_t> indices;

        sessions.reserve(recipients.size());
        indices.reserve(recipients.size());

        for (std::size_t index = 0; index < recipients.size(); ++index) {
            auto resolved = detail::resolveServerSession(recipients[index]);
            if (!resolved) {
                detail::recordFanoutFailure(result, index, std::nullopt, std::move(resolved.error()), maximum);
                continue;
            }

            ++result.attempted;
            sessions.emplace_back(std::move(*resolved));
            indices.emplace_back(index);
        }

        if (auto sent = detail::sendServerFanout(sessions, indices, typeid(T), &payload, result, maximum); !sent) {
            return forwardError(sent.error());
        }

        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

template <class T>
Expected<FanoutResult> broadcast(T const& payload, FanoutOptions options = {}) noexcept {
    try {
        if (auto valid = detail::validateServerPayload<T>(); !valid) return forwardError(valid.error());
        if (auto thread = detail::validateServerFanoutThread(); !thread) return forwardError(thread.error());

        auto sessions = detail::snapshotServerSessions();
        if (!sessions) return forwardError(sessions.error());

        FanoutResult result{.requested = sessions->size(), .attempted = sessions->size()};

        auto maximum = std::min(options.maxReportedFailures, Limits::MaxReportedFanoutFailures);
        result.failures.reserve(std::min(maximum, sessions->size()));

        std::vector<std::size_t> indices(sessions->size());
        for (std::size_t index = 0; index < indices.size(); ++index) {
            indices[index] = index;
        }

        if (auto sent = detail::sendServerFanout(*sessions, indices, typeid(T), &payload, result, maximum); !sent) {
            return forwardError(sent.error());
        }

        return result;
    } catch (...) {
        return makeExceptionError();
    }
}

} // namespace ll::protocol::server

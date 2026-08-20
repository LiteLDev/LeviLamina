#pragma once

#include <memory>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/protocol/Session.h"

struct NetworkIdentifierWithSubId;

namespace ll::protocol::detail {

class ServerSessionSource {
public:
    virtual ~ServerSessionSource() = default;

    [[nodiscard]] virtual bool              isOnEndpointThread() const noexcept                           = 0;
    [[nodiscard]] virtual Expected<Session> resolve(NetworkIdentifierWithSubId const& recipient) noexcept = 0;
    [[nodiscard]] virtual Expected<std::vector<Session>> snapshotActive() noexcept                        = 0;
};

[[nodiscard]] Expected<> setServerSessionSource(std::shared_ptr<ServerSessionSource> source) noexcept;

void clearServerSessionSource(ServerSessionSource const& source) noexcept;

} // namespace ll::protocol::detail

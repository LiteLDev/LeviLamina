#pragma once

#include <functional>
#include <memory>
#include <span>

namespace ll::protocol::detail {

template <class Connection, class Identity, class Projection>
[[nodiscard]] Connection* findLiveConnection(
    std::span<std::unique_ptr<Connection> const> connections,
    Identity const&                              identity,
    Projection                                   projection
) {
    for (auto const& connection : connections) {
        if (connection && std::invoke(projection, *connection) == identity) return connection.get();
    }
    
    return nullptr;
}

} // namespace ll::protocol::detail

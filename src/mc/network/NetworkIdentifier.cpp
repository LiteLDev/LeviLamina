#include "mc/network/NetworkIdentifier.h"
#include "mc/deps/raknet/RakNet.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/SystemAddress.h"

#include "ll/api/service/Bedrock.h"

std::string NetworkIdentifier::getIPAndPort() const {
    return ll::service::getRakPeer()
        .and_then([&](auto& peer) -> std::optional<std::string> {
            auto address = peer.GetSystemAddressFromGuid(mGuid);
            if (address != RakNet::UNASSIGNED_SYSTEM_ADDRESS()) {
                auto ipAndPort = address.ToString('|');
                auto result =
                    std::ranges::views::split(ipAndPort, '|')
                    | std::views::transform([](auto&& part) { return std::string_view{part.begin(), part.end()}; })
                    | std::views::take(2) | std::ranges::to<std::vector>();
                if (result.size() != 2) {
                    return std::nullopt;
                }
                auto& ip   = result[0];
                auto& port = result[1];
                if (ip.find(':') != std::string::npos) {
                    // IPv6 address
                    return fmt::format("[{0}]:{1}", ip, port);
                }
                return fmt::format("{0}:{1}", ip, port);
            }
            return std::nullopt;
        })
        .value_or("127.0.0.1:65535");
}

#include "ll/api/base/ScopedValue.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/CompressUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/motd/MotdSerializer.h"
#include "mc/deps/nether_net/signaling/http/HttpConnection.h"
#include "mc/deps/nether_net/signaling/http/HttpRequest.h"
#include "mc/deps/nether_net/signaling/http/HttpResponse.h"
#include "mc/deps/nether_net/signaling/http/HttpSignalingServer.h"
#include "mc/external/webrtc/PhysicalSocket.h"
#include <nlohmann/json.hpp>

namespace ll {
namespace motd {

class MotdManager {
public:
    struct HttpSignalingOnRequestHook;
    struct HttpConnectionReadHook;
    struct HttpConnectionSocketRecvHook;

private:
    memory::HookRegistrar<HttpSignalingOnRequestHook, HttpConnectionReadHook, HttpConnectionSocketRecvHook> mHooks;
    mutable std::mutex                                                                                      mMutex;
    SmallDenseMap<std::string, nlohmann::json>                                                              mReadmes;

    inline static thread_local webrtc::Socket*                     currentSocket{};
    inline static thread_local std::string_view                    currentLanguage{};
    inline static ConcurrentDenseMap<webrtc::Socket*, std::string> requestBuffers{};

public:
    static MotdManager& getInstance() {
        static MotdManager instance;
        return instance;
    }

public:
    bool setReadme(MotdPayload const& readme, std::string_view language) {
        auto json = reflection::serialize<nlohmann::json>(readme, MotdKeyFormatter{});
        if (!json) return false;

        auto code = normalizeLocaleCode(language);

        std::lock_guard lock{mMutex};
        mReadmes.insert_or_assign(code, std::move(*json));
        return true;
    }

    std::optional<nlohmann::json> getReadme(std::string_view language) const {
        auto code = normalizeLocaleCode(language);

        std::lock_guard lock{mMutex};
        if (auto readme = find(mReadmes, code)) return readme;
        if (auto readme = find(mReadmes, baseLocale(code))) return readme;
        if (auto readme = find(mReadmes, "en-us")) return readme;
        if (auto readme = find(mReadmes, "en")) return readme;
        if (mReadmes.empty()) return std::nullopt;
        return mReadmes.begin()->second;
    }

    void clearReadme(std::string_view language) {
        auto code = normalizeLocaleCode(language);

        std::lock_guard lock{mMutex};
        mReadmes.erase(code);
    }

    void clearAllReadmes() {
        std::lock_guard lock{mMutex};
        mReadmes.clear();
    }

private:
    static std::string baseLocale(std::string_view code) { //
        return std::string{code.substr(0, code.find('-'))};
    }

    template <typename Map>
    static std::optional<nlohmann::json> find(Map const& map, std::string_view code) {
        auto iter = map.find(std::string{code});
        if (iter == map.end()) return std::nullopt;
        return iter->second;
    }

    static std::string normalizeLocaleCode(std::string_view language) {
        std::string code{language};
        for (auto& c : code) {
            if (c == '_') {
                c = '-';
            } else if (c >= 'A' && c <= 'Z') {
                c = static_cast<char>(c - 'A' + 'a');
            }
        }
        return code;
    }
};

LL_TYPE_INSTANCE_HOOK(
    MotdManager::HttpSignalingOnRequestHook,
    HookPriority::Normal,
    NetherNet::HttpSignalingServer,
    &HttpSignalingServer::$onRequest,
    Bedrock::Threading::Async<Bedrock::Result<NetherNet::HttpResponse>>,
    NetherNet::HttpRequest request
) {
    static DenseSet<HttpSignalingServer*> wrappedServers;
    if (wrappedServers.insert(this).second) {
        auto& callback = *thisFor<HttpServer>()->mGetServerInfo;
        callback       = [original = std::move(callback)]() mutable -> Bedrock::Result<std::string> {
            auto result = original();
            if (currentLanguage.empty()) return result;

            auto readme = getInstance().getReadme(currentLanguage);
            if (!readme || !result) return result;

            auto json = nlohmann::json::parse(*result, nullptr, false);
            if (json.is_discarded() || !json.is_object()) return result;

            json["levilamina"]["motd"] = std::move(*readme);
            return json.dump();
        };
    }

    std::string language;
    requestBuffers.if_contains(currentSocket, [&](auto& pair) { language = pair.second; });

    currentLanguage = {};
    ScopedValue languageScope{currentLanguage, std::string_view{language}};

    auto result = origin(std::move(request));
    requestBuffers.erase(currentSocket);
    return result;
}

LL_TYPE_INSTANCE_HOOK(
    MotdManager::HttpConnectionReadHook,
    HookPriority::Highest,
    NetherNet::HttpConnection,
    &NetherNet::HttpConnection::_onReadEvent,
    void,
    webrtc::Socket* socket
) {
    ScopedValue socketScope{currentSocket, socket};
    origin(socket);
}

LL_TYPE_INSTANCE_HOOK(
    MotdManager::HttpConnectionSocketRecvHook,
    HookPriority::Highest,
    webrtc::PhysicalSocket,
    // &webrtc::PhysicalSocket::$Recv,
    "40 53 55 56 57 48 83 EC 78"_sig,
    int,
    void*  buffer,
    uint64 capacity,
    int64* timestamp
) {
    auto received = origin(buffer, capacity, timestamp);
    if (received > 0 && currentSocket == this) {
        std::string_view           view{static_cast<char const*>(buffer), static_cast<size_t>(received)};
        constexpr std::string_view prefix{"Accept-Language: "};

        if (auto start = view.find(prefix); start != std::string_view::npos) {
            auto valueStart = start + prefix.size();

            if (auto end = view.find('\n', valueStart); end != std::string_view::npos) {
                auto language = view.substr(valueStart, end - valueStart);
                while (!language.empty() && (language.front() == ' ' || language.front() == '\t')) {
                    language.remove_prefix(1);
                }
                while (!language.empty()
                       && (language.back() == ' ' || language.back() == '\t' || language.back() == '\r')) {
                    language.remove_suffix(1);
                }

                if (!language.empty()) requestBuffers.insert_or_assign(this, language);
            }
        }
    }
    return received;
}


} // namespace motd

bool setServerReadme(motd::MotdPayload const& readme, std::string_view language) {
    return motd::MotdManager::getInstance().setReadme(readme, language);
}

void clearServerReadme(std::string_view language) { motd::MotdManager::getInstance().clearReadme(language); }

void clearAllServerReadme() { motd::MotdManager::getInstance().clearAllReadmes(); }

} // namespace ll
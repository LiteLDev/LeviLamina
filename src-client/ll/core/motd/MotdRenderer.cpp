#include "ll/api/base/Containers.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/i18n/I18n.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/service/Bedrock.h"
#include "ll/api/service/ServerInfo.h"
#include "ll/api/thread/ThreadPoolExecutor.h"
#include "ll/api/utils/Base64Utils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/motd/MotdPageScript.h"
#include "ll/core/motd/MotdSerializer.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/gui/oreui/Scene.h"
#include "mc/client/gui/oreui/routing/Router.h"
#include "mc/client/gui/oreui/views/View.h"
#include "mc/client/services/Response.h"
#include "mc/client/world/NetworkWorldInfo.h"
#include "mc/client/world/WorldSystem.h"
#include "mc/client/world/lists/ExternalServerWorldList.h"
#include "mc/deps/core/http/HeaderCollection.h"
#include "mc/deps/core/http/LibHttpClientImpl.h"
#include "mc/deps/core/http/Request.h"
#include "mc/deps/core/http/Url.h"
#include <cpr/cpr.h>
#include <ctre/ctre-unicode.hpp>
#include <nlohmann/json.hpp>

namespace ll::motd {

class MotdRenderer {
public:
    struct HttpSendHook;
    struct ClientUpdateHook;
    struct CachedImage {
        std::string                           mUrl;
        std::chrono::steady_clock::time_point mLastAccess;
        SmallDenseSet<std::string>            mReadmes;
        std::optional<std::string>            mImage;
    };
    struct CacheReadme {
        std::optional<motd::MotdPayload>      mData;
        std::string                           mScript;
        std::string                           mUrl;
        size_t                                mIndex{};
        std::chrono::steady_clock::time_point mLastAccess;
        uint64                                mRevision{};
        uint64                                mPushedRevision{};
    };
    struct PendingResponse {
        std::string       mAddress;
        motd::MotdPayload mData;
    };

private:
    static constexpr size_t                                             GamefaceExecuteScriptSlot = 62;
    static constexpr size_t                                             MaxRemoteImageBytes       = 10u * 1024u * 1024u;
    static constexpr auto                                               ImageCacheTtl  = std::chrono::minutes{1};
    static constexpr auto                                               ReadmeCacheTtl = std::chrono::minutes{1};
    inline static memory::HookRegistrar<HttpSendHook, ClientUpdateHook> mHooks{};

    thread::ThreadPoolExecutor mPool{"ll_motd_thread_pool", 4}; // 1个检查过期 3个下载
    ConcurrentDenseMap<std::string_view, std::shared_ptr<CachedImage>> mImageCache;
    ConcurrentDenseMap<std::string_view, std::shared_ptr<CacheReadme>> mReadmeCache;
    ConcurrentQueue<std::shared_ptr<CacheReadme>>                      mPushRequests;
    ConcurrentQueue<PendingResponse>                                   mPendingResponses;
    std::atomic_uint64_t                                               mGeneration{};

private:
    uint64 nextGeneration() { return mGeneration.fetch_add(1, std::memory_order_relaxed) + 1; }

    MotdRenderer() {
        ll::coro::keepThis([&]() -> ll::coro::CoroTask<> {
            while (true) {
                co_await std::chrono::seconds{5};
                auto now = std::chrono::steady_clock::now();
                for (auto index : std::views::iota(0ull, decltype(mImageCache)::subcnt())) {
                    mImageCache.with_submap_m(index, [&](decltype(mImageCache)::EmbeddedSet& inner) {
                        for (auto it = inner.begin(); it != inner.end();) {
                            if (now - it->second->mLastAccess >= ImageCacheTtl) it = inner.erase(it);
                            else ++it;
                        }
                    });
                }
                for (auto index : std::views::iota(0ull, decltype(mReadmeCache)::subcnt())) {
                    mReadmeCache.with_submap_m(index, [&](decltype(mReadmeCache)::EmbeddedSet& inner) {
                        for (auto& [_, cache] : inner) {
                            if (cache->mRevision != cache->mPushedRevision
                                || now - cache->mLastAccess < ReadmeCacheTtl) {
                                continue;
                            }
                            cache->mData.reset();
                            cache->mScript.clear();
                            cache->mRevision = nextGeneration();
                            mPushRequests.enqueue(cache);
                        }
                    });
                }
            }
        }).launch(mPool);
    }

private:
    std::optional<std::string> getOrDownloadImage(std::string_view url, std::string_view address) {
        std::optional<std::string> result;
        mImageCache.lazy_emplace_l(
            url,
            [&](decltype(mImageCache)::value_type& pair) {
                pair.second->mLastAccess = std::chrono::steady_clock::now();
                pair.second->mReadmes.insert(std::string{address});
                result = pair.second->mImage;
            },
            [&](decltype(mImageCache)::constructor const& ctor) {
                // clang-format off
                auto cache = std::make_shared<CachedImage>(
                    std::string{url},
                    std::chrono::steady_clock::now(),
                    decltype(CachedImage::mReadmes){std::string{address}}
                );
                // clang-format on
                mPool.execute([this, cache]() {
                    std::string bytes;
                    bytes.reserve(64u * 1024u);

                    cpr::Session session;
                    session.SetUrl(cpr::Url{cache->mUrl});
                    session.SetHeader(
                        cpr::Header{
                            {"Accept", "image/png,image/jpeg,image/gif,image/webp,image/*"}
                    }
                    );
                    session.SetConnectTimeout({std::chrono::seconds{1}});
                    session.SetTimeout({std::chrono::seconds{10}});
                    auto response = session.Download(cpr::WriteCallback{[&](std::string_view chunk, intptr_t) -> bool {
                        if (chunk.size() > MaxRemoteImageBytes - bytes.size()) return false;
                        bytes.append(chunk);
                        return true;
                    }});

                    if (response.error.code != cpr::ErrorCode::OK || response.status_code < 200
                        || response.status_code >= 300 || bytes.empty()) {
                        mImageCache.erase_if(cache->mUrl, [&](decltype(mImageCache)::value_type& pair) {
                            return pair.second == cache;
                        });
                    } else if (auto mime = imageMimeType(bytes)) {
                        SmallDenseSet<std::string> readmes;
                        mImageCache.modify_if(cache->mUrl, [&](decltype(mImageCache)::value_type& pair) {
                            pair.second->mImage =
                                fmt::format("data:{0};base64,{1}", *mime, base64_utils::encode(bytes));
                            readmes = pair.second->mReadmes;
                        });
                        for (auto const& address : readmes) refreshReadme(address);
                    }
                });
                ctor(std::string_view{cache->mUrl}, std::move(cache));
            }
        );
        return result;
    }

    static std::optional<std::string> imageMimeType(std::string_view bytes) {
        if (bytes.starts_with("\x89PNG\r\n\x1a\n")) return "image/png";
        if (bytes.starts_with("\xFF\xD8\xFF")) return "image/jpeg";
        if (bytes.starts_with("GIF87a") || bytes.starts_with("GIF89a")) return "image/gif";
        if (bytes.size() >= 12 && bytes.starts_with("RIFF") && bytes.substr(8, 4) == "WEBP") {
            return "image/webp";
        }
        return std::nullopt;
    }

    static std::optional<std::string>
    makePageUpdate(std::string_view address, size_t index, motd::MotdPayload const& payload) {
        auto data = ll::reflection::serialize<nlohmann::json>(payload, MotdKeyFormatter{});
        if (!data) return std::nullopt;
        (*data)["serverAddress"] = address;
        (*data)["serverIndex"]   = index;
        return "if (window.__levilaminaMotd) { window.__levilaminaMotd.update(" + data->dump(-1, ' ', true) + "); }";
    }

    static std::string makePageRemoval(std::string const& address) {
        return "if (window.__levilaminaMotd) { window.__levilaminaMotd.remove("
             + nlohmann::json(address).dump(-1, ' ', true) + "); }";
    }

    std::optional<uint64> publishReadme(std::string_view address, size_t index, motd::MotdPayload data) {
        auto script = makePageUpdate(address, index, data);
        if (!script) return std::nullopt;

        auto                         now      = std::chrono::steady_clock::now();
        auto                         revision = nextGeneration();
        std::shared_ptr<CacheReadme> cache;
        mReadmeCache.lazy_emplace_l(
            address,
            [&](decltype(mReadmeCache)::value_type& pair) {
                cache                  = pair.second;
                cache->mData           = std::move(data);
                cache->mScript         = std::move(*script);
                cache->mIndex          = index;
                cache->mLastAccess     = now;
                cache->mRevision       = revision;
                cache->mPushedRevision = 0;
            },
            [&](decltype(mReadmeCache)::constructor const& ctor) {
                cache = std::make_shared<CacheReadme>(
                    CacheReadme{std::move(data), std::move(*script), std::string{address}, index, now, revision}
                );
                ctor(cache->mUrl, cache);
            }
        );
        mPushRequests.enqueue(cache);
        return revision;
    }

    bool resolveImages(motd::MotdPayload& data, std::string_view address) {
        auto resolveImage = [&](motd::Image& image) {
            if (!image.data.starts_with("http://") && !image.data.starts_with("https://")) return false;
            auto result = getOrDownloadImage(image.data, address);
            if (!result || image.data == *result) return false;
            image.data = std::move(*result);
            return true;
        };

        std::function<bool(motd::Node&)> resolveNode;
        resolveNode = [&](motd::Node& node) {
            bool changed = std::visit(
                ll::Overloaded{
                    [](std::vector<motd::Span>&) { return false; },
                    [&](motd::Image& image) { return resolveImage(image); },
                    [&](motd::Carousel& carousel) {
                        bool changed = false;
                        for (auto& image : carousel.images) changed |= resolveImage(image);
                        return changed;
                    }
                },
                node.content
            );
            for (auto& child : node.children) changed |= resolveNode(child);
            return changed;
        };

        bool changed = resolveNode(data.root);
        if (data.icon) changed |= resolveImage(*data.icon);
        if (data.readmeBackground) changed |= resolveImage(*data.readmeBackground);
        if (data.hero) {
            for (auto& image : data.hero->images) changed |= resolveImage(image);
            for (auto& layer : data.hero->layers) changed |= resolveImage(layer.image);
        }
        return changed;
    }

    void refreshReadme(std::string const& address) {
        std::shared_ptr<CacheReadme> cache;
        mReadmeCache.if_contains(address, [&](decltype(mReadmeCache)::value_type const& pair) { cache = pair.second; });
        if (!cache || !cache->mData) return;

        if (!resolveImages(*cache->mData, address)) return;

        auto script = makePageUpdate(cache->mUrl, cache->mIndex, *cache->mData);
        if (!script) return;

        cache->mScript     = std::move(*script);
        cache->mLastAccess = std::chrono::steady_clock::now();
        cache->mRevision   = nextGeneration();
        mPushRequests.enqueue(std::move(cache));
    }

public:
    static MotdRenderer& getInstance() {
        static MotdRenderer instance;
        return instance;
    }

    void acceptResponse(std::string_view address, std::string body) {
        auto json = nlohmann::json::parse(body, nullptr, false);
        if (json.is_discarded() || !json.is_object()) return;

        auto levilamina = json.find("levilamina");
        if (levilamina == json.end() || !levilamina->is_object()) return;

        auto motd = levilamina->find("motd");
        if (motd == levilamina->end() || !motd->is_object()) return;

        auto deserialize = ll::reflection::deserialize_to<motd::MotdPayload>(*motd, MotdKeyFormatter{});
        if (!deserialize || deserialize->version != 1) return;

        mPendingResponses.enqueue(PendingResponse{std::string{address}, std::move(*deserialize)});
    }

private:
    void processPendingResponses() {
        PendingResponse response;
        if (!mPendingResponses.try_dequeue(response)) return;

        auto serverList = ll::service::getClientInstance()
                              .transform(&ClientInstance::getWorldSystem)
                              .transform(&World::WorldSystem::mModules)
                              .transform(&World::WorldSystemModules::mExternalServerWorldList)
                              .transform(&std::unique_ptr<World::ExternalServerWorldList>::get)
                              .transform(&World::ExternalServerWorldList::mExternalServerWorldList);
        if (!serverList) {
            mPendingResponses.enqueue(std::move(response));
            return;
        }

        do {
            auto it = std::ranges::find_if(**serverList, [&](NetworkWorldInfo const& info) {
                return fmt::format("{0}:{1}", *info.mExternalServer->address, info.mExternalServer->port)
                    == response.mAddress;
            });
            if (it == (**serverList).end()) continue;

            auto index = static_cast<size_t>(std::distance((**serverList).begin(), it));
            mPool.execute(
                [this, address = std::move(response.mAddress), index, data = std::move(response.mData)]() mutable {
                    if (!publishReadme(address, index, std::move(data))) return;
                    refreshReadme(address);
                }
            );
        } while (mPendingResponses.try_dequeue(response));
    }

    void processPushRequests() {
        std::shared_ptr<CacheReadme> requested;
        if (!mPushRequests.try_dequeue(requested)) return;

        auto location = ll::service::getClientInstance()
                            .transform([](auto&& client) -> OreUI::Router& { return client.getCurrentUIRouter(); })
                            .and_then(&OreUI::Router::getCurrentLocation);
        if (!location || !location->isValid() || !location->getTelemetryId().starts_with("/play/servers")) {
            mPushRequests.enqueue(std::move(requested));
            return;
        }
        auto scene = std::static_pointer_cast<OreUI::Scene>(location->mScene.lock());
        if (!scene || !*scene->mView) {
            mPushRequests.enqueue(std::move(requested));
            return;
        }
        auto* oreui = static_cast<OreUI::View*>((scene->mView)->get());
        if (!oreui || !oreui->mGamefaceView) {
            mPushRequests.enqueue(std::move(requested));
            return;
        }

        using Pending = std::pair<std::shared_ptr<CacheReadme>, uint64>;

        std::string                                   scripts;
        std::vector<Pending>                          pending;
        SmallDenseSet<std::pair<std::string, uint64>> seen;
        do {
            std::shared_ptr<CacheReadme> cache;
            mReadmeCache.if_contains(requested->mUrl, [&](decltype(mReadmeCache)::value_type const& pair) {
                cache = pair.second;
            });
            if (!cache || cache->mRevision == cache->mPushedRevision) continue;
            if (!seen.emplace(cache->mUrl, cache->mRevision).second) continue;

            if (cache->mData) {
                if (cache->mScript.empty()) continue;
                scripts.append(cache->mScript);
            } else {
                scripts.append(makePageRemoval(cache->mUrl));
            }
            pending.emplace_back(cache, cache->mRevision);
        } while (mPushRequests.try_dequeue(requested));
        if (pending.empty()) return;

        std::string batch;
        batch.reserve(detail::MotdPageScript.size() + scripts.size());
        batch.append(detail::MotdPageScript);
        batch.append(scripts);
        ll::memory::virtualCall<void, char const*>(oreui->mGamefaceView, GamefaceExecuteScriptSlot, batch.c_str());

        for (auto& [cache, revision] : pending) {
            mReadmeCache.erase_if(cache->mUrl, [&](decltype(mReadmeCache)::value_type& pair) {
                if (pair.second->mRevision != revision) return false;
                if (!pair.second->mData) return true;
                pair.second->mLastAccess     = std::chrono::steady_clock::now();
                pair.second->mPushedRevision = revision;
                return false;
            });
        }
    }
};

LL_TYPE_INSTANCE_HOOK(
    MotdRenderer::HttpSendHook,
    HookPriority::Normal,
    Bedrock::Http::LibHttpClientImpl,
    &Bedrock::Http::LibHttpClientImpl::$send,
    Bedrock::Threading::Async<Bedrock::Http::Response>,
    Bedrock::Http::Request&& request
) {
    auto match = ctre::search<R"(^[^:]+://(?:[^/@?#]*@)?([^/?#]+)/v1/join(?:[?#]|$))">(
        request.mUnkcb7d93.as<Bedrock::Http::Url>()
    );
    if (!match) return origin(std::move(request));

    request.mUnk3aa28a.as<Bedrock::Http::HeaderCollection>().set(
        "Accept-Language",
        std::string{ll::i18n::getDefaultLocaleCode()}
    );

    auto result = origin(std::move(request));

    result.mResult->addOnComplete(
        [address = match.get<1>().str()](Bedrock::Threading::IAsyncResult<Bedrock::Http::Response> const& completed) {
            if (completed.getStatus() != Bedrock::Threading::AsyncStatus::Completed) return;

            auto response = completed.getResult();
            if (response.mStatus.mValue < 200 || response.mStatus.mValue >= 300) return;

            auto body = response.getBodyAsUtf8String();
            if (body.find("\"levilamina\"") == std::string::npos) return;

            getInstance().acceptResponse(address, std::move(body));
        }
    );
    return result;
}

LL_TYPE_INSTANCE_HOOK(
    MotdRenderer::ClientUpdateHook,
    HookPriority::Normal,
    ClientInstance,
    &ClientInstance::$update,
    bool,
    bool isInitFinished,
    bool allowGameUpdate
) {
    auto result = origin(isInitFinished, allowGameUpdate);
    getInstance().processPendingResponses();
    getInstance().processPushRequests();
    return result;
}

} // namespace ll::motd

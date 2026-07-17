#pragma once

#include "ll/core/ddui/DduiSession.h"
#include "ll/api/ddui/Observable.h"
#include <memory>
#include <string>
#include <vector>
#include <atomic>
#include <functional>

namespace ll::ddui {

class MessageBox;
struct MessageBoxResult;

class MessageBoxSession : public DduiSession, public std::enable_shared_from_this<MessageBoxSession> {
public:
    std::string       mUuid;
    ObsStringOrString mTitle;
    ObsStringOrString mBody;
    ObsStringOrString mBtn1Label;
    ObsStringOrString mBtn1Tooltip;
    ObsStringOrString mBtn2Label;
    ObsStringOrString mBtn2Tooltip;

    uint              mFormId = 0;
    std::atomic<bool> mIsShowing{false};
    std::atomic<int>  mSelection{-1};
    MessageBox*       mWrapper = nullptr;
    std::function<void(Player&, MessageBoxResult const&)> mCallback;

    struct ObsSub {
        std::shared_ptr<void>         observable;
        uint64_t                      subId;
        std::function<void(uint64_t)> unsubscribeFn;
    };
    std::vector<ObsSub> mSubs;
    std::recursive_mutex mSubMutex;

    MessageBoxSession(std::string uuid, ObsStringOrString title);
    ~MessageBoxSession() override;

    uint getId() const override { return mFormId; }
    std::string getPlayerUuid() const override { return mUuid; }
    bool isCustomForm() const override { return false; }

    void handleDataStoreUpdate(
        std::string const& property,
        std::string const& path,
        std::variant<double, bool, std::string> const& value
    ) override;

    void handleScreenClosed(::DataDrivenScreenClosedReason reason) override;

    void close() override;

    void cleanupSubscriptions();
    void updateProperty(std::string const& name, std::string const& val);

    template <typename T>
    void addSubscription(std::shared_ptr<Observable<T>> const& obs, std::function<void(T const&)> callback) {
        if (!obs) return;
        auto subId = obs->subscribe(std::move(callback));
        std::lock_guard<std::recursive_mutex> lock(mSubMutex);
        mSubs.push_back({obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); }});
    }
};

} // namespace ll::ddui

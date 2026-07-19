#pragma once

#include "ll/api/ddui/Observable.h"
#include "ll/core/ddui/DduiSession.h"
#include "ll/core/ddui/elements/CloseButton.h"
#include "ll/core/ddui/elements/Element.h"
#include <atomic>
#include <memory>
#include <vector>

class Player;

namespace ll::ddui {

class CustomForm;

class CustomFormSession : public DduiSession, public std::enable_shared_from_this<CustomFormSession> {
public:
    mce::UUID                                                  mUuid;
    ObsStringOrString                                          mTitle;
    uint                                                       mFormId = 0;
    std::atomic<bool>                                          mIsShowing{false};
    std::unique_ptr<CloseButton>                               mCloseButton;
    std::vector<std::unique_ptr<Element>>                      mControls;
    std::function<void(Player&, DataDrivenScreenClosedReason)> mCallback;
    std::shared_ptr<CustomForm>                                mKeepAlive;

    struct ObsSub {
        std::shared_ptr<void>         observable;
        uint64_t                      subId;
        std::function<void(uint64_t)> unsubscribeFn;
    };
    std::recursive_mutex mSubMutex;
    std::vector<ObsSub>  mSubs;

    CustomFormSession(mce::UUID uuid, ObsStringOrString title);
    ~CustomFormSession() override;

    uint      getId() const override { return mFormId; }
    mce::UUID getPlayerUuid() const override { return mUuid; }
    bool      isCustomForm() const override { return true; }

    void handleDataStoreUpdate(
        std::string const&                             property,
        std::string const&                             path,
        std::variant<double, bool, std::string> const& value
    ) override;

    void handleScreenClosed(::DataDrivenScreenClosedReason reason) override;

    void close(Player* player) override;

    bool validate() const;

    void cleanupSubscriptions();
    void updatePath(std::string const& path, double val);
    void updatePath(std::string const& path, bool val);
    void updatePath(std::string const& path, std::string const& val);
    void updateObjectPath(std::string const& path, std::string const& val);

    std::recursive_mutex                                                     mUpdateMutex;
    std::unordered_map<std::string, std::variant<double, bool, std::string>> mPendingUpdates;
    std::unordered_map<std::string, bool>                                    mUpdateScheduled;
    std::unordered_map<std::string, bool>                                    mPendingIsObjectUpdate;
};

} // namespace ll::ddui

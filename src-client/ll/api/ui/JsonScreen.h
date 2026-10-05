#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <vector>

class UIScene;
class UIPropertyBag;

namespace ll::ui {

class JsonScreen {
public:
    LLAPI JsonScreen();
    JsonScreen(JsonScreen const&)            = delete;
    JsonScreen& operator=(JsonScreen const&) = delete;
    LLAPI virtual ~JsonScreen();

    virtual std::string getScreenName() const = 0;

    LLAPI virtual std::vector<std::string> getHandledButtonIds() const;

    LLAPI virtual void onOpen();

    LLAPI virtual void onClose();

    LLAPI virtual void onTick();

    LLAPI virtual bool onButtonEvent(std::string const& buttonId, UIPropertyBag* propertyBag);

    LLAPI void open();

    LLAPI void close();

    LLNDAPI bool isOpen() const;

    LLNDAPI UIScene* scene() const;

private:
    class Controller;
    std::shared_ptr<Controller> mController;
    std::weak_ptr<UIScene>      mScene;
    std::shared_ptr<bool>       mAliveToken;
    bool                        mCloseRequested = false;
};

} // namespace ll::ui

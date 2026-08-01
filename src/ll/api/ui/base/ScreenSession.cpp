#include "ll/api/ui/base/ScreenSession.h"

#include <memory>
#include <utility>

#include "ll/api/coro/CallbackTransformer.h"
#include "ll/api/form/FormIdManager.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/ui/base/ScreenSession.h"

namespace ll::ui {

static Expected<> invalidSession() { return makeI18nStringError<"Invalid DDUI session handle">(); }

ScreenSession::ScreenSession() noexcept = default;

ScreenSession::ScreenSession(Player& player, std::string screenId)
: impl(std::make_shared<detail::ScreenSessionImpl>(std::move(screenId), player, form::FormIdManager::genFormId())) {}

ScreenSession::ScreenSession(Player& player, std::string screenId, uint instanceId)
: impl(std::make_shared<detail::ScreenSessionImpl>(std::move(screenId), player, instanceId)) {}

ScreenSession::ScreenSession(Player& player, std::string screenId, NoInstanceIdTag)
: impl(std::make_shared<detail::ScreenSessionImpl>(std::move(screenId), player, std::nullopt)) {}

ScreenSession::~ScreenSession() = default;

ScreenSession::ScreenSession(ScreenSession const&) = default;

ScreenSession& ScreenSession::operator=(ScreenSession const&) = default;

ScreenSession::ScreenSession(ScreenSession&&) noexcept = default;

ScreenSession& ScreenSession::operator=(ScreenSession&&) noexcept = default;

ScreenSessionState ScreenSession::getState() const noexcept {
    return impl ? impl->state() : ScreenSessionState::Closed;
}

std::optional<uint> ScreenSession::getInstanceId() const noexcept { return impl ? impl->instanceId() : std::nullopt; }

std::optional<uint> ScreenSession::getFormId() const noexcept { return impl ? impl->formId() : std::nullopt; }

Expected<> ScreenSession::show(Callback callback) const {
    if (!impl) {
        return invalidSession();
    }
    return impl->show(std::move(callback));
}

coro::CoroTask<ScreenSession::Result> ScreenSession::showAsync() const {
    if (!impl) {
        co_return makeI18nStringError<"Invalid DDUI session handle">();
    }

    coro::CallbackTransformer<Result> completion;
    auto                              shown = impl->show([setter = completion.getValueSetter()](Result result) {
        setter.emplace(std::move(result));
        setter.finish();
    });
    if (!shown) {
        co_return forwardError(shown.error());
    }

    auto result = co_await completion.begin();
    if (!result) {
        co_return makeI18nStringError<"DDUI asynchronous completion is unavailable">();
    }
    co_return std::move(*result);
}

Expected<> ScreenSession::close() const {
    if (!impl) {
        return invalidSession();
    }
    return impl->close();
}

ScreenSession::operator bool() const noexcept { return impl != nullptr; }

void closeScreen(Player& player) {
    detail::ScreenSessionImpl::closeScreen(player, std::nullopt);
}

} // namespace ll::ui

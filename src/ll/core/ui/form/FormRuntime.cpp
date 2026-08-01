#include "ll/core/ui/form/FormRuntime.h"

#include <stdexcept>
#include <utility>

#include "ll/api/base/ScopedValue.h"
#include "ll/api/i18n/I18n.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/ui/base/ScreenSession.h"
#include "ll/core/ui/base/UIRawMessage.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace ll::ui::detail {

static void logBridgeError(Error const& error) noexcept {
    ll::getLogger().error("DDUI observable bridge update failed: {}", error.message());
}

FormRuntime::FormRuntime(Player& player, std::string screenId, std::string propertyPrefix)
: session(player, std::move(screenId)) {
    propertyName = std::move(propertyPrefix) + std::to_string(session.getInstanceId().value());
}

FormRuntime::~FormRuntime() { finish(); }

void FormRuntime::ensureMutable() const {
    if (structureLocked) {
        throw std::logic_error("A DDUI form cannot be modified after show() has been called");
    }
}

void FormRuntime::lockStructure() noexcept { structureLocked = true; }

Expected<> FormRuntime::createProperty(cereal::DynamicValue const& value) {
    if (propertyCreated || finished) {
        return makeI18nStringError<"DDUI form has already been prepared">();
    }
    auto result = session.createProperty("minecraft", propertyName, value);
    if (!result) {
        return forwardError(result.error());
    }
    property        = std::move(result.value());
    propertyCreated = true;
    return {};
}

void FormRuntime::abortPreparation() noexcept { finish(); }

template <class T, class ObservableT>
Expected<> FormRuntime::bindPrimitive(std::string path, ObservableT observable) try {
    if (!propertyCreated || finished) {
        return makeI18nStringError<"DDUI form property is unavailable">();
    }

    auto bindingResult = property.bind<T>(std::move(path));
    if (!bindingResult) {
        return forwardError(bindingResult.error());
    }
    auto binding = std::move(bindingResult.value());
    if (observable.isClientWritable()) {
        if (auto writable = binding.setClientWritable(true); !writable) {
            return forwardError(writable.error());
        }
    }

    auto gate = std::make_shared<BridgeGate>();
    observe(observable, [binding, gate](T const& value) {
        if (gate->fromBinding) {
            return;
        }
        ScopedValue updating{gate->fromObservable, true};
        auto        result = binding.set(value);
        if (!result) {
            logBridgeError(result.error());
        }
    });
    if (observable.isClientWritable()) {
        auto subscription = binding.listen([observable, gate](T const& value) mutable {
            if (gate->fromObservable) {
                return;
            }
            ScopedValue updating{gate->fromBinding, true};
            observable.setData(value);
        });
        if (!subscription) {
            return forwardError(subscription.error());
        }
        bindingSubscriptions.emplace_back(std::move(subscription.value()));
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> FormRuntime::bind(std::string path, ObservableBoolean observable) {
    return bindPrimitive<bool>(std::move(path), std::move(observable));
}

Expected<> FormRuntime::bind(std::string path, ObservableNumber observable) {
    return bindPrimitive<double>(std::move(path), std::move(observable));
}

Expected<> FormRuntime::bind(std::string path, ObservableString observable) {
    return bindPrimitive<std::string>(std::move(path), std::move(observable));
}

Expected<> FormRuntime::bind(std::string path, ObservableUIRawMessage observable) try {
    if (!propertyCreated || finished) {
        return makeI18nStringError<"DDUI form property is unavailable">();
    }

    auto bindingResult = property.bind<cereal::DynamicValue>(std::move(path));
    if (!bindingResult) {
        return forwardError(bindingResult.error());
    }
    auto binding = std::move(bindingResult.value());
    if (observable.isClientWritable()) {
        if (auto writable = binding.setClientWritable(true); !writable) {
            return forwardError(writable.error());
        }
    }

    auto gate = std::make_shared<BridgeGate>();
    observe(observable, [binding, gate](UIRawMessage const& value) {
        if (gate->fromBinding) {
            return;
        }
        ScopedValue updating{gate->fromObservable, true};
        auto        result = binding.set(UIRawMessageAccess::toDynamicValue(value));
        if (!result) {
            logBridgeError(result.error());
        }
    });
    if (observable.isClientWritable()) {
        auto subscription = binding.listen([observable, gate](cereal::DynamicValue const& value) mutable {
            if (gate->fromObservable) {
                return;
            }
            auto parsed = UIRawMessageAccess::fromDynamicValue(value);
            if (!parsed) {
                throw std::runtime_error(parsed.error().message());
            }
            ScopedValue updating{gate->fromBinding, true};
            observable.setData(std::move(parsed.value()));
        });
        if (!subscription) {
            return forwardError(subscription.error());
        }
        bindingSubscriptions.emplace_back(std::move(subscription.value()));
    }
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> FormRuntime::bind(std::string path, data::Observable<cereal::DynamicValue> observable) try {
    if (!propertyCreated || finished) {
        return makeI18nStringError<"DDUI form property is unavailable">();
    }

    auto bindingResult = property.bind<cereal::DynamicValue>(std::move(path));
    if (!bindingResult) {
        return forwardError(bindingResult.error());
    }
    auto binding = std::move(bindingResult.value());
    observe(observable, [binding](cereal::DynamicValue const& value) {
        auto result = binding.set(value);
        if (!result) {
            logBridgeError(result.error());
        }
    });
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> FormRuntime::bind(std::string path, TextValue const& value) {
    return std::visit(
        [&](auto const& item) -> Expected<> {
            using T = std::remove_cvref_t<decltype(item)>;
            if constexpr (std::same_as<T, ObservableString> || std::same_as<T, ObservableUIRawMessage>) {
                return bind(std::move(path), item);
            } else {
                return {};
            }
        },
        value
    );
}

Expected<> FormRuntime::bind(std::string path, std::optional<TextValue> const& value) {
    return value ? bind(std::move(path), *value) : Expected<>{};
}

Expected<> FormRuntime::bind(std::string path, BooleanValue const& value) {
    if (auto observable = std::get_if<ObservableBoolean>(&value)) {
        return bind(std::move(path), *observable);
    }
    return {};
}

Expected<> FormRuntime::bind(std::string path, std::optional<BooleanValue> const& value) {
    return value ? bind(std::move(path), *value) : Expected<>{};
}

Expected<> FormRuntime::bind(std::string path, NumberValue const& value) {
    if (auto observable = std::get_if<ObservableNumber>(&value)) {
        return bind(std::move(path), *observable);
    }
    return {};
}

Expected<> FormRuntime::bind(std::string path, std::optional<NumberValue> const& value) {
    return value ? bind(std::move(path), *value) : Expected<>{};
}

Expected<> FormRuntime::bindAction(std::string path, CustomForm::ButtonCallback callback) try {
    if (!propertyCreated || finished) {
        return makeI18nStringError<"DDUI form property is unavailable">();
    }
    auto bindingResult = property.bindClientWritable<double>(std::move(path));
    if (!bindingResult) {
        return forwardError(bindingResult.error());
    }
    auto subscription = bindingResult.value().listen([callback = std::move(callback)](double const&) mutable {
        if (callback) {
            callback();
        }
    });
    if (!subscription) {
        return forwardError(subscription.error());
    }
    bindingSubscriptions.emplace_back(std::move(subscription.value()));
    return {};
} catch (...) {
    return makeExceptionError();
}

Expected<> FormRuntime::show(ScreenSession::Callback callback) {
    if (!propertyCreated || finished) {
        return makeI18nStringError<"DDUI form has not been prepared">();
    }
    if (showStarted) {
        return makeI18nStringError<"DDUI form can only be shown once">();
    }
    showStarted = true;

    auto self = shared_from_this();
    auto result =
        session.show([self = std::move(self), callback = std::move(callback)](ScreenSession::Result result) mutable {
            self->finish();
            if (callback) {
                callback(std::move(result));
            }
        });
    if (!result) {
        finish();
    }
    return result;
}

coro::CoroTask<ScreenSession::Result> FormRuntime::showAsync() {
    if (!propertyCreated || finished) {
        return [](Unexpected error) -> coro::CoroTask<ScreenSession::Result> {
            co_return std::move(error);
        }(makeI18nStringError<"DDUI form has not been prepared">());
    }
    if (showStarted) {
        return [](Unexpected error) -> coro::CoroTask<ScreenSession::Result> {
            co_return std::move(error);
        }(makeI18nStringError<"DDUI form can only be shown once">());
    }
    showStarted = true;

    return [](std::shared_ptr<FormRuntime> runtime) -> coro::CoroTask<ScreenSession::Result> {
        auto result = co_await runtime->session.showAsync();
        runtime->finish();
        co_return result;
    }(shared_from_this());
}

Expected<> FormRuntime::close() { return session.close(); }

bool FormRuntime::isShowing() const noexcept { return session.getState() == ScreenSessionState::Showing; }

void FormRuntime::finish() noexcept {
    if (finished) {
        return;
    }
    finished = true;

    for (auto& disconnect : observableDisconnectors) {
        disconnect();
    }
    observableDisconnectors.clear();
    bindingSubscriptions.clear();

    if (propertyCreated && session.getState() == ScreenSessionState::Ready) {
        session = {};
    }
    property        = {};
    propertyCreated = false;
}

} // namespace ll::ui::detail

#pragma once

#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "ll/api/Expected.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/ui/base/DataStore.h"
#include "ll/api/ui/base/Observable.h"
#include "ll/api/ui/base/ScreenSession.h"
#include "ll/api/ui/form/CustomForm.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

class Player;

namespace ll::ui::detail {

class FormRuntime : public std::enable_shared_from_this<FormRuntime> {
    struct BridgeGate {
        bool fromObservable{false};
        bool fromBinding{false};
    };

    ScreenSession                                  session;
    Property                                       property;
    std::string                                    propertyName;
    std::vector<Subscription>                      bindingSubscriptions;
    std::vector<brstd::move_only_function<void()>> observableDisconnectors;
    bool                                           structureLocked{false};
    bool                                           propertyCreated{false};
    bool                                           showStarted{false};
    bool                                           finished{false};

    template <class T, class ObservableT>
    Expected<> bindPrimitive(std::string path, ObservableT observable);

public:
    FormRuntime(Player& player, std::string screenId, std::string propertyPrefix);
    ~FormRuntime();

    FormRuntime(FormRuntime const&)            = delete;
    FormRuntime& operator=(FormRuntime const&) = delete;

    void ensureMutable() const;
    void lockStructure() noexcept;

    Expected<> createProperty(cereal::DynamicValue const& value);
    void       abortPreparation() noexcept;

    Expected<> bind(std::string path, ObservableBoolean observable);
    Expected<> bind(std::string path, ObservableNumber observable);
    Expected<> bind(std::string path, ObservableString observable);
    Expected<> bind(std::string path, ObservableUIRawMessage observable);
    Expected<> bind(std::string path, data::Observable<cereal::DynamicValue> observable);
    Expected<> bind(std::string path, TextValue const& value);
    Expected<> bind(std::string path, std::optional<TextValue> const& value);
    Expected<> bind(std::string path, BooleanValue const& value);
    Expected<> bind(std::string path, std::optional<BooleanValue> const& value);
    Expected<> bind(std::string path, NumberValue const& value);
    Expected<> bind(std::string path, std::optional<NumberValue> const& value);
    Expected<> bindAction(std::string path, CustomForm::ButtonCallback callback);

    template <class T, class Callback>
    void observe(data::Observable<T> observable, Callback&& callback) {
        auto id = observable.subscribe(std::forward<Callback>(callback));
        observableDisconnectors.emplace_back([observable, id]() mutable { observable.unsubscribe(id); });
    }

    Expected<>                            show(ScreenSession::Callback callback = {});
    coro::CoroTask<ScreenSession::Result> showAsync();
    Expected<>                            close();
    [[nodiscard]] bool                    isShowing() const noexcept;

private:
    void finish() noexcept;
};

} // namespace ll::ui::detail

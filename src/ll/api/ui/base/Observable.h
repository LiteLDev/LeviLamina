#pragma once

#include <string>
#include <utility>
#include <variant>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/data/Observable.h"
#include "ll/api/ui/base/UIRawMessage.h"

class Player;

namespace ll::ui {

struct ObservableOptions {
    bool clientWritable{false};
};

template <class T>
class UIObservable : public data::Observable<T> {
    bool clientWritable;

public:
    explicit UIObservable(T initial, ObservableOptions options = {})
    : data::Observable<T>(std::move(initial)),
      clientWritable(options.clientWritable) {}

    [[nodiscard]] bool isClientWritable() const noexcept { return clientWritable; }
};

class ObservableBoolean : public UIObservable<bool> {
public:
    using UIObservable<bool>::UIObservable;
};

class ObservableNumber : public UIObservable<double> {
public:
    using UIObservable<double>::UIObservable;
};

class ObservableString : public UIObservable<std::string> {
public:
    using UIObservable<std::string>::UIObservable;
};

class ObservableUIRawMessage : public UIObservable<UIRawMessage> {
public:
    using UIObservable<UIRawMessage>::UIObservable;
};

using TextValue    = std::variant<std::string, UIRawMessage, ObservableString, ObservableUIRawMessage>;
using BooleanValue = std::variant<bool, ObservableBoolean>;
using NumberValue  = std::variant<double, ObservableNumber>;

} // namespace ll::ui

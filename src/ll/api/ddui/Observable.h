#pragma once

#include "ll/api/ddui/UIRawMessage.h"
#include <functional>
#include <string>
#include <unordered_map>
#include <utility>
#include <variant>

namespace ll::ddui {

struct ObservableOptions {
    bool clientWritable = false;
};

template <typename T>
class Observable {
public:
    using Callback       = std::function<void(T const&)>;
    using SubscriptionId = uint64_t;

protected:
    T                                            mData;
    bool                                         mClientWritable;
    std::unordered_map<SubscriptionId, Callback> mSubscribers;
    SubscriptionId                               mNextId = 0;

public:
    explicit Observable(T initialData, ObservableOptions const& options = {})
    : mData(std::move(initialData)),
      mClientWritable(options.clientWritable) {}

    virtual ~Observable() = default;

    [[nodiscard]] T    getData() const { return mData; }
    [[nodiscard]] bool isClientWritable() const { return mClientWritable; }

    void setData(T const& data) {
        if (mData != data) {
            mData = data;

            auto subs = mSubscribers;
            for (auto const& [id, callback] : subs) {
                if (callback) callback(mData);
            }
        }
    }

    SubscriptionId subscribe(Callback callback) {
        SubscriptionId id = mNextId++;

        mSubscribers[id] = std::move(callback);
        return id;
    }

    bool unsubscribe(SubscriptionId id) { return mSubscribers.erase(id) > 0; }
};

class ObservableString : public Observable<std::string> {
public:
    explicit ObservableString(std::string const& data, ObservableOptions const& options = {})
    : Observable(data, options) {}
};

class ObservableNumber : public Observable<double> {
public:
    explicit ObservableNumber(double data, ObservableOptions const& options = {}) : Observable(data, options) {}
};

class ObservableBoolean : public Observable<bool> {
public:
    explicit ObservableBoolean(bool data, ObservableOptions const& options = {}) : Observable(data, options) {}
};

class ObservableUIRawMessage : public Observable<UIRawMessage> {
public:
    explicit ObservableUIRawMessage(UIRawMessage const& data, ObservableOptions const& options = {})
    : Observable(data, options) {}
};

using ObsStringOrString = std::variant<std::string, std::shared_ptr<ObservableString>>;
using ObsNumberOrNumber = std::variant<double, std::shared_ptr<ObservableNumber>>;
using ObsBoolOrBool     = std::variant<bool, std::shared_ptr<ObservableBoolean>>;

template <typename T, typename ObsT>
inline T resolveOption(std::variant<T, std::shared_ptr<ObsT>> const& opt) {
    if (std::holds_alternative<T>(opt)) {
        return std::get<T>(opt);
    } else {
        auto obs = std::get<std::shared_ptr<ObsT>>(opt);
        return obs ? static_cast<T>(obs->getData()) : T{};
    }
}

inline std::string resolveString(ObsStringOrString const& opt) {
    if (std::holds_alternative<std::string>(opt)) {
        return std::get<std::string>(opt);
    } else {
        auto obs = std::get<std::shared_ptr<ObservableString>>(opt);
        return obs ? obs->getData() : "";
    }
}

} // namespace ll::ddui

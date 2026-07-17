#pragma once

#include "ll/api/ddui/UIRawMessage.h"
#include "nlohmann/json.hpp"
#include <functional>
#include <mutex>
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
    mutable std::recursive_mutex                 mMutex;

public:
    explicit Observable(T initialData, ObservableOptions const& options = {})
    : mData(std::move(initialData)),
      mClientWritable(options.clientWritable) {}

    virtual ~Observable() = default;

    [[nodiscard]] T getData() const {
        std::lock_guard<std::recursive_mutex> lock(mMutex);
        return mData;
    }

    [[nodiscard]] bool isClientWritable() const {
        std::lock_guard<std::recursive_mutex> lock(mMutex);
        return mClientWritable;
    }

    void setData(T const& data) {
        std::unordered_map<SubscriptionId, Callback> subs;
        {
            std::lock_guard<std::recursive_mutex> lock(mMutex);
            if (mData == data) return;

            mData = data;
            subs  = mSubscribers;
        }

        for (auto const& [id, callback] : subs) {
            if (callback) callback(data);
        }
    }

    SubscriptionId subscribe(Callback callback) {
        std::lock_guard<std::recursive_mutex> lock(mMutex);
        SubscriptionId                        id = mNextId++;
        mSubscribers[id]                         = std::move(callback);
        return id;
    }

    bool unsubscribe(SubscriptionId id) {
        std::lock_guard<std::recursive_mutex> lock(mMutex);
        return mSubscribers.erase(id) > 0;
    }
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

using ObsStringOrString =
    std::variant<std::string, std::shared_ptr<ObservableString>, UIRawMessage, std::shared_ptr<ObservableUIRawMessage>>;
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

inline nlohmann::ordered_json resolveText(ObsStringOrString const& opt) {
    return std::visit(
        [](auto const& val) -> nlohmann::ordered_json {
            using Type = std::decay_t<decltype(val)>;
            if constexpr (std::is_same_v<Type, std::string>) {
                return val;
            } else if constexpr (std::is_same_v<Type, std::shared_ptr<ObservableString>>) {
                return val ? val->getData() : "";
            } else if constexpr (std::is_same_v<Type, UIRawMessage>) {
                return val.serialize();
            } else if constexpr (std::is_same_v<Type, std::shared_ptr<ObservableUIRawMessage>>) {
                return val ? val->getData().serialize() : nlohmann::ordered_json::object();
            }
            return "";
        },
        opt
    );
}

inline std::string resolveString(ObsStringOrString const& opt) {
    return std::visit(
        [](auto const& val) -> std::string {
            using Type = std::decay_t<decltype(val)>;
            if constexpr (std::is_same_v<Type, std::string>) {
                return val;
            } else if constexpr (std::is_same_v<Type, std::shared_ptr<ObservableString>>) {
                return val ? val->getData() : "";
            } else if constexpr (std::is_same_v<Type, UIRawMessage>) {
                return val.serialize().dump();
            } else if constexpr (std::is_same_v<Type, std::shared_ptr<ObservableUIRawMessage>>) {
                return val ? val->getData().serialize().dump() : "";
            }
            return "";
        },
        opt
    );
}

} // namespace ll::ddui

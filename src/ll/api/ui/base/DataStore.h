#pragma once

#include <memory>
#include <string>
#include <string_view>
#include <utility>

#include "ll/api/Expected.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/Meta.h"

#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/platform/brstd/move_only_function.h"

namespace ll::ui {

// Property, Binding, and Subscription operations must run on the server thread,
// including releasing the final session-owned handle.

namespace detail {
class ScreenSessionImpl;
class BindingHandle;
struct BindingSlot;
struct PropertySlot;
} // namespace detail

using BindingValueTypes = meta::TypeList<double, bool, std::string, cereal::DynamicValue>;

template <class T>
concept BindingValue = BindingValueTypes::contains<T>;

class Subscription {
    struct Impl;
    std::unique_ptr<Impl> impl;

    explicit Subscription(std::unique_ptr<Impl>);
    friend class detail::ScreenSessionImpl;

public:
    LLAPI Subscription() noexcept;
    LLAPI ~Subscription();

    Subscription(Subscription const&)            = delete;
    Subscription& operator=(Subscription const&) = delete;

    LLAPI               Subscription(Subscription&&) noexcept;
    LLAPI Subscription& operator=(Subscription&&) noexcept;

    LLAPI void reset() noexcept;

    [[nodiscard]] LLAPI explicit operator bool() const noexcept;
};

template <BindingValue T>
class Binding;
class Property;

namespace detail {

class BindingHandle {
    std::weak_ptr<BindingSlot> impl;

    explicit BindingHandle(std::weak_ptr<BindingSlot>);
    friend class ::ll::ui::Property;
    friend struct ::ll::ui::detail::BindingSlot;
    template <BindingValue>
    friend class ::ll::ui::Binding;

    LLNDAPI Expected<bool> get(bool*) const;
    LLNDAPI Expected<double> get(double*) const;
    LLNDAPI Expected<std::string> get(std::string*) const;
    LLNDAPI Expected<cereal::DynamicValue> get(cereal::DynamicValue*) const;

    LLNDAPI Expected<> set(bool value) const;
    LLNDAPI Expected<> set(double value) const;
    LLNDAPI Expected<> set(std::string value) const;
    LLNDAPI Expected<> set(cereal::DynamicValue value) const;

    LLNDAPI Expected<Subscription> listen(brstd::move_only_function<void(bool const&)> callback) const;
    LLNDAPI Expected<Subscription> listen(brstd::move_only_function<void(double const&)> callback) const;
    LLNDAPI Expected<Subscription> listen(brstd::move_only_function<void(std::string const&)> callback) const;
    LLNDAPI Expected<Subscription> listen(brstd::move_only_function<void(cereal::DynamicValue const&)> callback) const;

public:
    LLAPI BindingHandle() noexcept;
    LLAPI ~BindingHandle();

    LLAPI                BindingHandle(BindingHandle const&);
    LLAPI BindingHandle& operator=(BindingHandle const&);
    LLAPI                BindingHandle(BindingHandle&&) noexcept;
    LLAPI BindingHandle& operator=(BindingHandle&&) noexcept;

    LLNDAPI Expected<> setClientWritable(bool writable) const;
    LLNDAPI bool       isClientWritable() const noexcept;

    [[nodiscard]] LLAPI explicit operator bool() const noexcept;
};

} // namespace detail

template <BindingValue T>
class Binding {
    detail::BindingHandle handle;

    explicit Binding(detail::BindingHandle value) : handle(std::move(value)) {}
    friend class Property;

public:
    using Value    = T;
    using Callback = brstd::move_only_function<void(T const&)>;

    Binding() noexcept = default;

    [[nodiscard]] Expected<T> get() const { return handle.get(static_cast<T*>(nullptr)); }
    [[nodiscard]] Expected<>  set(T value) const { return handle.set(std::move(value)); }

    [[nodiscard]] Expected<Subscription> listen(Callback callback) const { return handle.listen(std::move(callback)); }

    [[nodiscard]] Expected<> setClientWritable(bool writable) const { return handle.setClientWritable(writable); }
    [[nodiscard]] bool       isClientWritable() const noexcept { return handle.isClientWritable(); }

    [[nodiscard]] explicit operator bool() const noexcept { return static_cast<bool>(handle); }
};

class Property {
    std::weak_ptr<detail::PropertySlot> impl;

    explicit Property(std::weak_ptr<detail::PropertySlot>);
    LLNDAPI Expected<detail::BindingHandle> bindErased(std::string path, bool*) const;
    LLNDAPI Expected<detail::BindingHandle> bindErased(std::string path, double*) const;
    LLNDAPI Expected<detail::BindingHandle> bindErased(std::string path, std::string*) const;
    LLNDAPI Expected<detail::BindingHandle> bindErased(std::string path, cereal::DynamicValue*) const;
    Expected<detail::BindingHandle>         bindErasedImpl(std::string path, std::size_t type) const;

    friend class detail::ScreenSessionImpl;
    friend struct detail::PropertySlot;
    friend class ScreenSession;

public:
    LLAPI Property() noexcept;
    LLAPI ~Property();

    LLAPI           Property(Property const&);
    LLAPI Property& operator=(Property const&);
    LLAPI           Property(Property&&) noexcept;
    LLAPI Property& operator=(Property&&) noexcept;

    LLNDAPI Expected<> set(cereal::DynamicValue const& value) const;
    LLNDAPI Expected<> setJson(std::string const& json) const;
    LLNDAPI Expected<> erase() const;

    template <BindingValue T>
    [[nodiscard]] Expected<Binding<T>> bind(std::string path) const {
        auto result = bindErased(std::move(path), static_cast<T*>(nullptr));
        if (!result) {
            return forwardError(result.error());
        }
        return Binding<T>{std::move(result.value())};
    }

    template <BindingValue T>
    [[nodiscard]] Expected<Binding<T>> bindClientWritable(std::string path) const {
        auto result = bind<T>(std::move(path));
        if (!result) {
            return forwardError(result.error());
        }
        auto binding = std::move(result.value());
        if (auto writable = binding.setClientWritable(true); !writable) {
            return forwardError(writable.error());
        }
        return binding;
    }

    [[nodiscard]] LLAPI explicit operator bool() const noexcept;
};

} // namespace ll::ui

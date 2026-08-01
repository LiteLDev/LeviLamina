#include "ll/api/ui/base/DataStore.h"

#include <memory>
#include <utility>
#include <variant>

#include "ll/api/i18n/I18n.h"
#include "ll/api/ui/base/ScreenSession.h"
#include "ll/core/ui/base/DataStore.h"
#include "ll/core/ui/base/ScreenSession.h"

namespace ll::ui {

template <class T = void>
static Expected<T> invalidSessionHandle() {
    return makeI18nStringError<"Invalid DDUI session handle">();
}

template <class T = void>
static Expected<T> unavailableBinding() {
    return makeI18nStringError<"DDUI binding is unavailable">();
}

template <class T = void>
static Expected<T> unavailableProperty() {
    return makeI18nStringError<"DDUI property is unavailable">();
}

template <BindingValue T>
static Expected<T> extract(Expected<detail::BindingVariant> result) {
    if (!result) {
        return forwardError(result.error());
    }
    if (auto* value = std::get_if<T>(&result.value())) {
        return std::move(*value);
    }
    return makeI18nStringError<"DDUI binding value has the wrong type">();
}

detail::BindingHandle::BindingHandle() noexcept = default;

detail::BindingHandle::BindingHandle(std::weak_ptr<BindingSlot> value) : impl(std::move(value)) {}

detail::BindingHandle::~BindingHandle() = default;

detail::BindingHandle::BindingHandle(BindingHandle const&) = default;

detail::BindingHandle& detail::BindingHandle::operator=(BindingHandle const&) = default;

detail::BindingHandle::BindingHandle(BindingHandle&&) noexcept = default;

detail::BindingHandle& detail::BindingHandle::operator=(BindingHandle&&) noexcept = default;

Expected<bool> detail::BindingHandle::get(bool*) const {
    auto handle = impl.lock();
    return handle ? extract<bool>(handle->property->session().getBinding(*handle)) : unavailableBinding<bool>();
}

Expected<double> detail::BindingHandle::get(double*) const {
    auto handle = impl.lock();
    return handle ? extract<double>(handle->property->session().getBinding(*handle)) : unavailableBinding<double>();
}

Expected<std::string> detail::BindingHandle::get(std::string*) const {
    auto handle = impl.lock();
    return handle ? extract<std::string>(handle->property->session().getBinding(*handle))
                  : unavailableBinding<std::string>();
}

Expected<cereal::DynamicValue> detail::BindingHandle::get(cereal::DynamicValue*) const {
    auto handle = impl.lock();
    return handle ? extract<cereal::DynamicValue>(handle->property->session().getBinding(*handle))
                  : unavailableBinding<cereal::DynamicValue>();
}

Expected<> detail::BindingHandle::set(bool value) const {
    auto handle = impl.lock();
    return handle
             ? handle->property->session().setBinding(*handle, detail::BindingVariant{std::in_place_type<bool>, value})
             : unavailableBinding();
}

Expected<> detail::BindingHandle::set(double value) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().setBinding(
                        *handle,
                        detail::BindingVariant{std::in_place_type<double>, value}
                    )
                  : unavailableBinding();
}

Expected<> detail::BindingHandle::set(std::string value) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().setBinding(
                        *handle,
                        detail::BindingVariant{std::in_place_type<std::string>, std::move(value)}
                    )
                  : unavailableBinding();
}

Expected<> detail::BindingHandle::set(cereal::DynamicValue value) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().setBinding(
                        *handle,
                        detail::BindingVariant{std::in_place_type<cereal::DynamicValue>, std::move(value)}
                    )
                  : unavailableBinding();
}

Expected<Subscription> detail::BindingHandle::listen(brstd::move_only_function<void(bool const&)> callback) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().listen(
                        *handle,
                        detail::ListenerCallback{std::in_place_type<detail::Listener<bool>>, std::move(callback)}
                    )
                  : unavailableBinding<Subscription>();
}

Expected<Subscription> detail::BindingHandle::listen(brstd::move_only_function<void(double const&)> callback) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().listen(
                        *handle,
                        detail::ListenerCallback{std::in_place_type<detail::Listener<double>>, std::move(callback)}
                    )
                  : unavailableBinding<Subscription>();
}

Expected<Subscription>
detail::BindingHandle::listen(brstd::move_only_function<void(std::string const&)> callback) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().listen(
                        *handle,
                        detail::ListenerCallback{std::in_place_type<detail::Listener<std::string>>, std::move(callback)}
                    )
                  : unavailableBinding<Subscription>();
}

Expected<Subscription>
detail::BindingHandle::listen(brstd::move_only_function<void(cereal::DynamicValue const&)> callback) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().listen(
                        *handle,
                        detail::ListenerCallback{
                            std::in_place_type<detail::Listener<cereal::DynamicValue>>,
                            std::move(callback)
                        }
                    )
                  : unavailableBinding<Subscription>();
}

Expected<> detail::BindingHandle::setClientWritable(bool writable) const {
    auto handle = impl.lock();
    return handle ? handle->property->session().setClientWritable(*handle, writable) : unavailableBinding();
}

bool detail::BindingHandle::isClientWritable() const noexcept {
    auto handle = impl.lock();
    return handle && handle->property->session().isClientWritable(*handle);
}

detail::BindingHandle::operator bool() const noexcept { return !impl.expired(); }

Property::Property() noexcept = default;

Property::Property(std::weak_ptr<detail::PropertySlot> value) : impl(std::move(value)) {}

Property::~Property() = default;

Property::Property(Property const&) = default;

Property& Property::operator=(Property const&) = default;

Property::Property(Property&&) noexcept = default;

Property& Property::operator=(Property&&) noexcept = default;

Expected<> Property::set(cereal::DynamicValue const& value) const {
    auto property = impl.lock();
    if (!property) {
        return unavailableProperty();
    }
    return property->session().set(*property, value);
}

Expected<> Property::erase() const {
    auto property = impl.lock();
    if (!property) {
        return unavailableProperty();
    }
    return property->session().erase(*property);
}

Expected<detail::BindingHandle> Property::bindErased(std::string path, bool*) const {
    return bindErasedImpl(std::move(path), BindingValueTypes::index<bool>);
}

Expected<detail::BindingHandle> Property::bindErased(std::string path, double*) const {
    return bindErasedImpl(std::move(path), BindingValueTypes::index<double>);
}

Expected<detail::BindingHandle> Property::bindErased(std::string path, std::string*) const {
    return bindErasedImpl(std::move(path), BindingValueTypes::index<std::string>);
}

Expected<> Property::setJson(std::string const& json) const {
    auto property = impl.lock();
    if (!property) {
        return unavailableProperty();
    }
    return property->session().setJson(*property, json);
}

Expected<detail::BindingHandle> Property::bindErased(std::string path, cereal::DynamicValue*) const {
    return bindErasedImpl(std::move(path), BindingValueTypes::index<cereal::DynamicValue>);
}

Expected<detail::BindingHandle> Property::bindErasedImpl(std::string path, std::size_t type) const {
    auto property = impl.lock();
    if (!property) {
        return unavailableProperty<detail::BindingHandle>();
    }
    auto binding = property->session().getOrCreateBinding(*property, std::move(path), type);
    if (!binding) {
        return forwardError(binding.error());
    }
    std::shared_ptr<detail::BindingSlot> alias{property, binding.value()};
    return detail::BindingHandle{std::weak_ptr{alias}};
}

Property::operator bool() const noexcept { return !impl.expired(); }

Expected<Property>
ScreenSession::createProperty(std::string datastore, std::string property, cereal::DynamicValue const& value) const {
    if (!impl) {
        return invalidSessionHandle<Property>();
    }
    auto slot = impl->createProperty(std::move(datastore), std::move(property), value);
    if (!slot) {
        return forwardError(slot.error());
    }
    std::shared_ptr<detail::PropertySlot> alias{impl, slot.value()};
    return Property{std::weak_ptr{alias}};
}

Expected<Property>
ScreenSession::createProperty(std::string datastore, std::string property, std::string const& json) const {
    if (!impl) {
        return invalidSessionHandle<Property>();
    }
    auto slot = impl->createProperty(std::move(datastore), std::move(property), json);
    if (!slot) {
        return forwardError(slot.error());
    }
    std::shared_ptr<detail::PropertySlot> alias{impl, slot.value()};
    return Property{std::weak_ptr{alias}};
}

Expected<Property> ScreenSession::borrowProperty(std::string datastore, std::string property) const {
    if (!impl) {
        return invalidSessionHandle<Property>();
    }
    auto slot = impl->borrowProperty(std::move(datastore), std::move(property));
    if (!slot) {
        return forwardError(slot.error());
    }
    std::shared_ptr<detail::PropertySlot> alias{impl, slot.value()};
    return Property{std::weak_ptr{alias}};
}

} // namespace ll::ui

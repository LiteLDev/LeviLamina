#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/threading/InstancedThreadLocalBase.h"
#include "mc/platform/threading/TlsSlot.h"

namespace Bedrock::Threading {

template <typename T>
    requires((::std::is_pointer_v<T> || ::std::is_integral_v<T> || ::std::is_enum_v<T>) && sizeof(T) <= sizeof(void*))
class InstancedThreadLocalValue : public ::Bedrock::Threading::InstancedThreadLocalBase {
public:
    InstancedThreadLocalValue() = default;

    InstancedThreadLocalValue(InstancedThreadLocalValue const&)            = delete;
    InstancedThreadLocalValue& operator=(InstancedThreadLocalValue const&) = delete;

    [[nodiscard]] T get() const {
        auto raw = reinterpret_cast<::std::uintptr_t>(mKey.getValue());
        if constexpr (::std::is_pointer_v<T>) {
            return reinterpret_cast<T>(raw);
        } else {
            return static_cast<T>(raw);
        }
    }

    void set(T value) {
        if constexpr (::std::is_pointer_v<T>) {
            mKey.setValue(reinterpret_cast<void*>(reinterpret_cast<::std::uintptr_t>(value)));
        } else {
            mKey.setValue(reinterpret_cast<void*>(static_cast<::std::uintptr_t>(value)));
        }
    }

private:
    ::Bedrock::Threading::TlsSlot mKey;
};

} // namespace Bedrock::Threading

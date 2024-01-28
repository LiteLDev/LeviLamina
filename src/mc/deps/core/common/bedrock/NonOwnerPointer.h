#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

namespace Bedrock {

template <typename T>
class NonOwnerPointer {
public:
    std::shared_ptr<Bedrock::EnableNonOwnerReferences::ControlBlock> mControlBlock;
    NonOwnerPointer(std::nullptr_t) noexcept {} // NOLINT
    T*       get() const { return reinterpret_cast<T*>(mControlBlock.get()); }
    explicit operator bool() const noexcept { return get() != nullptr; }

    [[nodiscard]] constexpr    operator T*() const { return get(); }
    [[nodiscard]] constexpr T* operator->() const { return get(); }
    [[nodiscard]] constexpr T& operator*() const { return *get(); }
};

template <class T>
[[nodiscard]] bool operator==(NonOwnerPointer<T> const& self, nullptr_t) noexcept {
    return self.get() == nullptr;
}
template <class T>
[[nodiscard]] std::strong_ordering operator<=>(NonOwnerPointer<T> const& self, nullptr_t) noexcept {
    return self.get() <=> static_cast<T*>(nullptr);
}

template <class T1, class T2>
[[nodiscard]] bool operator==(NonOwnerPointer<T1> const& l, NonOwnerPointer<T2> const& r) noexcept {
    return l.get() == r.get();
}
template <class T1, class T2>
[[nodiscard]] std::strong_ordering operator<=>(NonOwnerPointer<T1> const& l, NonOwnerPointer<T2> const& r) noexcept {
    return l.get() <=> r.get();
}
}; // namespace Bedrock

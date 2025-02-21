#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Bedrock {

template <typename T>
class NonOwnerPointer {
public:
    std::shared_ptr<::Bedrock::EnableNonOwnerReferences::ControlBlock> mControlBlock;
    T*                                                                 mPointer{};

    NonOwnerPointer(std::shared_ptr<::Bedrock::EnableNonOwnerReferences::ControlBlock> cb, T* p)
    : mControlBlock(std::move(cb)),
      mPointer(p) {}

    NonOwnerPointer(T const& t)
    : NonOwnerPointer(
          static_cast<::Bedrock::EnableNonOwnerReferences const&>(t).mControlBlock,
          const_cast<T*>(std::addressof(t))
      ) {}

    NonOwnerPointer() noexcept {}
    NonOwnerPointer(std::nullptr_t) noexcept {}
    T* get() const {
        if (mControlBlock && mControlBlock->mIsValid) {
            return mPointer;
        }
        return nullptr;
    }
    explicit operator bool() const noexcept { return get() != nullptr; }

    [[nodiscard]] constexpr    operator T*() const { return get(); }
    [[nodiscard]] constexpr T* operator->() const { return get(); }
    [[nodiscard]] constexpr T& operator*() const { return *get(); }

    [[nodiscard]] bool operator==(nullptr_t) noexcept { return get() == nullptr; }
    template <class U>
    [[nodiscard]] bool operator==(NonOwnerPointer<U> const& r) noexcept {
        return get() == r.get();
    }
    template <class U>
    [[nodiscard]] bool operator<=>(NonOwnerPointer<U> const& r) noexcept {
        return get() <=> r.get();
    }
};

}; // namespace Bedrock

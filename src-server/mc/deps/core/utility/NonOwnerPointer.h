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

    template <typename U = T>
        requires std::is_convertible_v<U*, T*>
    NonOwnerPointer(U const& t)
    : NonOwnerPointer(
          static_cast<::Bedrock::EnableNonOwnerReferences const&>(t).mControlBlock,
          const_cast<T*>(std::addressof(t))
      ) {}
    template <typename U = T>
        requires std::is_convertible_v<U*, T*>
    NonOwnerPointer(NonOwnerPointer<U> const& p) : NonOwnerPointer(p.mControlBlock, p.mPointer) {}
    template <typename U = T>
        requires std::is_convertible_v<U*, T*>
    NonOwnerPointer(NonOwnerPointer<U>&& p)
    : NonOwnerPointer(std::move(p.mControlBlock), std::exchange(p.mPointer, nullptr)) {}


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

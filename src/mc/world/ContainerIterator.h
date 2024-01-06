#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/registry/ItemStack.h"


template <typename T, bool IsConst>
class ContainerIterator {
public:
    using difference_type   = std::ptrdiff_t;
    using value_type        = std::conditional_t<IsConst, ItemStack const, ItemStack>;
    using pointer           = value_type*;
    using reference         = value_type&;
    using iterator_category = std::random_access_iterator_tag;

    [[nodiscard]] constexpr ContainerIterator(const T* container, int position)
    : mContainer(const_cast<T*>(container)),
      mSlot(position) {}

    [[nodiscard]] constexpr bool operator==(const ContainerIterator& other) const {
        return mSlot == other.mSlot && mContainer == other.mContainer;
    }
    [[nodiscard]] constexpr std::strong_ordering operator<=>(const ContainerIterator& other) const {
        return mSlot <=> other.mSlot;
    }

    [[nodiscard]] constexpr reference operator*() { return mContainer->getItemNonConst(mSlot); }
    [[nodiscard]] constexpr reference operator*() const { return mContainer->getItem(mSlot); }
    [[nodiscard]] constexpr pointer   operator->() { return mContainer->getItemNonConst(mSlot); }
    [[nodiscard]] constexpr pointer   operator->() const { return &mContainer->getItem(mSlot); }

    constexpr ContainerIterator& operator++() {
        ++mSlot;
        return *this;
    }
    constexpr ContainerIterator& operator--() {
        --mSlot;
        return *this;
    }

    constexpr ContainerIterator operator+(difference_type n) const { return ContainerIterator(mContainer, mSlot + n); }
    constexpr ContainerIterator operator-(difference_type n) const { return ContainerIterator(mContainer, mSlot - n); }

    constexpr ContainerIterator& operator+=(difference_type n) {
        mSlot += n;
        return *this;
    }
    constexpr ContainerIterator& operator-=(difference_type n) {
        mSlot -= n;
        return *this;
    }

    [[nodiscard]] constexpr reference operator[](difference_type n) const { return *(*this + n); }

private:
    T*  mContainer;
    int mSlot;
};

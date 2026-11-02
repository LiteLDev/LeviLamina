#pragma once

#include <algorithm>
#include <concepts>
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <stdexcept>
#include <type_traits>
#include <utility>

#include "ll/api/memory/Memory.h"
#include "mc/deps/core/memory/IMemoryAllocator.h"

namespace ll::data {
class SmallVectorHeader {
public:
    using size_type = uint32_t;

    [[nodiscard]] size_type                  size() const noexcept { return mSize; }
    [[nodiscard]] size_type                  capacity() const noexcept { return mCapacity; }
    [[nodiscard]] bool                       empty() const noexcept { return mSize == 0; }
    [[nodiscard]] static constexpr size_type max_size() noexcept { return std::numeric_limits<size_type>::max(); }

protected:
    static constexpr float growthFactor = 1.5f;

    std::byte* mData;
    size_type  mSize;
    size_type  mCapacity;

    SmallVectorHeader(std::byte* data, size_type capacity) noexcept : mData(data), mSize(0), mCapacity(capacity) {}
};

template <class T>
class SmallVectorBase : public SmallVectorHeader {
public:
    using value_type             = T;
    using size_type              = SmallVectorHeader::size_type;
    using difference_type        = std::ptrdiff_t;
    using reference              = T&;
    using const_reference        = T const&;
    using pointer                = T*;
    using const_pointer          = T const*;
    using iterator               = pointer;
    using const_iterator         = const_pointer;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    SmallVectorBase(SmallVectorBase const&) = delete;
    SmallVectorBase(SmallVectorBase&&)      = delete;

    SmallVectorBase& operator=(SmallVectorBase const& other) {
        if (this != &other) assign(other.begin(), other.end());
        return *this;
    }
    SmallVectorBase& operator=(SmallVectorBase&& other) noexcept(std::is_nothrow_move_constructible_v<T>) {
        if (this == &other) return *this;
        if (other.isInline()) {
            assign(std::make_move_iterator(other.begin()), std::make_move_iterator(other.end()));
            other.clear();
        } else {
            destroyAll();
            freeHeap();
            mData     = std::exchange(other.mData, nullptr);
            mSize     = std::exchange(other.mSize, 0);
            mCapacity = std::exchange(other.mCapacity, 0);
        }
        return *this;
    }
    SmallVectorBase& operator=(std::initializer_list<T> list) {
        assign(list);
        return *this;
    }

    [[nodiscard]] reference       operator[](size_type i) noexcept { return data()[i]; }
    [[nodiscard]] const_reference operator[](size_type i) const noexcept { return data()[i]; }
    [[nodiscard]] reference       at(size_type i) {
        if (i >= mSize) throw std::out_of_range("small_vector index out of range");
        return data()[i];
    }
    [[nodiscard]] const_reference at(size_type i) const {
        if (i >= mSize) throw std::out_of_range("small_vector index out of range");
        return data()[i];
    }
    [[nodiscard]] reference       front() noexcept { return data()[0]; }
    [[nodiscard]] const_reference front() const noexcept { return data()[0]; }
    [[nodiscard]] reference       back() noexcept { return data()[mSize - 1]; }
    [[nodiscard]] const_reference back() const noexcept { return data()[mSize - 1]; }
    [[nodiscard]] pointer         data() noexcept { return std::launder(reinterpret_cast<T*>(mData)); }
    [[nodiscard]] const_pointer   data() const noexcept { return std::launder(reinterpret_cast<T const*>(mData)); }

    iterator               begin() noexcept { return data(); }
    const_iterator         begin() const noexcept { return data(); }
    const_iterator         cbegin() const noexcept { return data(); }
    iterator               end() noexcept { return data() + mSize; }
    const_iterator         end() const noexcept { return data() + mSize; }
    const_iterator         cend() const noexcept { return end(); }
    reverse_iterator       rbegin() noexcept { return reverse_iterator{end()}; }
    const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator{end()}; }
    const_reverse_iterator crbegin() const noexcept { return rbegin(); }
    reverse_iterator       rend() noexcept { return reverse_iterator{begin()}; }
    const_reverse_iterator rend() const noexcept { return const_reverse_iterator{begin()}; }
    const_reverse_iterator crend() const noexcept { return rend(); }

    void reserve(size_type n) {
        if (n > mCapacity) reallocate(n);
    }

    void shrink_to_fit() {
        if (isInline() || mSize == mCapacity) return;
        if (mSize == 0) {
            deallocate(mData);
            mData     = nullptr;
            mCapacity = 0;
        } else {
            reallocate(mSize);
        }
    }

    template <class... Args>
    reference emplace_back(Args&&... args) {
        if (mSize < mCapacity) return emplaceBackNoAllocate(std::forward<Args>(args)...);
        return *emplaceReallocate(end(), std::forward<Args>(args)...);
    }
    reference push_back(T const& value) { return emplace_back(value); }
    reference push_back(T&& value) { return emplace_back(std::move(value)); }

    template <class... Args>
    iterator emplace(const_iterator pos, Args&&... args) {
        if (pos == cend()) return &emplace_back(std::forward<Args>(args)...);
        if (mSize == mCapacity) return emplaceReallocate(pos, std::forward<Args>(args)...);
        T  tmp(std::forward<Args>(args)...);
        T* p = unwrap(pos);
        T* e = end();
        std::construct_at(e, std::move(e[-1]));
        ++mSize;
        std::move_backward(p, e - 1, e);
        *p = std::move(tmp);
        return p;
    }

    iterator insert(const_iterator pos, T const& value) { return emplace(pos, value); }
    iterator insert(const_iterator pos, T&& value) { return emplace(pos, std::move(value)); }
    iterator insert(const_iterator pos, size_type count, T const& value) {
        auto idx = static_cast<size_type>(pos - cbegin());
        if (count == 0) return begin() + idx;
        T tmp(value);
        insertGap(idx, count, [&](T* first, T* last) { std::uninitialized_fill(first, last, tmp); });
        return begin() + idx;
    }
    template <std::input_iterator It>
    iterator insert(const_iterator pos, It first, It last) {
        auto idx = static_cast<size_type>(pos - cbegin());
        if constexpr (std::forward_iterator<It>) {
            auto count = static_cast<size_type>(std::distance(first, last));
            if (count != 0) {
                insertGap(idx, count, [&](T* f, T*) { std::uninitialized_copy(first, last, f); });
            }
        } else {
            for (auto i = idx; first != last; ++first, ++i) emplace(cbegin() + i, *first);
        }
        return begin() + idx;
    }
    iterator insert(const_iterator pos, std::initializer_list<T> list) { return insert(pos, list.begin(), list.end()); }

    void pop_back() noexcept { std::destroy_at(data() + --mSize); }

    iterator erase(const_iterator pos) { return erase(pos, pos + 1); }
    iterator erase(const_iterator first, const_iterator last) {
        T* f = unwrap(first);
        T* l = unwrap(last);
        if (f != l) {
            T* newEnd = std::move(l, end(), f);
            std::destroy(newEnd, end());
            mSize = static_cast<size_type>(newEnd - data());
        }
        return f;
    }

    void clear() noexcept {
        destroyAll();
        mSize = 0;
    }

    void resize(size_type n) {
        resizeImpl(n, [](T* f, T* l) { std::uninitialized_value_construct(f, l); });
    }
    void resize(size_type n, T const& value) {
        resizeImpl(n, [&](T* f, T* l) { std::uninitialized_fill(f, l, value); });
    }

    void assign(size_type count, T const& value) {
        clear();
        reserve(count);
        std::uninitialized_fill_n(data(), count, value);
        mSize = count;
    }
    template <std::input_iterator It>
    void assign(It first, It last) {
        clear();
        if constexpr (std::forward_iterator<It>) {
            auto count = static_cast<size_type>(std::distance(first, last));
            reserve(count);
            std::uninitialized_copy(first, last, data());
            mSize = count;
        } else {
            for (; first != last; ++first) emplace_back(*first);
        }
    }
    void assign(std::initializer_list<T> list) { assign(list.begin(), list.end()); }

    void swap(SmallVectorBase& other) {
        if (this == &other) return;
        if (!isInline() && !other.isInline()) {
            std::swap(mData, other.mData);
            std::swap(mSize, other.mSize);
            std::swap(mCapacity, other.mCapacity);
            return;
        }
        SmallVectorBase& small = mSize <= other.mSize ? *this : other;
        SmallVectorBase& large = mSize <= other.mSize ? other : *this;
        small.reserve(large.mSize);
        large.reserve(small.mSize);
        size_type common = small.mSize;
        std::swap_ranges(small.begin(), small.begin() + common, large.begin());
        std::uninitialized_move(large.begin() + common, large.end(), small.end());
        std::destroy(large.begin() + common, large.end());
        std::swap(small.mSize, large.mSize);
    }

    friend bool operator==(SmallVectorBase const& a, SmallVectorBase const& b) {
        return std::equal(a.begin(), a.end(), b.begin(), b.end());
    }
    friend auto operator<=>(SmallVectorBase const& a, SmallVectorBase const& b) {
        return std::lexicographical_compare_three_way(a.begin(), a.end(), b.begin(), b.end());
    }

protected:
    explicit SmallVectorBase(size_type inlineCap) noexcept : SmallVectorHeader(inlineData(), inlineCap) {}

    ~SmallVectorBase() {
        destroyAll();
        freeHeap();
    }

private:
    std::byte*       inlineData() noexcept { return reinterpret_cast<std::byte*>(this + 1); }
    std::byte const* inlineData() const noexcept { return reinterpret_cast<std::byte const*>(this + 1); }

    bool isInline() const noexcept { return mData == inlineData(); }

    static T* unwrap(const_iterator it) noexcept { return const_cast<T*>(it); }

    static T* allocate(size_type n) {
        size_t bytes = size_t{n} * sizeof(T);
        void*  p     = memory::getDefaultAllocator()._allocate(bytes);
        if (!p) memory::throwMemoryException(bytes);
        return static_cast<T*>(p);
    }
    static void deallocate(void* p) noexcept {
        if (p) memory::getDefaultAllocator()._release(p);
    }
    void freeHeap() noexcept { freeHeap(data()); }
    void freeHeap(T* p) noexcept {
        if (reinterpret_cast<std::byte*>(p) != inlineData()) deallocate(p);
    }

    void destroyAll() noexcept { std::destroy(begin(), end()); }

    static void relocate(T* first, T* last, T* dest) {
        if constexpr (std::is_trivially_copyable_v<T>) {
            if (first != last) std::memmove(dest, first, (last - first) * sizeof(T));
        } else {
            std::uninitialized_move(first, last, dest);
            std::destroy(first, last);
        }
    }

    size_type newCapacity(size_type required) const {
        if (mCapacity > max_size() - static_cast<size_type>(mCapacity / growthFactor)) return max_size();
        auto grown = static_cast<size_type>(mCapacity * growthFactor);
        return std::max(grown, required);
    }

    void reallocate(size_type n) {
        T* fresh = allocate(n);
        T* old   = data();
        try {
            relocate(old, old + mSize, fresh);
        } catch (...) {
            deallocate(fresh);
            throw;
        }
        freeHeap(old);
        mData     = reinterpret_cast<std::byte*>(fresh);
        mCapacity = n;
    }

    template <class... Args>
    reference emplaceBackNoAllocate(Args&&... args) {
        T* p = std::construct_at(end(), std::forward<Args>(args)...);
        ++mSize;
        return *p;
    }

    template <class Fill>
    void insertGap(size_type idx, size_type count, Fill&& fill) {
        if (mSize > max_size() - count) throw std::length_error("New would be greater than max_size");
        size_type required = mSize + count;
        if (required > mCapacity) {
            size_type cap   = newCapacity(required);
            T*        fresh = allocate(cap);
            T*        old   = data();
            try {
                fill(fresh + idx, fresh + idx + count);
            } catch (...) {
                deallocate(fresh);
                throw;
            }
            relocate(old, old + idx, fresh);
            relocate(old + idx, old + mSize, fresh + idx + count);
            freeHeap(old);
            mData     = reinterpret_cast<std::byte*>(fresh);
            mCapacity = cap;
            mSize     = required;
            return;
        }
        T*   p    = data() + idx;
        T*   e    = end();
        auto tail = static_cast<size_type>(e - p);
        if (tail == 0) {
            fill(e, e + count);
        } else {
            // Build the inserted run aside first so a throwing constructor leaves *this intact.
            TempBuffer tmp(count);
            fill(tmp.get(), tmp.get() + count);
            tmp.built();
            if (count <= tail) {
                std::uninitialized_move(e - count, e, e);
                std::move_backward(p, e - count, e);
                std::move(tmp.get(), tmp.get() + count, p);
            } else {
                std::uninitialized_move(p, e, p + count);
                std::move(tmp.get(), tmp.get() + tail, p);
                std::uninitialized_move(tmp.get() + tail, tmp.get() + count, e);
            }
        }
        mSize = required;
    }

    template <class... Args>
    iterator emplaceReallocate(const_iterator pos, Args&&... args) {
        auto idx = static_cast<size_type>(pos - cbegin());
        insertGap(idx, 1, [&](T* f, T*) { std::construct_at(f, std::forward<Args>(args)...); });
        return begin() + idx;
    }

    template <class Fill>
    void resizeImpl(size_type n, Fill&& fill) {
        if (n < mSize) {
            std::destroy(begin() + n, end());
        } else if (n > mSize) {
            reserve(n);
            fill(end(), data() + n);
        }
        mSize = n;
    }

    class TempBuffer {
        T*        mPtr;
        size_type mCount;
        size_type mBuilt{};

    public:
        explicit TempBuffer(size_type n) : mPtr(allocate(n)), mCount(n) {}
        TempBuffer(TempBuffer const&)            = delete;
        TempBuffer& operator=(TempBuffer const&) = delete;
        ~TempBuffer() {
            std::destroy(mPtr, mPtr + mBuilt);
            deallocate(mPtr);
        }
        T*   get() const noexcept { return mPtr; }
        void built() noexcept { mBuilt = mCount; }
    };
};

template <class T, uint32_t N>
class SmallVector : public SmallVectorBase<T> {
    static_assert(N > 0);
    static_assert(alignof(T) <= alignof(SmallVectorHeader), "inline storage must start right after the header");

    using Base = SmallVectorBase<T>;

public:
    using typename Base::size_type;

    static constexpr uint32_t inlineCapacity = N;

    SmallVector() noexcept : Base(N) {}
    SmallVector(SmallVector const& other) : Base(N) { Base::assign(other.begin(), other.end()); }
    SmallVector(SmallVector&& other) noexcept(std::is_nothrow_move_constructible_v<T>) : Base(N) {
        Base::operator=(std::move(other));
    }
    explicit SmallVector(size_type count) : Base(N) { Base::resize(count); }
    SmallVector(size_type count, T const& value) : Base(N) { Base::assign(count, value); }
    SmallVector(std::initializer_list<T> list) : Base(N) { Base::assign(list); }
    template <std::input_iterator It>
    SmallVector(It first, It last) : Base(N) {
        Base::assign(first, last);
    }

    ~SmallVector() = default;

    SmallVector& operator=(SmallVector const& other) {
        Base::operator=(other);
        return *this;
    }
    SmallVector& operator=(SmallVector&& other) noexcept(std::is_nothrow_move_constructible_v<T>) {
        Base::operator=(std::move(other));
        return *this;
    }
    SmallVector& operator=(std::initializer_list<T> list) {
        Base::assign(list);
        return *this;
    }

    friend void swap(SmallVector& a, SmallVector& b) { a.swap(b); }

private:
    alignas(T) std::byte mBuffer[N * sizeof(T)];
};
} // namespace ll::data

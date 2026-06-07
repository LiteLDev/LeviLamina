#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename Key, typename Value, std::size_t Size>
    requires std::is_enum_v<Key>
class DenseEnumMap {
public:
    using key_type       = Key;
    using mapped_type    = Value;
    using value_type     = Value;
    using size_type      = std::size_t;
    using reference      = Value&;
    using const_reference = const Value&;
    using pointer        = Value*;
    using const_pointer  = const Value*;
    using iterator       = typename std::array<Value, Size>::iterator;
    using const_iterator = typename std::array<Value, Size>::const_iterator;
    using reverse_iterator       = typename std::array<Value, Size>::reverse_iterator;
    using const_reverse_iterator = typename std::array<Value, Size>::const_reverse_iterator;

private:
    std::array<Value, Size> mContainer{};

public:
    constexpr DenseEnumMap() = default;

    constexpr DenseEnumMap(std::initializer_list<Value> init) : mContainer{} {
        std::copy_n(init.begin(), std::min(init.size(), Size), mContainer.begin());
    }

    constexpr reference operator[](Key key) noexcept {
        return mContainer[static_cast<size_type>(key)];
    }

    constexpr const_reference operator[](Key key) const noexcept {
        return mContainer[static_cast<size_type>(key)];
    }

    constexpr reference at(Key key) {
        return mContainer.at(static_cast<size_type>(key));
    }

    constexpr const_reference at(Key key) const {
        return mContainer.at(static_cast<size_type>(key));
    }

    constexpr pointer data() noexcept { return mContainer.data(); }
    constexpr const_pointer data() const noexcept { return mContainer.data(); }

    constexpr iterator begin() noexcept { return mContainer.begin(); }
    constexpr iterator end() noexcept { return mContainer.end(); }
    
    constexpr const_iterator begin() const noexcept { return mContainer.begin(); }
    constexpr const_iterator end() const noexcept { return mContainer.end(); }

    constexpr const_iterator cbegin() const noexcept { return mContainer.cbegin(); }
    constexpr const_iterator cend() const noexcept { return mContainer.cend(); }

    constexpr reverse_iterator rbegin() noexcept { return mContainer.rbegin(); }
    constexpr reverse_iterator rend() noexcept { return mContainer.rend(); }
    constexpr const_reverse_iterator crbegin() const noexcept { return mContainer.crbegin(); }
    constexpr const_reverse_iterator crend() const noexcept { return mContainer.crend(); }

    [[nodiscard]] constexpr std::size_t size() const noexcept { return Size; }
    [[nodiscard]] constexpr bool empty() const noexcept { return Size == 0; }

    constexpr void fill(const Value& value) {
        mContainer.fill(value);
    }
};

} // namespace Bedrock

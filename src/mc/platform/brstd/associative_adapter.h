#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/platform/brstd/no_mapped_container_t.h"
#include "mc/platform/brstd/no_value_t.h"

#include <algorithm>
#include <compare>
#include <cstddef>
#include <iterator>
#include <type_traits>
#include <utility>

namespace brstd {

template <typename Key, typename T, typename Compare, typename KeyContainer, typename MappedContainer>
class associative_adapter {
public:
    static constexpr bool no_mapped_container = std::is_same_v<MappedContainer, ::brstd::no_mapped_container_t>;

    using key_type              = Key;
    using mapped_type           = std::conditional_t<no_mapped_container, Key, T>;
    using key_compare           = Compare;
    using key_container_type    = KeyContainer;
    using mapped_container_type = MappedContainer;
    using size_type             = typename key_container_type::size_type;
    using difference_type       = typename std::iterator_traits<typename key_container_type::iterator>::difference_type;

private:
    struct no_mapped_iterator {
    public:
        using difference_type   = std::ptrdiff_t;
        using value_type        = ::brstd::no_value_t;
        using reference         = ::brstd::no_value_t&;
        using iterator_category = std::random_access_iterator_tag;

    public:
        reference operator*() const {
            static ::brstd::no_value_t value{};
            return value;
        }

        no_mapped_iterator&  operator++() { return *this; }
        no_mapped_iterator   operator++(int) { return *this; }
        no_mapped_iterator&  operator--() { return *this; }
        no_mapped_iterator   operator--(int) { return *this; }
        no_mapped_iterator&  operator+=(difference_type) { return *this; }
        no_mapped_iterator&  operator-=(difference_type) { return *this; }
        no_mapped_iterator   operator+(difference_type) const { return *this; }
        no_mapped_iterator   operator-(difference_type) const { return *this; }
        difference_type      operator-(no_mapped_iterator const&) const { return 0; }
        bool                 operator==(no_mapped_iterator const&) const  = default;
        std::strong_ordering operator<=>(no_mapped_iterator const&) const = default;
    };

    using mapped_iterator =
        std::conditional_t<no_mapped_container, no_mapped_iterator, typename mapped_container_type::iterator>;
    using mapped_const_iterator =
        std::conditional_t<no_mapped_container, no_mapped_iterator, typename mapped_container_type::const_iterator>;

    template <typename KeysIterator, typename ValuesIterator, typename Reference>
    class zip_iterator_impl {
    public:
        using difference_type   = typename std::iterator_traits<KeysIterator>::difference_type;
        using reference         = Reference;
        using iterator_category = typename std::iterator_traits<KeysIterator>::iterator_category;

    public:
        zip_iterator_impl() = default;
        zip_iterator_impl(KeysIterator keysIt, ValuesIterator valuesIt) : mKeysIt(keysIt), mValuesIt(valuesIt) {}

        reference operator*() const {
            if constexpr (no_mapped_container) {
                return *mKeysIt;
            } else {
                return reference(*mKeysIt, *mValuesIt);
            }
        }

        zip_iterator_impl& operator++() {
            ++mKeysIt;
            ++mValuesIt;
            return *this;
        }

        zip_iterator_impl operator++(int) {
            auto copy = *this;
            ++(*this);
            return copy;
        }

        zip_iterator_impl& operator--() {
            --mKeysIt;
            --mValuesIt;
            return *this;
        }

        zip_iterator_impl operator--(int) {
            auto copy = *this;
            --(*this);
            return copy;
        }

        zip_iterator_impl& operator+=(difference_type offset) {
            mKeysIt   += offset;
            mValuesIt += offset;
            return *this;
        }

        zip_iterator_impl& operator-=(difference_type offset) {
            mKeysIt   -= offset;
            mValuesIt -= offset;
            return *this;
        }

        zip_iterator_impl operator+(difference_type offset) const {
            return zip_iterator_impl(mKeysIt + offset, mValuesIt + offset);
        }

        zip_iterator_impl operator-(difference_type offset) const {
            return zip_iterator_impl(mKeysIt - offset, mValuesIt - offset);
        }

        difference_type      operator-(zip_iterator_impl const& other) const { return mKeysIt - other.mKeysIt; }
        bool                 operator==(zip_iterator_impl const& other) const { return mKeysIt == other.mKeysIt; }
        std::strong_ordering operator<=>(zip_iterator_impl const& other) const { return mKeysIt <=> other.mKeysIt; }

    private:
        KeysIterator   mKeysIt{};
        ValuesIterator mValuesIt{};
    };

public:
    using zip_iterator = zip_iterator_impl<
        typename key_container_type::iterator,
        mapped_iterator,
        std::conditional_t<no_mapped_container, key_type const&, std::pair<key_type const&, T&>>>;
    using const_zip_iterator = zip_iterator_impl<
        typename key_container_type::const_iterator,
        mapped_const_iterator,
        std::conditional_t<no_mapped_container, key_type const&, std::pair<key_type const&, T const&>>>;

    using iterator       = zip_iterator;
    using const_iterator = const_zip_iterator;

    struct containers {
        key_container_type                         keys;
        LL_NO_UNIQUE_ADDRESS mapped_container_type values;
    };

public:
    iterator       begin() noexcept { return iterator(mContainers.keys.begin(), mContainers.values.begin()); }
    const_iterator begin() const noexcept {
        return const_iterator(mContainers.keys.begin(), mContainers.values.begin());
    }
    iterator       end() noexcept { return iterator(mContainers.keys.end(), mContainers.values.end()); }
    const_iterator end() const noexcept { return const_iterator(mContainers.keys.end(), mContainers.values.end()); }
    const_iterator cbegin() const noexcept { return begin(); }
    const_iterator cend() const noexcept { return end(); }

    iterator find(key_type const& key) {
        auto first = mContainers.keys.begin();
        auto last  = mContainers.keys.end();
        auto it    = std::lower_bound(first, last, key, mCompare);
        if (it != last && !mCompare(*it, key) && !mCompare(key, *it)) {
            auto offset = static_cast<difference_type>(it - first);
            return iterator(it, mContainers.values.begin() + offset);
        }
        return end();
    }

    const_iterator find(key_type const& key) const {
        auto first = mContainers.keys.begin();
        auto last  = mContainers.keys.end();
        auto it    = std::lower_bound(first, last, key, mCompare);
        if (it != last && !mCompare(*it, key) && !mCompare(key, *it)) {
            auto offset = static_cast<difference_type>(it - first);
            return const_iterator(it, mContainers.values.begin() + offset);
        }
        return end();
    }

private:
    containers                       mContainers{};
    LL_NO_UNIQUE_ADDRESS key_compare mCompare{};
};

} // namespace brstd
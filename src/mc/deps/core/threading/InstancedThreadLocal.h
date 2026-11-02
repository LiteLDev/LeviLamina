#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/core/container/list.h"
#include "mc/deps/core/threading/InstancedThreadLocalBase.h"
#include "mc/platform/threading/TlsSlot.h"

namespace Bedrock::Threading {

template <typename T, typename Alloc = ::std::allocator<T>>
class InstancedThreadLocal : public ::Bedrock::Threading::InstancedThreadLocalBase {
    struct Item : ::Bedrock::Intrusive::list_base_hook<> {
        alignas(T)::std::byte mData[sizeof(T)];

        [[nodiscard]] T* value() noexcept { return ::std::launder(reinterpret_cast<T*>(mData)); }
    };

    using ItemList      = ::Bedrock::Intrusive::list<Item>;
    using ItemAllocator = typename ::std::allocator_traits<Alloc>::template rebind_alloc<Item>;
    using ItemTraits    = ::std::allocator_traits<ItemAllocator>;

public:
    class IteratorType {
        friend InstancedThreadLocal;

        typename ItemList::iterator mIterator;

        explicit IteratorType(typename ItemList::iterator iterator) noexcept : mIterator(iterator) {}

    public:
        [[nodiscard]] T& operator*() const noexcept { return *mIterator->value(); }
        [[nodiscard]] T* operator->() const noexcept { return mIterator->value(); }

        IteratorType& operator++() noexcept {
            ++mIterator;
            return *this;
        }

        [[nodiscard]] bool operator==(IteratorType const&) const noexcept = default;
    };

    InstancedThreadLocal() : mConstructor([](T* value) { ::std::construct_at(value); }) {}

    explicit InstancedThreadLocal(::std::function<void(T*)> constructor) : mConstructor(::std::move(constructor)) {}

    InstancedThreadLocal(InstancedThreadLocal const&)            = delete;
    InstancedThreadLocal& operator=(InstancedThreadLocal const&) = delete;

    ~InstancedThreadLocal() { destroyItems(); }

    [[nodiscard]] T& operator*() { return *load(); }
    [[nodiscard]] T* operator->() { return load(); }

    [[nodiscard]] IteratorType begin() const noexcept { return IteratorType{mItems.begin()}; }
    [[nodiscard]] IteratorType end() const noexcept { return IteratorType{mItems.end()}; }

private:
    T* load() {
        if (auto item = static_cast<Item*>(mKey.getValue())) {
            return item->value();
        }
        ItemAllocator allocator;
        Item*         item = ItemTraits::allocate(allocator, 1);
        ::std::construct_at(item);
        mConstructor(item->value());
        mKey.setValue(item);
        ::std::lock_guard lock{mMutex};
        mItems.push_back(*item);
        return item->value();
    }

    void destroyItems() {
        ItemAllocator     allocator;
        ::std::lock_guard lock{mMutex};
        while (!mItems.empty()) {
            Item& item = mItems.front();
            ::std::destroy_at(item.value());
            ::std::destroy_at(&item);
            ItemTraits::deallocate(allocator, &item, 1);
        }
    }

    ::std::function<void(T*)>     mConstructor;
    mutable ItemList              mItems;
    ::std::mutex                  mMutex;
    ::Bedrock::Threading::TlsSlot mKey;
};

} // namespace Bedrock::Threading

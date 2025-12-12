#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/DataItem.h"

template <typename T>
    requires(DataItem::TypeList::contains<T>)
class DataItem2 : public DataItem {
public:
    ::DataItemType mType;
    ::DataItem::ID mId;
    T              mValue;

public:
    [[nodiscard]] ::DataItem::ID getId() const override;

    [[nodiscard]] ::DataItemType getType() const override;

    [[nodiscard]] bool isDataEqual(::DataItem const&) const override;

    [[nodiscard]] ::std::unique_ptr<::DataItem> clone() const override;

public:
    [[nodiscard]] constexpr T const& value() const { return mValue; }

    [[nodiscard]] constexpr T& value() { return mValue; }

    [[nodiscard]] constexpr explicit operator T const&() const { return mValue; }

    [[nodiscard]] constexpr explicit operator T&() { return mValue; }

    template <class T2>
    constexpr void setData(T2&& value) {
        mValue = value;
    }
    template <class T2>
    constexpr DataItem2<T>& operator=(T2&& value) {
        setData(value);
        return *this;
    }
    template <class... Args>
    constexpr explicit DataItem2(::DataItem::ID key, Args&&... args)
    : mType((::DataItemType)DataItem::TypeList::index<T>),
      mId(key),
      mValue(std::forward<Args>(args)...) {}
};

template <typename T>
    requires(DataItem::TypeList::contains<T>)
constexpr optional_ref<T const> DataItem::getData() const {
    if (getType() == (::DataItemType)TypeList::index<T>) return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
    requires(DataItem::TypeList::contains<T>)
constexpr optional_ref<T> DataItem::getData() {
    if (getType() == (::DataItemType)TypeList::index<T>) return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
    requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
constexpr bool DataItem::setData(T&& value) {
    if (getType() == (::DataItemType)TypeList::index<T>) return false;
    ((DataItem2<T>*)this)->setData(std::forward<T>(value));
    return true;
}

template <typename T>
    requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
LL_CONSTEXPR23 std::unique_ptr<DataItem> DataItem::create(::DataItem::ID key, T&& value) {
    return std::make_unique<DataItem2<std::remove_cvref_t<T>>>(key, std::forward<T>(value));
}

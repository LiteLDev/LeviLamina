#pragma once

#include "ll/api/base/Meta.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDataIDs.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/actor/DataItemType.h"

class DataItem {
public:
    // DataItem inner types define
    using ID = ushort;

public:
    using TypeList = ll::meta::TypeList<schar, short, int, float, std::string, CompoundTag, BlockPos, int64, Vec3>;

public:
    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T const> getData() const;
    template <typename T>
        requires(DataItem::TypeList::contains<T>)
    [[nodiscard]] constexpr optional_ref<T> getData();
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    constexpr bool setData(T&& value);

    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, T&& value);
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(ushort key, bool value) {
        return create(key, (schar)value);
    }
    template <typename T>
        requires(DataItem::TypeList::contains<std::remove_cvref_t<T>>)
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, T&& value) {
        return create(static_cast<std::underlying_type_t<::ActorDataIDs>>(key), std::forward<T>(value));
    }
    [[nodiscard]] static LL_CONSTEXPR23 std::unique_ptr<DataItem> create(::ActorDataIDs key, bool value) {
        return create(key, (schar)value);
    }

protected:
    DataItem() = default;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataItem() = default;

    // vIndex: 1
    virtual ushort getId() const = 0;

    // vIndex: 2
    virtual ::DataItemType getType() const = 0;

    // vIndex: 3
    virtual bool isDataEqual(::DataItem const&) const = 0;

    // vIndex: 4
    virtual ::std::unique_ptr<::DataItem> clone() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

#include "mc/world/actor/DataItem2.h"

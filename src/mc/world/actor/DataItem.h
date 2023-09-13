#pragma once

#include <utility>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/utilities/ActorDataIDs.h"
#include "mc/enums/DataItemType.h"
#include "mc/math/Vec2.h"
#include "mc/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

class DataItem {
public:
    enum class DataItemType mType;
    ushort                  mId;
    bool                    mDirty = true;

    template <typename T>
    inline optional_ref<T const> getData() const;
    template <typename T>
    inline optional_ref<T> getData();
    template <typename T>
    inline bool setData(T const& value);

    DataItem(DataItemType type, ushort id) : mType(type), mId(id) {}

    template <typename T>
    inline static std::unique_ptr<DataItem> create(ushort key, T const& value);

    template <typename T>
    inline static std::unique_ptr<DataItem> create(enum class ActorDataIDs key, T const& value);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isDataEqual@DataItem@@UEBA_NAEBV1@@Z
    virtual bool isDataEqual(class DataItem const&) const;

    // vIndex: 2, symbol:
    // ?clone@?$DataItem2@H@@UEBA?AV?$unique_ptr@VDataItem@@U?$default_delete@VDataItem@@@std@@@std@@XZ
    virtual std::unique_ptr<class DataItem> clone() const = 0;

    // symbol: ??1DataItem@@UEAA@XZ
    MCVAPI ~DataItem();

    // NOLINTEND
};

template <typename T>
class DataItem2 : public DataItem {
    T mValue;

    friend class DataItem;

public:
    [[nodiscard]] std::unique_ptr<DataItem> clone() const override;

    [[nodiscard]] T const& getData() const { return mValue; };

    inline void setData(T const& value) {
        mDirty = true;
        mValue = value;
    }
    inline DataItem2<T>& operator=(T const& value) {
        setData(value);
        return *this;
    }
    inline DataItem2(ushort key, T const& value) = delete;
    inline static std::unique_ptr<DataItem> create(ushort key, T const& value) {
        return std::make_unique<DataItem>(key, value);
    }
    static DataItemType const DATA_ITEM_TYPE;
};

template <typename T>
DataItemType const DataItem2<T>::DATA_ITEM_TYPE = static_cast<DataItemType>(-1);

template <>
DataItemType const DataItem2<schar>::DATA_ITEM_TYPE = DataItemType::Byte;
template <>
DataItemType const DataItem2<short>::DATA_ITEM_TYPE = DataItemType::Short;
template <>
DataItemType const DataItem2<int>::DATA_ITEM_TYPE = DataItemType::Int;
template <>
DataItemType const DataItem2<float>::DATA_ITEM_TYPE = DataItemType::Float;
template <>
DataItemType const DataItem2<std::string>::DATA_ITEM_TYPE = DataItemType::String;
template <>
DataItemType const DataItem2<CompoundTag>::DATA_ITEM_TYPE = DataItemType::CompoundTag;
template <>
DataItemType const DataItem2<BlockPos>::DATA_ITEM_TYPE = DataItemType::BlockPos;
template <>
DataItemType const DataItem2<int64>::DATA_ITEM_TYPE = DataItemType::Int64;
template <>
DataItemType const DataItem2<Vec3>::DATA_ITEM_TYPE = DataItemType::Vec3;

template <>
inline void DataItem2<CompoundTag>::setData(CompoundTag const& value) {
    mValue.deepCopy(value);
}

template <>
inline DataItem2<schar>::DataItem2(ushort key, schar const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<short>::DataItem2(ushort key, short const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<int>::DataItem2(ushort key, int const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<float>::DataItem2(ushort key, float const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<std::string>::DataItem2(ushort key, std::string const& value) // NOLINT
: DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<class CompoundTag>::DataItem2(ushort key, class CompoundTag const& value)
: DataItem(DATA_ITEM_TYPE, key) {
    mValue.deepCopy(value);
}
template <>
inline DataItem2<BlockPos>::DataItem2(ushort key, BlockPos const& value)
: DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<int64>::DataItem2(ushort key, int64 const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}
template <>
inline DataItem2<Vec3>::DataItem2(ushort key, Vec3 const& value) : DataItem(DATA_ITEM_TYPE, key), mValue(value) {}

template <typename T>
inline optional_ref<T const> DataItem::getData() const {
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
inline optional_ref<T> DataItem::getData() {
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    return nullptr;
}

template <typename T>
inline bool DataItem::setData(T const& value) {
    if (this->mType != DataItem2<T>::DATA_ITEM_TYPE)
        return false;
    ((DataItem2<T>*)this)->setData(value);
    return true;
}

template <typename T>
inline std::unique_ptr<DataItem> DataItem::create(ushort key, T const& value) {
    return std::unique_ptr<DataItem2<T>>(key, value);
}

template <typename T>
inline std::unique_ptr<DataItem> DataItem::create(ActorDataIDs key, T const& value) {
    return std::unique_ptr<DataItem2<T>>((ushort)key, value);
}

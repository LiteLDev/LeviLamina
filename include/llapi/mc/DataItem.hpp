#pragma once
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

// namespace DataItemTypes
//{
// typedef __int64 FLAGS;
// typedef int HEALTH;
// }

enum class DataItemType : unsigned char {
    Byte = 0,
    Short = 1,
    Int = 2,
    Float = 3,
    String = 4,
    CompoundTag = 5,
    BlockPos = 6,
    Int64 = 7,
    Vec3 = 8,
};

#undef BEFORE_EXTRA

class DataItem {

#define AFTER_EXTRA
    // Add Member There
public:
    DataItemType mType; // 8
    unsigned short mId; // 10
    bool mDirty = true; // 12

    template <typename T>
    inline T const& getData() const;
    template <typename T>
    inline T& getData();
    template <typename T>
    inline bool setData(T const& value);

    DataItem(DataItemType type, unsigned short id)
    : mId(id)
    , mType(type) {
    }

    template <typename T>
    inline static std::unique_ptr<DataItem> create(unsigned short key, T const& value);

    template <typename T>
    inline static std::unique_ptr<DataItem> create(ActorDataIDs key, T const& value);

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAITEM
public:
    class DataItem& operator=(class DataItem const&) = delete;
    DataItem(class DataItem const&) = delete;
    DataItem() = delete;
#endif

public:
    /*0*/ virtual ~DataItem();
    /*1*/ virtual bool isDataEqual(class DataItem const&) const;
    /*2*/ virtual std::unique_ptr<DataItem> clone() const = 0; // ~DataItem()
    /*
    inline  ~DataItem(){
         (DataItem::*rv)();
        *((void**)&rv) = LL_RESOLVE_SYMBOL("??1DataItem@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:
private:
};
#include "DataItem2.hpp"

template <typename T>
inline T const& DataItem::getData() const {
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    // throw("DataItemType Not Match");
    return *(T*)0;
}

template <typename T>
inline T& DataItem::getData() {
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return ((DataItem2<T>*)this)->mValue;
    // throw("DataItemType Not Match");
    return *(T*)0;
}

template <typename T>
inline bool DataItem::setData(T const& value) {
    if (this->mType == DataItem2<T>::DATA_ITEM_TYPE)
        return false;
    ((DataItem2<T>*)this)->setData(value);
    return true;
}

template <typename T>
inline static std::unique_ptr<DataItem> DataItem::create(unsigned short key, T const& value) {
    return std::unique_ptr<DataItem>(new DataItem2(key, value));
}

template <typename T>
inline static std::unique_ptr<DataItem> DataItem::create(ActorDataIDs key, T const& value) {
    return std::unique_ptr<DataItem>(new DataItem2((unsigned short)key, value));
}

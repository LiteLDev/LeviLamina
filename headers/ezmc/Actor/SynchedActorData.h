#pragma once

#include <algorithm>
#include <cstdint>
#include <memory>
#include <vector>

#include "../Core/DataItem.h"

class SynchedActorData {
public:
    std::vector<std::unique_ptr<DataItem>> items;
    uint16_t                               start, end;

    void _setDirty(uint16_t pos) {
        start = std::min(pos, start);
        end   = std::max(pos, end);
    }

    DataItem& _get(uint16_t pos) {
        return *items[pos];
    }
    DataItem* _find(uint16_t pos) {
        return items.size() > pos ? &*items[pos] : nullptr;
    }

    bool isDirty() const {
        return start <= end;
    }

    void markDirty(DataItem& item) {
        item.setDirty();
        _setDirty(item.getId());
    }

    void markDirty(uint16_t id) {
        _setDirty(id);
    }

    void _resizeToContain(uint16_t id) {
        if (items.size() <= id)
            items.resize(id);
    }

    template <typename T>
    void define(uint16_t id, T const& value) {
        _resizeToContain(id);
        items[id] = std::move(std::make_unique<DataItem2<T>>(id, value));
    }

    template <typename T>
    void append(uint16_t id, T const& value) {
        items.emplace_back(std::make_unique<DataItem2<T>>(id, value));
    }

    template <typename T>
    void set(DataItem* item, T const& value) {
        if (item) {
            if (item->type == DataTypeMap::typeFor<T>) {
                auto titem = static_cast<DataItem2<T>*>(item);
                if (DataTypeMap::neqFor<T>::neq(titem->value, value)) {
                    DataTypeMap::copyFor<T>::copy(titem->value, value);
                    markDirty(*item);
                }
            }
        }
    }
    template <typename T>
    void set(uint16_t id, T const& value) {
        set<T>(_find(id), value);
    }

    // T = int64_t | signed char
    template <typename T>
    MCAPI void setFlag(uint16_t id, int32_t bit);
    template <typename T>
    MCAPI void clearFlag(uint16_t id, int32_t bit);
    template <typename T>
    inline bool getFlag(uint16_t id, int32_t bit) {
        if (auto item = _find(id)) {
            return static_cast<DataItem2<T>*>(item)->getFlag(bit);
        }
        return false;
    }
};

static_assert(offsetof(SynchedActorData, start) == 24);
static_assert(offsetof(SynchedActorData, end) == 26);
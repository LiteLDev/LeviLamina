#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class WeightedRandomList {
public:
    uint                             mTotalWeight;
    std::vector<std::pair<T0, uint>> mData;

    void push(T0 const& item, uint weight) {
        mData.emplace_back(item, weight);
        mTotalWeight += weight;
    }
    void push(T0&& item, uint weight) {
        mData.emplace_back(std::move(item), weight);
        mTotalWeight += weight;
    }
    void clear() {
        mData.clear();
        mTotalWeight = 0;
    }
    uint total() const { return mTotalWeight; }

    size_t size() const { return mData.size(); }

    bool empty() const { return mData.empty(); }

    template <typename Fn>
    void erase_if(Fn&& fn) {
        auto it = std::remove_if(mData.begin(), mData.end(), std::forward<Fn>(fn));
        for (auto i = it; i != mData.end(); ++i) {
            mTotalWeight -= i->second;
        }
        mData.erase(it, mData.end());
    }
};

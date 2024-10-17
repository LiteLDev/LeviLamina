#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename T1>
class BidirectionalUnorderedMap {
public:
    std::unordered_map<T0, T1> mRight;
    std::unordered_map<T1, T0> mLeft;

    T1&       operator[](T0 const& key) { return mRight[key]; }
    T1 const& operator[](T0 const& key) const { return mRight[key]; }

    T0&       operator()(T1 const& value) { return mLeft[value]; }
    T0 const& operator()(T1 const& value) const { return mLeft[value]; }

    bool contains(T0 const& a) const {
        if constexpr (std::is_same_v<T0, T1>) {
            return mLeft.contains(a) || mRight.contains(a);
        } else {
            return mRight.contains(a);
        }
    }
    bool contains(T1 const& a) const
        requires(!std::is_same_v<T0, T1>)
    {
        return mLeft.contains(a);
    }
    void emplace(T0 const& a1, T1 const& a2) {
        mRight.emplace(a1, a2);
        mLeft.emplace(a2, a1);
    }
    void insert_or_assign(T0 const& a1, T1 const& a2) {
        mRight.insert_or_assign(a1, a2);
        mLeft.insert_or_assign(a2, a1);
    }
    void eraser(T0 const& a) {
        if (!mRight.contains(a)) {
            return;
        }
        mRight.erase(a);
        mLeft.erase(mRight[a]);
    }
    void erasel(T1 const& a) {
        if (!mLeft.contains(a)) {
            return;
        }
        mLeft.erase(a);
        mRight.erase(mLeft[a]);
    }
    void erase(T0 const& a)
        requires(!std::is_same_v<T0, T1>)
    {
        eraser(a);
    }
    void erase(T1 const& a)
        requires(!std::is_same_v<T0, T1>)
    {
        erasel(a);
    }
    T1& atr(T0 const& a) { return mRight.at(a); }
    T0& atl(T1 const& a) { return mLeft.at(a); }
    T1& at(T0 const& a)
        requires(!std::is_same_v<T0, T1>)
    {
        return atr(a);
    }
    T0& at(T1 const& a)
        requires(!std::is_same_v<T0, T1>)
    {
        return atl(a);
    }
    T1 const& atr(T0 const& a) const { return mRight.at(a); }
    T0 const& atl(T1 const& a) const { return mLeft.at(a); }
    T1 const& at(T0 const& a) const
        requires(!std::is_same_v<T0, T1>)
    {
        return atr(a);
    }
    T0 const& at(T1 const& a) const
        requires(!std::is_same_v<T0, T1>)
    {
        return atl(a);
    }
};

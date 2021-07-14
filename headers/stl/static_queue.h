#pragma once
#include <initializer_list>
#include "views.h"

template <typename T, size_t CAP = 256>
class static_queue {
    char data[sizeof(T) * CAP];
    size_t count;

  public:
    static_queue() { count = 0; }
    static_queue(std::initializer_list<T> const &l) {
        count = 0;
        for (auto &i : l) {
            push_back(i);
        }
    }
    size_t size() const { return count; }
    bool empty() const { return size() == 0; }
    bool full() const { return size() == CAP; }
    void clear() {
        while (!empty())
            pop_back();
    }
    template <typename... P>
    T &emplace_back(P &&... arg) {
        T *dst = (T *)(data + count * sizeof(T));
        new (dst) T(std::forward<P>(arg)...);
        count++;
        return *dst;
    }
    void push_back(T const &arg) {
        T *dst = (T *)(data + count * sizeof(T));
        count++;
        new (dst) T(arg);
    }
    T &front() const { return *(T *)data; }
    T &back() const {
        T *dst = (T *)(data + (count - 1) * sizeof(T));
        return *dst;
    }
    void pop_back() {
        T &bk = back();
        bk.~T();
        count--;
    }
    T &operator[](size_t idx) const { return *(T *)(data + idx * sizeof(T)); }
    array_view<T> asView() const { return {(T *)data, ((T *)data) + count}; }
    operator array_view<T>() const { return asView(); }
    struct iterator {
        static_queue const &thi;
        size_t now;
        bool operator==(const iterator &x) const { return now == x.now; }
        bool operator!=(const iterator &x) const { return now != x.now; }
        T &operator->() { return thi[now]; }
        T &operator*() { return thi[now]; }
        void operator++() { now++; }
    };
    iterator begin() const { return {*this, 0}; }
    iterator end() const { return {*this, size()}; }
};
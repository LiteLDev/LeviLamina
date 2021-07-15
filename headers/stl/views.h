#pragma once
#include <algorithm>
#include <cstdint>
#include <iostream>

using std::string_view;

class split_view {
  private:
    const char *now;
    const char *next;
    const char *cend;
    string_view delim;
    const char *__find(const char *start) {
        const char *_now = start;
        while (_now < cend) {
            if (_now + delim.size() > cend) {
                return cend;
            }
            if (memcmp(_now, delim.data(), delim.size()) == 0)
                return _now;
            ++_now;
        }
        return _now;
    }

  public:
    split_view(string_view sv, string_view split = ",") {
        delim = split;
        now   = sv.data();
        cend  = sv.data() + sv.size();
        next  = __find(now);
    }
    bool end() { return now >= cend; }
    operator bool() { return !end(); }
    void operator++() {
        now  = next + delim.size();
        next = __find(now);
    }
    string_view get() { return string_view(now, next - now); }
    string_view operator*() { return get(); }
};
#define CINLINE constexpr inline
template <typename T>
constexpr bool is_sval = std::is_pod_v<T> && (sizeof(T) <= 8);
template <typename T = char>
struct array_view {
    using ARGTP                  = std::conditional_t<is_sval<T>, T, const T &>;
    static constexpr size_t npos = (std::numeric_limits<long long>::max)();
    T *data;
    size_t siz;
    CINLINE size_t size() const { return siz; }
    CINLINE array_view<T> slice(size_t startidx, size_t _endidx = npos) const {  //[start,end)
        auto endidx = (std::min)(siz, _endidx);
        return array_view<T>{data + startidx, endidx - startidx};
    }
    CINLINE array_view<T> subview(size_t startidx, size_t _count = npos) const {
        auto count = (std::min)(siz - startidx, _count);
        return array_view<T>{data + startidx, count};
    }
    CINLINE T const &operator[](int idx) const { return data[idx]; }
    CINLINE T &operator[](int idx) { return data[idx]; }
    struct iterator {
        T *now;
        size_t remain;
        CINLINE bool operator!=(const iterator &r) { return remain != r.remain; }
        CINLINE bool operator==(const iterator &r) { return remain == r.remain; }
        inline void operator++() {
            now++;
            remain--;
        }
        inline void operator--() {
            now--;
            remain++;
        }
        CINLINE T &operator*() { return *now; }
        CINLINE T &operator->() { return *now; }
    };
    CINLINE iterator begin() { return {data, size()}; }
    CINLINE iterator end() const { return {data, 0}; }
    bool has(ARGTP x) const {
        for (size_t i = 0; i < siz; ++i) {
            if (data[i] == x)
                return true;
        }
        return false;
    }
    size_t count(ARGTP x) const {
        size_t rv = 0;
        for (size_t i = 0; i < siz; ++i)
            if (data[i] == x)
                rv++;
        return rv;
    }
    size_t find(ARGTP x, size_t start = 0) const {
        for (size_t i = start; i < siz; ++i)
            if (data[i] == x)
                return i;
        return npos;
    }
    bool toBack_Pop(ARGTP x) {
        auto pos = find(x);
        if (pos != npos) {
            std::swap(data[pos], data[siz - 1]);
            siz--;
            return true;
        }
        return false;
    }
    CINLINE operator string_view() const { return {(const char *)data, siz * sizeof(T)}; }
    array_view(string_view v) {
        data = (T *)v.data();
        siz  = v.size() / sizeof(T);
    }
    array_view(const T *s, const T *e) {
        data = (T *)s;
        siz  = std::distance(s, e);
    }
    array_view(const T *s, size_t sz) {
        data = (T *)s;
        siz  = sz;
    }
    array_view(T const &x) {
        siz  = 1;
        data = (T *)&x;
    }
};

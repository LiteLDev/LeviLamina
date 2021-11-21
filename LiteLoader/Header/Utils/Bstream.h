#pragma once
#include <cstdint>
#include <cstring>
#include <list>
#include <string>
#include <string_view>
#include <type_traits>
#include <unordered_map>
#include <vector>
#ifdef BUF_CHK
#    define DO_BUF_CHK() assert(datamax > data)
#    define BUF_CHK_VAR uintptr_t datamax
#else
#    define DO_BUF_CHK()
#    define BUF_CHK_VAR
#endif
using std::string, std::string_view;
template <class T>
struct is_safe_obj
    : std::integral_constant<bool, !std::is_class<std::remove_reference_t<T>>::value> {};

typedef unsigned int bsize_t;
class RBStream {
  public:
    uintptr_t data;
    BUF_CHK_VAR;
    RBStream(void *dat, size_t len) {
        data = (uintptr_t)dat;
        (void)len;
#ifdef BUF_CHK
        datamax = data;
        datamax += len;
#endif
    }
    RBStream(string_view x) { *this = {(void *)x.data(), (size_t)x.size()}; }

  private:
    template <typename T1, typename T2>
    void __get(std::unordered_map<T1, T2> &x) {
        bsize_t sz;
        __get(sz);
        x.reserve(sz);
        for (bsize_t i = 0; i < sz; ++i) {
            T1 local;
            T2 local2;
            __get(local);
            __get(local2);
            x.insert({std::move(local), std::move(local2)});
        }
    }
    template <typename T1>
    void __get(std::vector<T1> &x) {
        bsize_t sz;
        __get(sz);
        x.reserve(sz);
        for (bsize_t i = 0; i < sz; ++i) {
            T1 local;
            __get(local);
            x.push_back(std::move(local));
        }
    }
    template <typename T1>
    void __get(std::list<T1> &x) {
        bsize_t sz;
        __get(sz);
        for (bsize_t i = 0; i < sz; ++i) {
            T1 local;
            __get(local);
            x.push_back(std::move(local));
        }
    }
    void __get(string &x) {
        bsize_t sz;
        __get(sz);
        x.reserve(sz);
        x.append((const char *)data, sz);
        data += sz;
        DO_BUF_CHK();
    }
    template <typename T>
    void __get(T &x) {
        if constexpr (is_safe_obj<T>()) {
            static_assert(!std::is_reference<T>());
            memcpy(&x, (void *)data, sizeof(x));
            data += sizeof(T);
            DO_BUF_CHK();
        } else {
            x.unpack(*this);
        }
    }

  public:
    template <typename... T>
    void apply(T &... args) {
        (__get(args), ...);
    }
    void read(void *dst, size_t n) {
        memcpy(dst, (void *)data, n);
        data += n;
        DO_BUF_CHK();
    }
};
template <typename container>
class WBStreamImpl {
  public:
    container data;

  private:
    template <typename T1, typename T2>
    void __put(std::unordered_map<T1, T2> const &x) {
        bsize_t sz = (bsize_t)x.size();
        __put(sz);
        for (auto &[k, v] : x) {
            __put(k);
            __put(v);
        }
    }
    template <typename T2>
    void __put(std::vector<T2> const &x) {
        bsize_t sz = x.size();
        __put(sz);
        for (auto i = x.begin(); i != x.end(); ++i) {
            __put(*i);
        }
    }
    template <typename T2>
    void __put(std::list<T2> const &x) {
        bsize_t sz = (bsize_t)x.size();
        __put(sz);
        for (auto i = x.begin(); i != x.end(); ++i) {
            __put(*i);
        }
    }
    void __put(string const &x) {
        __put((bsize_t)x.size());
        data.append(x);
    }
    void __put(string_view const &x) {
        __put((bsize_t)x.size());
        data.append(x);
    }
    template <typename T>
    void __put(T const &x) {
        if constexpr (is_safe_obj<T>()) {
            data.append((const char *)&x, sizeof(T));
        } else {
            x.pack(*this);
        }
    }

  public:
    WBStreamImpl() {}
    WBStreamImpl(container &&x) : data(x) {}
    template <typename... T>
    void apply(T const &... args) {
        (__put(args), ...);
    }
    void write(const void *src, size_t n) { data.append((const char *)src, n); }
    operator string_view() { return data; }
};
using WBStream = WBStreamImpl<std::string>;
struct BinVariant {
    /*long long or string*/
    union VType
    {
        long long x;
        std::string y;
        VType() {}
        ~VType() {}
    } v;
    unsigned char type;
    BinVariant(long long x) {
        type = 1;
        v.x  = x;
    }
    BinVariant(std::string &&x) {
        type = 2;
        new (&v.y) std::string(std::move(x));
    }
    BinVariant(std::string const &x) {
        type = 2;
        new (&v.y) std::string(x);
    }
    BinVariant() { type = 0; }
    ~BinVariant() {
        if (type == 2) {
            v.y.~string();
        }
    }
    void unpack(RBStream &rs) {
        rs.apply(type);
        switch (type) {
            case 1:
            {
                rs.apply(v.x);
            } break;
            case 2:
            {
                new (&v.y) std::string();
                rs.apply(v.y);
            }
        }
    }
    void pack(WBStream &ws) const {
        ws.apply(type);
        switch (type) {
            case 1:
            {
                ws.apply(v.x);
            } break;
            case 2:
            {
                ws.apply(v.y);
            }
        }
    }
};
static inline unsigned long long ZigZag(long long x) {
    return (x << 1) ^ (x >> 63);
}
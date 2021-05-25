#pragma once
#include <type_traits>
template <typename _TP, bool HEAD = false>
struct List_node {
    List_node<_TP, false> *prev, *next;
    using TP = typename std::conditional<HEAD, int, _TP>::type;
    TP val;
    TP &get() { return val; }
    TP const &get() const { return val; }
    List_node() { prev = next = (List_node<_TP, false> *)this; }
    List_node(TP &&x) : val(std::forward<TP>(x)) { prev = next = (List_node<_TP, false> *)this; }
    List_node(TP const &x) : val(x) { prev = next = (List_node<_TP, false> *)this; }
    ~List_node() { detach(); }
    void detach() {
        prev->next = next;
        next->prev = prev;
        prev = next = (List_node<_TP, false> *)this;
    }
#if 0
	struct iterator {
		List_node<_TP>* val;
		void operator++() {
			val = val->next;
		}
		void operator--() {
			val = val->prev;
		}
		List_node<_TP>& operator*() {
			return *val;
		}
		bool operator!=(iterator const& x) {
			return val != x.val;
		}
		bool operator==(iterator const& x) {
			return val == x.val;
		}
	};
	iterator begin() {
		return iterator{ this->next };
	}
	iterator end() {
		return iterator{ (List_node<_TP, false>*)this };
	}
#endif
    void ins_after(List_node<_TP> &t) {
        t.next     = next;
        t.prev     = (List_node<_TP, false> *)this;
        next->prev = &t;
        next       = &t;
    }
    void reattach_after(List_node<_TP, true> &t) {
        /*prev->next = next;
        next->prev = prev;
        prev = next = (List_node<_TP, false>*)this;*/
        /*
        next = t.next;
        prev = (List_node<_TP, false>*)&t;
        t.next->prev = this;
        t.next = this;
        */
        prev->next   = next;
        next->prev   = prev;
        next         = t.next;
        prev         = (List_node<_TP, false> *)&t;
        t.next->prev = this;
        t.next       = this;
    }
    void ins_before(List_node<_TP> &t) {
        t.prev     = prev;
        t.next     = (List_node<_TP, false> *)this;
        prev->next = &t;
        prev       = &t;
    }
    size_t _size() {
        size_t rv = 0;
        auto now  = next;
        while (now != (List_node<_TP, false> *)this) {
            rv++;
            now = now->next;
        }
        return rv;
    }
};
template <typename TP>
struct LRUList {
    size_t sz;
    using node = List_node<TP>;
    List_node<TP, true> head;
    node *data;
    LRUList(size_t _sz) : sz(_sz) {
        data = new node[_sz]();
        for (int i = 0; i < _sz; ++i) {
            head.ins_after(data[i]);
        }
    }
    ~LRUList() { delete[] data; }
    TP &buy() {
        auto it = head.prev;
        // it->detach();
        // head.ins_after(*it);
        it->reattach_after(head);
        return it->get();
    }
};
template <typename TP, size_t buksz = 64>
struct U64LRUmap {
    using key_t = uint64_t;
    struct _P {
        TP val;
        key_t hash;
    };
    using node = List_node<_P>;
    List_node<_P, true> bucket[buksz];
    LRUList<node> alloc;
    U64LRUmap(size_t sz) : alloc(sz) {}
    void clear() {
        for (int i = 0; i < buksz; ++i) {
            List_node<_P, false> *END = (List_node<_P, false> *)&bucket[i];
            auto NOW                  = bucket[i].next;
            while (NOW != END) {
                auto NEXT = NOW->next;
                NOW->detach();
                NOW->val.val.~TP();
                new (&NOW->val.val) TP();
                NOW = NEXT;
            }
        }
    }
    size_t _size() {
        size_t rv;
        for (int i = 0; i < buksz; ++i) {
            rv += bucket[i]._size();
        }
        return rv;
    }
    TP *find(key_t key) {
        auto &bk = bucket[key % buksz];
        auto NOW = bk.next;
        auto END = (decltype(NOW)) & bk;
        int idx  = 0;
        while (NOW != END) {
            if (NOW->val.hash == key) {
                if (idx != 0) {
                    NOW->reattach_after(bk);
                    // NOW->detach();
                    // bk.ins_after(*NOW);
                }
                return &NOW->val.val;
            }
            NOW = NOW->next;
            ++idx;
        }
        return nullptr;
    }
    template <typename... P>
    TP *insert(key_t key, P &&... val) {
        auto &bk    = bucket[key % buksz];
        auto &nd    = alloc.buy();
        nd.val.hash = key;
        nd.val.val.~TP();
        new (&nd.val.val) TP(std::forward<P>(val)...);
        // nd.detach();
        // bk.ins_after(nd);
        nd.reattach_after(bk);
        return &nd.val.val;
    }
};
template <typename TK, typename TV, size_t buksz = 64>
struct LRUMap {
    struct _MyPair {
        TK key;
        TV val;
        _MyPair() {}
        _MyPair(TK const &k, TV &&v) : key(k), val(std::forward<TV>(v)) {}
    };
    U64LRUmap<_MyPair, buksz> _C;
    LRUMap(size_t sz) : _C(sz) {}
    static size_t Hash(TK const &k) { return std::hash<TK>{}(k); }
    void clear() { _C.clear(); }
    size_t size() { return _C._size(); }
    TV *find(TK const &k) {
        auto H   = Hash(k);
        auto res = _C.find(H);
        if (res)
            return &res->val;
        return nullptr;
    }
    TV *insert(TK const &key, TV &&val) {
        return &_C.insert(Hash(key), key, std::forward<TV>(val))->val;
    }
};
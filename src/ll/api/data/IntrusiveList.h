#pragma once

#include <concepts>
#include <cstddef>
#include <iterator>
#include <type_traits>

namespace ll::data {
class IntrusiveListNode {
    template <std::derived_from<IntrusiveListNode>>
    friend class IntrusiveList;

    IntrusiveListNode* prev{};
    IntrusiveListNode* next{};

    void linkBefore(IntrusiveListNode& pos) noexcept {
        prev           = pos.prev;
        next           = &pos;
        pos.prev->next = this;
        pos.prev       = this;
    }

public:
    IntrusiveListNode() noexcept = default;

    IntrusiveListNode(IntrusiveListNode const&)            = delete;
    IntrusiveListNode& operator=(IntrusiveListNode const&) = delete;

    ~IntrusiveListNode() { unlink(); }

    [[nodiscard]] bool is_linked() const noexcept { return next != nullptr; }

    void unlink() noexcept {
        if (!is_linked()) return;
        prev->next = next;
        next->prev = prev;
        prev = next = nullptr;
    }
};

template <std::derived_from<IntrusiveListNode> T>
class IntrusiveList {
    IntrusiveListNode head;

    template <bool Const>
    class Iterator {
        friend IntrusiveList;
        friend Iterator<!Const>;

        using Node = std::conditional_t<Const, IntrusiveListNode const, IntrusiveListNode>;

        Node* cur{};

        explicit Iterator(Node* cur) noexcept : cur(cur) {}

    public:
        using iterator_category = std::bidirectional_iterator_tag;
        using value_type        = T;
        using difference_type   = std::ptrdiff_t;
        using pointer           = std::conditional_t<Const, T const*, T*>;
        using reference         = std::conditional_t<Const, T const&, T&>;

        Iterator() noexcept = default;
        template <bool OtherConst>
            requires(Const && !OtherConst)
        Iterator(Iterator<OtherConst> const& other) noexcept : cur(other.cur) {}

        reference operator*() const noexcept { return static_cast<reference>(*cur); }
        pointer   operator->() const noexcept { return static_cast<pointer>(cur); }

        Iterator& operator++() noexcept {
            cur = cur->next;
            return *this;
        }
        Iterator operator++(int) noexcept {
            auto res = *this;
            cur      = cur->next;
            return res;
        }
        Iterator& operator--() noexcept {
            cur = cur->prev;
            return *this;
        }
        Iterator operator--(int) noexcept {
            auto res = *this;
            cur      = cur->prev;
            return res;
        }

        bool operator==(Iterator const&) const noexcept = default;
    };

public:
    using value_type             = T;
    using size_type              = std::size_t;
    using reference              = T&;
    using const_reference        = T const&;
    using iterator               = Iterator<false>;
    using const_iterator         = Iterator<true>;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    IntrusiveList() noexcept { head.prev = head.next = &head; }

    IntrusiveList(IntrusiveList const&)            = delete;
    IntrusiveList& operator=(IntrusiveList const&) = delete;

    IntrusiveList(IntrusiveList&& other) noexcept : IntrusiveList() { splice(end(), other); }
    IntrusiveList& operator=(IntrusiveList&& other) noexcept {
        if (this != &other) {
            clear();
            splice(end(), other);
        }
        return *this;
    }

    ~IntrusiveList() {
        clear();
        head.prev = head.next = nullptr;
    }

    [[nodiscard]] bool empty() const noexcept { return head.next == &head; }

    [[nodiscard]] size_type size() const noexcept {
        size_type n = 0;
        for (auto* it = head.next; it != &head; it = it->next) ++n;
        return n;
    }

    iterator       begin() noexcept { return iterator{head.next}; }
    const_iterator begin() const noexcept { return const_iterator{head.next}; }
    const_iterator cbegin() const noexcept { return begin(); }
    iterator       end() noexcept { return iterator{&head}; }
    const_iterator end() const noexcept { return const_iterator{&head}; }
    const_iterator cend() const noexcept { return end(); }

    reverse_iterator       rbegin() noexcept { return reverse_iterator{end()}; }
    const_reverse_iterator rbegin() const noexcept { return const_reverse_iterator{end()}; }
    reverse_iterator       rend() noexcept { return reverse_iterator{begin()}; }
    const_reverse_iterator rend() const noexcept { return const_reverse_iterator{begin()}; }

    reference       front() noexcept { return *begin(); }
    const_reference front() const noexcept { return *begin(); }
    reference       back() noexcept { return *--end(); }
    const_reference back() const noexcept { return *--end(); }

    void push_front(T& node) noexcept { insert(begin(), node); }
    void push_back(T& node) noexcept { insert(end(), node); }
    void pop_front() noexcept { head.next->unlink(); }
    void pop_back() noexcept { head.prev->unlink(); }

    iterator insert(const_iterator pos, T& node) noexcept {
        IntrusiveListNode& base = node;
        base.unlink();
        base.linkBefore(*const_cast<IntrusiveListNode*>(pos.cur));
        return iterator{&base};
    }

    iterator erase(const_iterator pos) noexcept {
        auto* next = pos.cur->next;
        const_cast<IntrusiveListNode*>(pos.cur)->unlink();
        return iterator{next};
    }

    iterator erase(const_iterator first, const_iterator last) noexcept {
        while (first != last) first = erase(first);
        return iterator{const_cast<IntrusiveListNode*>(last.cur)};
    }

    void remove(T& node) noexcept { static_cast<IntrusiveListNode&>(node).unlink(); }

    template <class Pred>
    size_type remove_if(Pred pred) {
        size_type n = 0;
        for (auto it = begin(); it != end();) {
            if (pred(*it)) {
                it = erase(it);
                ++n;
            } else {
                ++it;
            }
        }
        return n;
    }

    void clear() noexcept {
        while (!empty()) pop_front();
    }

    void splice(const_iterator pos, IntrusiveList& other) noexcept {
        if (other.empty()) return;
        auto* at        = const_cast<IntrusiveListNode*>(pos.cur);
        auto* first     = other.head.next;
        auto* last      = other.head.prev;
        other.head.prev = other.head.next = &other.head;
        first->prev                       = at->prev;
        last->next                        = at;
        at->prev->next                    = first;
        at->prev                          = last;
    }

    void splice(const_iterator pos, T& node) noexcept { insert(pos, node); }

    void swap(IntrusiveList& other) noexcept {
        IntrusiveList tmp{std::move(other)};
        other = std::move(*this);
        *this = std::move(tmp);
    }

    [[nodiscard]] static iterator       iterator_to(T& node) noexcept { return iterator{&node}; }
    [[nodiscard]] static const_iterator iterator_to(T const& node) noexcept { return const_iterator{&node}; }
};
} // namespace ll::data

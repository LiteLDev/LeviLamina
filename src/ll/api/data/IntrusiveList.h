#pragma once

#include <concepts>
#include <cstddef>
#include <iterator>
#include <type_traits>
#include <utility>

namespace ll::data {
template <class Node, class Traits = Node>
class IntrusiveListOperations {
public:
    [[nodiscard]] static bool is_linked(Node const& node) noexcept { return Traits::get_next(node) != &node; }

    static void init(Node& node) noexcept {
        Traits::set_next(node, &node);
        Traits::set_prev(node, &node);
    }

    static void link_before(Node& node, Node& pos) noexcept {
        Node* prev = Traits::get_prev(pos);
        Traits::set_prev(node, prev);
        Traits::set_next(node, &pos);
        Traits::set_next(*prev, &node);
        Traits::set_prev(pos, &node);
    }

    static void unlink(Node& node) noexcept {
        Node* next = Traits::get_next(node);
        Node* prev = Traits::get_prev(node);
        Traits::set_next(*prev, next);
        Traits::set_prev(*next, prev);
        init(node);
    }
};

template <class Tag = void>
class IntrusiveListNode : public IntrusiveListOperations<IntrusiveListNode<Tag>> {
    using Ops = IntrusiveListOperations<IntrusiveListNode>;

    IntrusiveListNode* next{this};
    IntrusiveListNode* prev{this};

protected:
    IntrusiveListNode() noexcept = default;

    IntrusiveListNode(IntrusiveListNode const&) noexcept {}
    IntrusiveListNode& operator=(IntrusiveListNode const&) noexcept { return *this; }

    ~IntrusiveListNode() { unlink(); }

public:
    [[nodiscard]] static IntrusiveListNode* get_next(IntrusiveListNode const& node) noexcept { return node.next; }
    [[nodiscard]] static IntrusiveListNode* get_prev(IntrusiveListNode const& node) noexcept { return node.prev; }
    static void set_next(IntrusiveListNode& node, IntrusiveListNode* next) noexcept { node.next = next; }
    static void set_prev(IntrusiveListNode& node, IntrusiveListNode* prev) noexcept { node.prev = prev; }

    [[nodiscard]] bool is_linked() const noexcept { return Ops::is_linked(*this); }

    void unlink() noexcept { Ops::unlink(*this); }
};

template <class T, class Node = IntrusiveListNode<>, class Traits = Node>
class IntrusiveList {
    using Link = std::remove_pointer_t<decltype(Traits::get_next(std::declval<Node const&>()))>;
    using Ops  = IntrusiveListOperations<Link, Traits>;

    struct Sentinel : Link {};

    Sentinel head;

    static Link* next(Link const& node) noexcept { return Traits::get_next(node); }
    static Link* prev(Link const& node) noexcept { return Traits::get_prev(node); }
    static Link* mut(Link const* node) noexcept { return const_cast<Link*>(node); }

    static Link& toNode(T& value) noexcept {
        static_assert(std::derived_from<T, Node> && std::derived_from<Node, Link>);
        return static_cast<Node&>(value);
    }
    static Link const& toNode(T const& value) noexcept {
        static_assert(std::derived_from<T, Node> && std::derived_from<Node, Link>);
        return static_cast<Node const&>(value);
    }

    template <bool Const>
    class Iterator {
        friend IntrusiveList;
        friend Iterator<!Const>;

        using NodePtr = std::conditional_t<Const, Link const*, Link*>;

        NodePtr cur{};

        explicit Iterator(NodePtr cur) noexcept : cur(cur) {}

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

        reference operator*() const noexcept {
            using NodeRef = std::conditional_t<Const, Node const&, Node&>;
            return static_cast<reference>(static_cast<NodeRef>(*cur));
        }
        pointer operator->() const noexcept { return &**this; }

        Iterator& operator++() noexcept {
            cur = IntrusiveList::next(*cur);
            return *this;
        }
        Iterator operator++(int) noexcept {
            auto res = *this;
            ++*this;
            return res;
        }
        Iterator& operator--() noexcept {
            cur = IntrusiveList::prev(*cur);
            return *this;
        }
        Iterator operator--(int) noexcept {
            auto res = *this;
            --*this;
            return res;
        }

        bool operator==(Iterator const&) const noexcept = default;
    };

public:
    using value_type             = T;
    using node_type              = Node;
    using size_type              = std::size_t;
    using reference              = T&;
    using const_reference        = T const&;
    using iterator               = Iterator<false>;
    using const_iterator         = Iterator<true>;
    using reverse_iterator       = std::reverse_iterator<iterator>;
    using const_reverse_iterator = std::reverse_iterator<const_iterator>;

    IntrusiveList() noexcept = default;

    IntrusiveList(IntrusiveList const&)            = delete;
    IntrusiveList& operator=(IntrusiveList const&) = delete;

    IntrusiveList(IntrusiveList&& other) noexcept { splice(end(), other); }
    IntrusiveList& operator=(IntrusiveList&& other) noexcept {
        if (this != &other) {
            clear();
            splice(end(), other);
        }
        return *this;
    }

    ~IntrusiveList() { clear(); }

    [[nodiscard]] bool empty() const noexcept { return !Ops::is_linked(head); }

    [[nodiscard]] size_type size() const noexcept {
        size_type n = 0;
        for (Link const* it = next(head); it != &head; it = next(*it)) ++n;
        return n;
    }

    iterator       begin() noexcept { return iterator{next(head)}; }
    const_iterator begin() const noexcept { return const_iterator{next(head)}; }
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

    void push_front(T& value) noexcept { insert(begin(), value); }
    void push_back(T& value) noexcept { insert(end(), value); }
    void pop_front() noexcept { Ops::unlink(*next(head)); }
    void pop_back() noexcept { Ops::unlink(*prev(head)); }

    iterator insert(const_iterator pos, T& value) noexcept {
        Link& node = toNode(value);
        Ops::unlink(node);
        Ops::link_before(node, *mut(pos.cur));
        return iterator{&node};
    }

    iterator erase(const_iterator pos) noexcept {
        Link* following = next(*pos.cur);
        Ops::unlink(*mut(pos.cur));
        return iterator{following};
    }

    iterator erase(const_iterator first, const_iterator last) noexcept {
        while (first != last) first = erase(first);
        return iterator{mut(last.cur)};
    }

    void remove(T& value) noexcept { Ops::unlink(toNode(value)); }

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
        Link* at     = mut(pos.cur);
        Link* first  = next(other.head);
        Link* last   = prev(other.head);
        Link* before = prev(*at);
        Ops::init(other.head);
        Traits::set_prev(*first, before);
        Traits::set_next(*before, first);
        Traits::set_next(*last, at);
        Traits::set_prev(*at, last);
    }

    void splice(const_iterator pos, T& value) noexcept { insert(pos, value); }

    void swap(IntrusiveList& other) noexcept {
        IntrusiveList tmp{std::move(other)};
        other = std::move(*this);
        *this = std::move(tmp);
    }

    [[nodiscard]] static iterator       iterator_to(T& value) noexcept { return iterator{&toNode(value)}; }
    [[nodiscard]] static const_iterator iterator_to(T const& value) noexcept { return const_iterator{&toNode(value)}; }
};
} // namespace ll::data

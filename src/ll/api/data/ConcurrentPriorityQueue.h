#pragma once

// This header-only concurrency data structure implementation is based on Intel's
// implementation in its Threading Building Blocks ("Intel Material").

/*
    Intel Material Copyright 2005-2008 Intel Corporation.  All Rights Reserved.
*/

#include <atomic>
#include <memory>
#include <thread>
#include <utility>

#include "ll/api/base/CompilerPredefine.h"

namespace ll::data {
namespace detail {
//! Compile-time constant that is upper bound on cache line/sector size.
// It should be used only in situations where having a compile-time upper
// bound is more useful than a run-time exact answer.
constexpr size_t max_nfs_size = std::hardware_destructive_interference_size;

//! Class that implements exponential backoff.
class atomic_backoff {
    //! Time delay, in units of "pause" instructions.
    // Should be equal to approximately the number of "pause" instructions
    // that take the same time as an context switch. Must be a power of two.
    static constexpr int LOOPS_BEFORE_YIELD = 16;
    int                  count;

    static inline void machine_pause([[maybe_unused]] int delay) {
#ifdef LL_MACHINE_PAUSE
        while (delay-- > 0) {
            LL_MACHINE_PAUSE;
        }
#else
        std::this_thread::yield();
#endif
    }

public:
    // In many cases, an object of this type is initialized eagerly on hot path,
    // as in for(atomic_backoff b; ; b.pause()) { /*loop body*/ }
    // For this reason, the construction cost must be very small!
    atomic_backoff() : count(1) {}
    // This constructor pauses immediately; do not use on hot paths!
    atomic_backoff(bool) : count(1) { pause(); }

    //! No Copy
    atomic_backoff(const atomic_backoff&)            = delete;
    atomic_backoff& operator=(const atomic_backoff&) = delete;

    //! Pause for a while.
    void pause() {
        if (count <= LOOPS_BEFORE_YIELD) {
            machine_pause(count);
            // Pause twice as long the next time.
            count *= 2;
        } else {
            // Pause is so long that we might as well yield CPU to scheduler.
            std::this_thread::yield();
        }
    }
};

//! Spin WHILE the condition is true.
/** T and U should be comparable types. */
template <typename T, typename C>
T spin_wait_while(const std::atomic<T>& location, C comp, std::memory_order order) {
    atomic_backoff backoff;
    T              snapshot = location.load(order);
    while (comp(snapshot)) {
        backoff.pause();
        snapshot = location.load(order);
    }
    return snapshot;
}

//! Spin WHILE the value of the variable is equal to a given value
/** T and U should be comparable types. */
template <typename T, typename U>
T spin_wait_while_eq(
    const std::atomic<T>& location,
    const U               value,
    std::memory_order     order = std::memory_order_acquire
) {
    return spin_wait_while(location, [&value](T t) { return t == value; }, order);
}

//! Spin UNTIL the value of the variable is equal to a given value
/** T and U should be comparable types. */
template <typename T, typename U>
T spin_wait_until_eq(
    const std::atomic<T>& location,
    const U               value,
    std::memory_order     order = std::memory_order_acquire
) {
    return spin_wait_while(location, [&value](T t) { return t != value; }, order);
}
// Base class for aggregated operation
template <typename Derived>
class aggregated_operation {
public:
    // Zero value means "wait" status, all other values are "user" specified values and
    // are defined into the scope of a class which uses "status"
    std::atomic<uintptr_t> status;

    std::atomic<Derived*> next;
    aggregated_operation() : status{}, next(nullptr) {}
};

// Aggregator base class
/* An aggregator for collecting operations coming from multiple sources and executing
   them serially on a single thread.  OperationType must be derived from
   aggregated_operation. The parameter HandlerType is a functor that will be passed the
   list of operations and is expected to handle each operation appropriately, setting the
   status of each operation to non-zero. */
template <typename OperationType>
class aggregator_generic {
public:
    aggregator_generic() : pending_operations(nullptr), handler_busy(false) {}

    // Execute an operation
    /* Places an operation into the waitlist (pending_operations), and either handles the list,
       or waits for the operation to complete, or returns.
       The long_life_time parameter specifies the life time of the given operation object.
       Operations with long_life_time == true may be accessed after execution.
       A "short" life time operation (long_life_time == false) can be destroyed
       during execution, and so any access to it after it was put into the waitlist,
       including status check, is invalid. As a consequence, waiting for completion
       of such operation causes undefined behavior. */
    template <typename HandlerType>
    void execute(OperationType* op, HandlerType& handle_operations, bool long_life_time = true) {
        // op->status should be read before inserting the operation into the
        // aggregator waitlist since it can become invalid after executing a
        // handler (if the operation has 'short' life time.)
        const uintptr_t status = op->status.load(std::memory_order_relaxed);

        // ITT note: &(op->status) tag is used to cover accesses to this op node. This
        // thread has created the operation, and now releases it so that the handler
        // thread may handle the associated operation w/o triggering a race condition;
        // thus this tag will be acquired just before the operation is handled in the
        // handle_operations functor.
        // insert the operation in the queue.
        OperationType* res = pending_operations.load(std::memory_order_relaxed);
        do {
            op->next.store(res, std::memory_order_relaxed);
        } while (!pending_operations.compare_exchange_strong(res, op));
        if (!res) { // first in the list; handle the operations
            // ITT note: &pending_operations tag covers access to the handler_busy flag,
            // which this waiting handler thread will try to set before entering
            // handle_operations.
            start_handle_operations(handle_operations);
            // The operation with 'short' life time can already be destroyed
        }
        // Not first; wait for op to be ready
        else if (!status) { // operation is blocking here.
            spin_wait_while_eq(op->status, uintptr_t(0));
        }
    }

private:
    // Trigger the handling of operations when the handler is free
    template <typename HandlerType>
    void start_handle_operations(HandlerType& handle_operations) {
        OperationType* op_list;

        // ITT note: &handler_busy tag covers access to pending_operations as it is passed
        // between active and waiting handlers.  Below, the waiting handler waits until
        // the active handler releases, and the waiting handler acquires &handler_busy as
        // it becomes the active_handler. The release point is at the end of this
        // function, when all operations in pending_operations have been handled by the
        // owner of this aggregator.
        // get the handler_busy:
        // only one thread can possibly spin here at a time
        spin_wait_until_eq(handler_busy, uintptr_t(0));
        // acquire fence not necessary here due to causality rule and surrounding atomics
        handler_busy.store(1, std::memory_order_relaxed);

        // ITT note: &pending_operations tag covers access to the handler_busy flag
        // itself. Capturing the state of the pending_operations signifies that
        // handler_busy has been set and a new active handler will now process that list's
        // operations.
        // grab pending_operations
        op_list = pending_operations.exchange(nullptr);

        // handle all the operations
        handle_operations(op_list);

        // release the handler
        handler_busy.store(0, std::memory_order_release);
    }

    // An atomically updated list (aka mailbox) of pending operations
    std::atomic<OperationType*> pending_operations;
    // Controls threads access to handle_operations
    std::atomic<uintptr_t> handler_busy;
};

template <typename HandlerType, typename OperationType>
class aggregator : public aggregator_generic<OperationType> {
    HandlerType handle_operations;

public:
    aggregator() = default;

    void initialize_handler(HandlerType h) { handle_operations = h; }

    void execute(OperationType* op) { aggregator_generic<OperationType>::execute(op, handle_operations); }
};

template <typename T, typename Compare = std::less<T>, typename Allocator = std::allocator<T>>
class concurrent_priority_queue {
public:
    using value_type      = T;
    using reference       = T&;
    using const_reference = const T&;

    using size_type       = std::size_t;
    using difference_type = std::ptrdiff_t;

    using allocator_type = Allocator;

protected:
    using vector_type = std::vector<value_type, allocator_type>;

public:
    concurrent_priority_queue() : concurrent_priority_queue(allocator_type{}) {}

    explicit concurrent_priority_queue(const allocator_type& alloc) : mark(0), my_size(0), my_compare(), c(alloc) {
        my_aggregator.initialize_handler(functor{this});
    }

    explicit concurrent_priority_queue(const Compare& compare, const allocator_type& alloc = allocator_type())
    : mark(0),
      my_size(0),
      my_compare(compare),
      c(alloc) {
        my_aggregator.initialize_handler(functor{this});
    }

    explicit concurrent_priority_queue(size_type init_capacity, const allocator_type& alloc = allocator_type())
    : mark(0),
      my_size(0),
      my_compare(),
      c(alloc) {
        c.reserve(init_capacity);
        my_aggregator.initialize_handler(functor{this});
    }

    explicit concurrent_priority_queue(
        size_type             init_capacity,
        const Compare&        compare,
        const allocator_type& alloc = allocator_type()
    )
    : mark(0),
      my_size(0),
      my_compare(compare),
      c(alloc) {
        c.reserve(init_capacity);
        my_aggregator.initialize_handler(functor{this});
    }

    template <typename InputIterator>
    concurrent_priority_queue(
        InputIterator         begin,
        InputIterator         end,
        const Compare&        compare,
        const allocator_type& alloc = allocator_type()
    )
    : mark(0),
      my_compare(compare),
      c(begin, end, alloc) {
        my_aggregator.initialize_handler(functor{this});
        heapify();
        my_size.store(c.size(), std::memory_order_relaxed);
    }

    template <typename InputIterator>
    concurrent_priority_queue(InputIterator begin, InputIterator end, const allocator_type& alloc = allocator_type())
    : concurrent_priority_queue(begin, end, Compare(), alloc) {}

    concurrent_priority_queue(
        std::initializer_list<value_type> init,
        const Compare&                    compare,
        const allocator_type&             alloc = allocator_type()
    )
    : concurrent_priority_queue(init.begin(), init.end(), compare, alloc) {}

    concurrent_priority_queue(std::initializer_list<value_type> init, const allocator_type& alloc = allocator_type())
    : concurrent_priority_queue(init, Compare(), alloc) {}

    concurrent_priority_queue(const concurrent_priority_queue& other)
    : mark(other.mark),
      my_size(other.my_size.load(std::memory_order_relaxed)),
      my_compare(other.my_compare),
      c(other.c) {
        my_aggregator.initialize_handler(functor{this});
    }

    concurrent_priority_queue(const concurrent_priority_queue& other, const allocator_type& alloc)
    : mark(other.mark),
      my_size(other.my_size.load(std::memory_order_relaxed)),
      my_compare(other.my_compare),
      c(other.c, alloc) {
        my_aggregator.initialize_handler(functor{this});
    }

    concurrent_priority_queue(concurrent_priority_queue&& other)
    : mark(other.mark),
      my_size(other.my_size.load(std::memory_order_relaxed)),
      my_compare(other.my_compare),
      c(std::move(other.c)) {
        my_aggregator.initialize_handler(functor{this});
    }

    concurrent_priority_queue(concurrent_priority_queue&& other, const allocator_type& alloc)
    : mark(other.mark),
      my_size(other.my_size.load(std::memory_order_relaxed)),
      my_compare(other.my_compare),
      c(std::move(other.c), alloc) {
        my_aggregator.initialize_handler(functor{this});
    }

    concurrent_priority_queue& operator=(const concurrent_priority_queue& other) {
        if (this != &other) {
            c    = other.c;
            mark = other.mark;
            my_size.store(other.my_size.load(std::memory_order_relaxed), std::memory_order_relaxed);
        }
        return *this;
    }

    concurrent_priority_queue& operator=(concurrent_priority_queue&& other) {
        if (this != &other) {
            c    = std::move(other.c);
            mark = other.mark;
            my_size.store(other.my_size.load(std::memory_order_relaxed), std::memory_order_relaxed);
        }
        return *this;
    }

    concurrent_priority_queue& operator=(std::initializer_list<value_type> init) {
        assign(init.begin(), init.end());
        return *this;
    }

    template <typename InputIterator>
    void assign(InputIterator begin, InputIterator end) {
        c.assign(begin, end);
        mark = 0;
        my_size.store(c.size(), std::memory_order_relaxed);
        heapify();
    }

    void assign(std::initializer_list<value_type> init) { assign(init.begin(), init.end()); }

    concurrent_priority_queue& operator=(vector_type&& vec) {
        c    = std::move(vec);
        mark = 0;
        my_size.store(c.size(), std::memory_order_relaxed);
        heapify();
        return *this;
    }

    /* Returned value may not reflect results of pending operations.
       This operation reads shared data and will trigger a race condition. */
    [[nodiscard]] bool empty() const { return size() == 0; }

    // Returns the current number of elements contained in the queue
    /* Returned value may not reflect results of pending operations.
       This operation reads shared data and will trigger a race condition. */
    size_type size() const { return my_size.load(std::memory_order_relaxed); }

    /* This operation can be safely used concurrently with other push, try_pop or emplace operations. */
    void push(const value_type& value)
        requires(std::is_copy_constructible_v<value_type>)
    {
        cpq_operation op_data(value, PUSH_OP);
        my_aggregator.execute(&op_data);
        if (op_data.status == FAILED) throw std::bad_alloc{};
    }

    /* This operation can be safely used concurrently with other push, try_pop or emplace operations. */
    void push(value_type&& value) {
        cpq_operation op_data(value, PUSH_RVALUE_OP);
        my_aggregator.execute(&op_data);
        if (op_data.status == FAILED) throw std::bad_alloc{};
    }

    /* This operation can be safely used concurrently with other push, try_pop or emplace operations. */
    template <typename... Args>
    void emplace(Args&&... args) {
        push(value_type(std::forward<Args>(args)...));
    }

    // Gets a reference to and removes highest priority element
    /* If a highest priority element was found, sets elem and returns true,
       otherwise returns false.
       This operation can be safely used concurrently with other push, try_pop or emplace operations. */
    bool try_pop(value_type& value) {
        cpq_operation op_data(value, POP_OP);
        my_aggregator.execute(&op_data);
        return op_data.status == SUCCEEDED;
    }

    template <class F>
    bool try_pop_if(F&& fn) {
        function_data fn_data{(void*)std::addressof(fn), +[](void* f, value_type& value) -> bool {
                                  return std::invoke(static_cast<F&&>(*((F*)f)), value);
                              }};
        cpq_operation op_data(fn_data, POP_FN_OP);
        my_aggregator.execute(&op_data);
        return op_data.status == SUCCEEDED;
    }

    // This operation affects the whole container => it is not thread-safe
    void clear() {
        c.clear();
        mark = 0;
        my_size.store(0, std::memory_order_relaxed);
    }

    // This operation affects the whole container => it is not thread-safe
    void swap(concurrent_priority_queue& other) {
        if (this != &other) {
            using std::swap;
            swap(c, other.c);
            swap(mark, other.mark);

            size_type sz = my_size.load(std::memory_order_relaxed);
            my_size.store(other.my_size.load(std::memory_order_relaxed), std::memory_order_relaxed);
            other.my_size.store(sz, std::memory_order_relaxed);
        }
    }

    allocator_type get_allocator() const { return c.get_allocator(); }

private:
    enum operation_type { PUSH_OP, PUSH_RVALUE_OP, POP_OP, POP_FN_OP };
    enum operation_status { WAIT = 0, SUCCEEDED, FAILED };

    struct function_data {
        using function_type = bool(void*, value_type&);
        void*          data;
        function_type* func;

        bool operator()(value_type& val) const { return func(data, val); }
    };

    class cpq_operation : public aggregated_operation<cpq_operation> {
    public:
        operation_type type;
        union {
            function_data const* fn;
            value_type*          elem;
        };
        cpq_operation(const value_type& value, operation_type t) : type(t), elem(const_cast<value_type*>(&value)) {}

        cpq_operation(function_data const& f, operation_type t) : type(t), fn(&f) {}
    };

    class functor {
        concurrent_priority_queue* my_cpq;

    public:
        functor() : my_cpq(nullptr) {}
        functor(concurrent_priority_queue* cpq) : my_cpq(cpq) {}

        void operator()(cpq_operation* op_list) { my_cpq->handle_operations(op_list); }
    };

    void handle_operations(cpq_operation* op_list) {
        cpq_operation *tmp, *pop_list = nullptr;

        // First pass processes all constant (amortized; reallocation may happen) time pushes and pops.
        while (op_list) {
            // ITT note: &(op_list->status) tag is used to cover accesses to op_list
            // node. This thread is going to handle the operation, and so will acquire it
            // and perform the associated operation w/o triggering a race condition; the
            // thread that created the operation is waiting on the status field, so when
            // this thread is done with the operation, it will perform a
            // store_with_release to give control back to the waiting thread in
            // aggregator::insert_operation.

            tmp     = op_list;
            op_list = op_list->next.load(std::memory_order_relaxed);

            switch (tmp->type) {
            case PUSH_OP:
                try {
                    if constexpr (std::is_copy_constructible_v<value_type>) {
                        c.push_back(*(tmp->elem));
                    }
                    my_size.store(my_size.load(std::memory_order_relaxed) + 1, std::memory_order_relaxed);
                    tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                } catch (...) {
                    tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
                }
                break;
            case PUSH_RVALUE_OP:
                try {
                    c.push_back(std::move(*(tmp->elem)));
                    my_size.store(my_size.load(std::memory_order_relaxed) + 1, std::memory_order_relaxed);
                    tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                } catch (...) {
                    tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
                }
                break;
            case POP_OP:
                if (mark < c.size() && my_compare(c[0], c.back())) {
                    // there are newly pushed elems and the last one is higher than top
                    *(tmp->elem) = std::move(c.back());
                    my_size.store(my_size.load(std::memory_order_relaxed) - 1, std::memory_order_relaxed);
                    tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                    c.pop_back();
                } else { // no convenient item to pop; postpone
                    tmp->next.store(pop_list, std::memory_order_relaxed);
                    pop_list = tmp;
                }
                break;
            case POP_FN_OP:
                if (mark < c.size() && my_compare(c[0], c.back())) {
                    // there are newly pushed elems and the last one is higher than top
                    if ((*(tmp->fn))(c.back())) {
                        my_size.store(my_size.load(std::memory_order_relaxed) - 1, std::memory_order_relaxed);
                        tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                        c.pop_back();
                    } else {
                        tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
                    }
                } else { // no convenient item to pop; postpone
                    tmp->next.store(pop_list, std::memory_order_relaxed);
                    pop_list = tmp;
                }
                break;
            default:
                LL_UNREACHABLE;
            }
        }

        // Second pass processes pop operations
        while (pop_list) {
            tmp      = pop_list;
            pop_list = pop_list->next.load(std::memory_order_relaxed);
            if (c.empty()) {
                tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
            } else {
                if (mark < c.size() && my_compare(c[0], c.back())) {
                    // there are newly pushed elems and the last one is higher than top
                    if (tmp->type == POP_FN_OP ? ((*(tmp->fn))(c.back()))
                                               : (*(tmp->elem) = std::move(c.back()), true)) {
                        my_size.store(my_size.load(std::memory_order_relaxed) - 1, std::memory_order_relaxed);
                        tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                        c.pop_back();
                    } else {
                        tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
                    }
                } else { // extract top and push last element down heap
                    if (tmp->type == POP_FN_OP ? ((*(tmp->fn))(c[0])) : (*(tmp->elem) = std::move(c[0]), true)) {
                        my_size.store(my_size.load(std::memory_order_relaxed) - 1, std::memory_order_relaxed);
                        tmp->status.store(uintptr_t(SUCCEEDED), std::memory_order_release);
                        reheap();
                    } else {
                        tmp->status.store(uintptr_t(FAILED), std::memory_order_release);
                    }
                }
            }
        }

        // heapify any leftover pushed elements before doing the next
        // batch of operations
        if (mark < c.size()) heapify();
    }

    // Merge unsorted elements into heap
    void heapify() {
        if (!mark && c.size() > 0) mark = 1;
        for (; mark < c.size(); ++mark) {
            // for each unheapified element under size
            size_type  cur_pos  = mark;
            value_type to_place = std::move(c[mark]);
            do { // push to_place up the heap
                size_type parent = (cur_pos - 1) >> 1;
                if (!my_compare(c[parent], to_place)) break;
                c[cur_pos] = std::move(c[parent]);
                cur_pos    = parent;
            } while (cur_pos);
            c[cur_pos] = std::move(to_place);
        }
    }

    // Re-heapify after an extraction
    // Re-heapify by pushing last element down the heap from the root.
    void reheap() {
        size_type cur_pos = 0, child = 1;

        while (child < mark) {
            size_type target = child;
            if (child + 1 < mark && my_compare(c[child], c[child + 1])) ++target;
            // target now has the higher priority child
            if (my_compare(c[target], c.back())) break;
            c[cur_pos] = std::move(c[target]);
            cur_pos    = target;
            child      = (cur_pos << 1) + 1;
        }
        if (cur_pos != c.size() - 1) c[cur_pos] = std::move(c.back());
        c.pop_back();
        if (mark > c.size()) mark = c.size();
    }

    using aggregator_type = aggregator<functor, cpq_operation>;

    alignas(max_nfs_size) aggregator_type my_aggregator;
    // Padding added to avoid false sharing
    char padding1[max_nfs_size - sizeof(aggregator_type) % max_nfs_size];
    // The point at which unsorted elements begin
    size_type              mark;
    std::atomic<size_type> my_size;
    Compare                my_compare;

    // Padding added to avoid false sharing
    char padding2[max_nfs_size - (2 * sizeof(size_type)) - sizeof(Compare) % max_nfs_size];
    //! Storage for the heap of elements in queue, plus unheapified elements
    /** data has the following structure:

         binary unheapified
          heap   elements
        ____|_______|____
        |       |       |
        v       v       v
        [_|...|_|_|...|_| |...| ]
         0       ^       ^       ^
                 |       |       |__capacity
                 |       |__my_size
                 |__mark

        Thus, data stores the binary heap starting at position 0 through
        mark-1 (it may be empty).  Then there are 0 or more elements
        that have not yet been inserted into the heap, in positions
        mark through my_size-1. */

protected:
    vector_type c;

    friend bool operator==(const concurrent_priority_queue& lhs, const concurrent_priority_queue& rhs) {
        return lhs.c == rhs.c;
    }
};

} // namespace detail

using detail::concurrent_priority_queue;

} // namespace ll::data

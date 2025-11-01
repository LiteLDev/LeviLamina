#pragma once

#include <functional>

#include "mc/platform/brstd/detail/DerivedType.h"

namespace brstd::detail::function {

constexpr size_t embedded_target_size = sizeof(void*) * 8 - sizeof(void*);

template <DerivedType Type, class Return, bool Noexcept, class... Xs>
class function_base_impl {
    class storage;

    template <DerivedType Type>
    struct vtable_base {
        void (*move_to)(storage&, storage&) noexcept;
        void (*destroy)(storage&) noexcept;
        Return (*invoke)(storage const&, Xs&&...) noexcept(Noexcept);
    };

    template <>
    struct vtable_base<DerivedType::Copyable> : vtable_base<DerivedType::MoveOnly> {
        void (*copy_to)(storage const&, storage&);
    };

    struct vtable : vtable_base<Type> {};

    template <class Fn>
    static constexpr size_t embedded_target_offset =
        alignof(Fn) <= sizeof(vtable*) ? 0 : (alignof(Fn) - sizeof(vtable*));

    template <class Fn>
    static constexpr size_t embedded_target_available_size = embedded_target_size - embedded_target_offset<Fn>;

    template <class Fn>
    static constexpr bool is_heap_target = alignof(Fn) > alignof(std::max_align_t)
                                        || sizeof(Fn) > embedded_target_available_size<Fn>
                                        || !std::is_nothrow_move_constructible_v<Fn>;

    class storage {
    public:
        vtable const* vfptr;

    private:
        union alignas(max_align_t) {
            void* heap_target;
            char  embedded_target[embedded_target_size];
        };

    public:
        template <class Fn>
        [[nodiscard]] void* embedded_target_ptr() noexcept {
            return &embedded_target + embedded_target_offset<Fn>;
        }

        template <class Fn>
        [[nodiscard]] Fn* small_fn_ptr() const noexcept {
            return static_cast<Fn*>(const_cast<storage*>(this)->embedded_target_ptr<Fn>());
        }

        template <class Fn>
        [[nodiscard]] Fn* large_fn_ptr() const noexcept {
            return static_cast<Fn*>(heap_target);
        }

        void set_large_fn_ptr(void* const v) noexcept { heap_target = v; }
    };
    template <class Fn, class FnInvQuals, bool HeapTarget>
    struct vtable_impl {
        static Fn* target(storage const& self) {
            if constexpr (HeapTarget) {
                return self.large_fn_ptr<Fn>();
            } else {
                return self.small_fn_ptr<Fn>();
            }
        }

        static void copy_to(storage const& self, storage& to) {
            if constexpr (Type == DerivedType::Copyable) {
                if constexpr (HeapTarget) {
                    to.set_large_fn_ptr(::new Fn(*target(self)));
                } else {
                    ::new (to.embedded_target_ptr<Fn>()) Fn(*target(self));
                }
            }
        }

        static void move_to(storage& self, storage& to) noexcept {
            if constexpr (HeapTarget) {
                to.set_large_fn_ptr(target(self));
                self.set_large_fn_ptr(nullptr);
            } else {
                auto const ptr = target(self);
                ::new (to.embedded_target_ptr<Fn>()) Fn(std::move(*ptr));
                ptr->~Fn();
            }
        }

        static void destroy(storage& self) noexcept {
            if constexpr (HeapTarget) {
                delete target(self);
            } else {
                target(self)->~Fn();
            }
        }

        static Return invoke(storage const& self, Xs&&... args) noexcept(Noexcept) {
            if constexpr (std::is_void_v<Return>) {
                (void)std::invoke(static_cast<FnInvQuals>(*target(self)), std::forward<Xs>(args)...);
            } else {
                return std::invoke(static_cast<FnInvQuals>(*target(self)), std::forward<Xs>(args)...);
            }
        }
    };

    template <class Fn, class FnInvQuals>
    [[nodiscard]] static constexpr vtable create_vtable() noexcept {
        vtable impl{};

        using impl_type = vtable_impl<Fn, FnInvQuals, is_heap_target<Fn>>;
        impl.move_to    = &impl_type::move_to;
        impl.destroy    = &impl_type::destroy;
        impl.invoke     = &impl_type::invoke;
        if constexpr (Type == DerivedType::Copyable) {
            impl.copy_to = &impl_type::copy_to;
        }
        return impl;
    }

    template <class Fn, class FnInvQuals>
    static constexpr vtable vfstorage = create_vtable<Fn, FnInvQuals>();

protected:
    storage mStorage;

    vtable const& get_vtable() const noexcept { return *mStorage.vfptr; }

    function_base_impl() noexcept = default;

    void construct_empty() { mStorage.vfptr = nullptr; }
    template <class Fn, class FnInvQuals, class... Ys>
    void construct_target(Ys&&... args) {
        mStorage.vfptr = &vfstorage<Fn, FnInvQuals>;
        if constexpr (is_heap_target<Fn>) {
            auto ptr = std::make_unique<Fn>(std::forward<Ys>(args)...);
            mStorage.set_large_fn_ptr(ptr.release());
        } else {
            ::new (mStorage.embedded_target_ptr<Fn>()) Fn(std::forward<Ys>(args)...);
        }
    }

    auto get_invoke() const noexcept {
        if (!*this) {
            std::abort();
        }
        return get_vtable().invoke;
    }

public:
    explicit operator bool() const noexcept { return mStorage.vfptr != nullptr; }
};

}

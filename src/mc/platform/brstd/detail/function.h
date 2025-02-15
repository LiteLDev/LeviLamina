#pragma once

#include <functional>

#include "ll/api/base/TypeTraits.h"
#include "mc/platform/brstd/detail/DerivedType.h"

namespace brstd::detail::function {

constexpr size_t embedded_target_size  = sizeof(void*) * 8 - sizeof(void*);

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

template <DerivedType, class Base>
class function_base : public Base {
protected:
    function_base() { this->construct_empty(); }
    ~function_base() {
        if (*this) {
            this->get_vtable().destroy(this->mStorage);
        }
    }
    function_base(function_base&& other) {
        if (other) {
            other.get_vtable().move_to(other.mStorage, this->mStorage);
            this->mStorage.vfptr = std::exchange(other.mStorage.vfptr, nullptr);
        } else {
            this->construct_empty();
        }
    }
    function_base& operator=(function_base&& other) {
        if (this != std::addressof(other)) {
            if (*this) {
                this->get_vtable().destroy(this->mStorage);
            }
            if (other) {
                other.get_vtable().move_to(other.mStorage, this->mStorage);
                this->mStorage.vfptr = std::exchange(other.mStorage.vfptr, nullptr);
            } else {
                this->construct_empty();
            }
        }
        return *this;
    }

public:
    function_base& operator=(std::nullptr_t) {
        if (*this) {
            this->get_vtable().destroy(this->mStorage);
            this->mStorage.vfptr = nullptr;
        }
    }

    [[nodiscard]] friend bool operator==(function_base const& self, nullptr_t) noexcept {
        return !static_cast<bool>(self);
    }
};

template <class Base>
class function_base<DerivedType::Copyable, Base> : public function_base<DerivedType::MoveOnly, Base> {
protected:
    function_base()                           = default;
    function_base(function_base&&)            = default;
    function_base& operator=(function_base&&) = default;

    function_base(function_base const& other) {
        if (other) {
            other.get_vtable().copy_to(other.mStorage, this->mStorage);
            this->mStorage.vfptr = other.mStorage.vfptr;
        } else {
            this->construct_empty();
        }
    }
    function_base& operator=(function_base const& other) {
        if (this != std::addressof(other)) {
            if (*this) {
                this->get_vtable().destroy(this->mStorage);
            }
            if (other) {
                other.get_vtable().copy_to(other.mStorage, this->mStorage);
                this->mStorage.vfptr = other.mStorage.vfptr;
            } else {
                this->construct_empty();
            }
        }
    }
};

template <DerivedType Type, class Signature>
class function_invoke_base;

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...)>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_invocable_r_v<Return, Fn, Xs...> && std::is_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...)&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) & { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) &&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) && { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_invocable_r_v<Return, Fn const, Xs...> && std::is_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const& { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const&&>
: public function_base<Type, function_base_impl<Type, Return, false, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_invocable_r_v<Return, Fn const, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const&& { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from =
        std::is_nothrow_invocable_r_v<Return, Fn, Xs...> && std::is_nothrow_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) & noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) & noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) && noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) && noexcept { return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...); }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const, Xs...>
                                          && std::is_nothrow_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const & noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const&, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const& noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

template <DerivedType Type, class Return, class... Xs>
class function_invoke_base<Type, Return(Xs...) const && noexcept>
: public function_base<Type, function_base_impl<Type, Return, true, Xs...>> {
public:
    template <class Fn>
    using FnInvQuals = Fn const&&;

    template <class Fn>
    static constexpr bool is_callable_from = std::is_nothrow_invocable_r_v<Return, Fn const, Xs...>;

public:
    using result_type = Return;

    Return operator()(Xs... args) const&& noexcept {
        return this->get_invoke()(this->mStorage, std::forward<Xs>(args)...);
    }
};

template <DerivedType Type, class Signature>
class function_invoke : public function_invoke_base<Type, Signature> {
    using base = function_invoke_base<Type, Signature>;

    template <class Fn>
    static constexpr bool enable_one_arg_constructor =
        !std::is_same_v<std::remove_cvref_t<Fn>, function_invoke>
        && !ll::traits::is_specialization_of_v<std::remove_cvref_t<Fn>, std::in_place_type_t>
        && base::template is_callable_from<std::decay_t<Fn>>;

    template <class Fn, class... Xs>
    static constexpr bool enable_in_place_constructor =
        std::is_constructible_v<std::decay_t<Fn>, Xs...> && base::template is_callable_from<std::decay_t<Fn>>;

    template <class Fn, class U, class... Xs>
    static constexpr bool enable_in_place_list_constructor =
        std::is_constructible_v<std::decay_t<Fn>, std::initializer_list<U>&, Xs...>
        && base::template is_callable_from<std::decay_t<Fn>>;

public:
    function_invoke() = default;
    function_invoke(std::nullptr_t) : function_invoke() {}
    template <class F>
        requires enable_one_arg_constructor<F>
    function_invoke(F&& f) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_constructible_v<Fn, F>);
        if constexpr (std::is_member_pointer_v<Fn> || std::is_pointer_v<Fn> || requires(F e) { e == nullptr; }) {
            if (f == nullptr) {
                this->construct_empty();
                return;
            }
        }
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(std::forward<F>(f));
    }

    template <class F, class... Xs>
        requires enable_in_place_constructor<F, Xs...>
    explicit function_invoke(std::in_place_type_t<F>, Xs&&... args) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_same_v<Fn, F>);
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(std::forward<Xs>(args)...);
    }

    template <class F, class U, class... Xs>
        requires enable_in_place_list_constructor<F, U, Xs...>
    explicit function_invoke(std::in_place_type_t<F>, std::initializer_list<U> l, Xs&&... args) {
        using Fn = std::decay_t<F>;
        static_assert(std::is_same_v<Fn, F>);
        using FnInvQuals = base::template FnInvQuals<Fn>;
        this->template construct_target<Fn, FnInvQuals>(l, std::forward<Xs>(args)...);
    }

public:
    void swap(function_invoke& other) {
        function_invoke tmp = std::move(other);
        other               = std::move(*this);
        *this               = std::move(tmp);
    }
};

} // namespace brstd::detail::function

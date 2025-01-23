#pragma once

#include <memory>
#include <type_traits>

namespace ll::data {
class AnyObjBase {
protected:
    template <class Obj>
    static constexpr bool isLarge = sizeof(Obj) > Obj::smallObjSize || alignof(Obj) > alignof(std::max_align_t)
                                 || !Obj::nothrowMove;

    template <class Obj, class... Args>
    static constexpr Obj*
    constructImpl(void* to, Args&&... args) noexcept(std::is_nothrow_constructible_v<Obj, Args...>) {
        if constexpr (isLarge<Obj>) {
            return ::new Obj(std::forward<Args>(args)...);
        } else {
            return ::new (to) Obj(std::forward<Args>(args)...);
        }
    }
    template <class Obj>
    static constexpr void destroyImpl(Obj* self) noexcept {
        if constexpr (isLarge<Obj>) {
            delete self;
        } else {
            self->~Obj();
        }
    }

public:
    AnyObjBase()                             = default;
    AnyObjBase(AnyObjBase const&)            = delete;
    AnyObjBase& operator=(AnyObjBase const&) = delete;

    virtual ~AnyObjBase() = default;

    virtual AnyObjBase* copy(void* to) const    = 0;
    virtual AnyObjBase* move(void* to) noexcept = 0;
    virtual void        tidy() noexcept         = 0;
};
} // namespace ll::data

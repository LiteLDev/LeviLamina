#pragma once

#include <any>
#include <array>
#include <span>

#include "ll/api/base/Containers.h"
#include "ll/api/base/Macro.h"

namespace ll::data {
class AnyInvokerBase {
public:
    virtual ~AnyInvokerBase() = default;

    virtual std::any invoke(std::span<std::any const>) = 0;

    virtual std::unique_ptr<AnyInvokerBase> clone() const = 0;
};
class AnyFunction {
    mutable Polymorphic<AnyInvokerBase> invoker;

public:
    AnyFunction()  = default;
    ~AnyFunction() = default;

    std::any invoke(std::span<std::any const> args) const { return invoker->invoke(args); }

    template <class... Args>
    std::any operator()(Args&&... args) const {
        return invoke(std::initializer_list{std::make_any<std::decay_t<Args>>(std::forward<Args>(args))...});
    }
};
} // namespace ll::data

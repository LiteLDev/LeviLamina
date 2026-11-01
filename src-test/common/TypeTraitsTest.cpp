#include "gtest/gtest.h"

#include <tuple>
#include <type_traits>

#include "ll/api/base/TypeTraits.h"
#include "ll/api/memory/Memory.h"

namespace {

struct TraitsProbe {};

struct TraitsProbeFunctor {
    int operator()(int value) const;
};

template <
    class MemberFunction,
    class ObjectPointer,
    bool IsConst,
    bool IsVolatile,
    bool IsLvalueReference,
    bool IsRvalueReference,
    bool IsNoexcept>
struct MemberFunctionTraitsCheck {
    using traits = ll::traits::function_traits<MemberFunction>;

    static_assert(traits::is_member_function);
    static_assert(traits::arity == 1);
    static_assert(std::is_same_v<typename traits::return_type, int>);
    static_assert(std::is_same_v<typename traits::args_tuple, std::tuple<int>>);
    static_assert(std::is_same_v<typename traits::class_type, TraitsProbe>);
    static_assert(std::is_same_v<typename traits::object_pointer, ObjectPointer>);
    static_assert(std::is_same_v<typename traits::function_pointer, int (*)(ObjectPointer, int)>);
    static_assert(traits::is_const == IsConst);
    static_assert(traits::is_volatile == IsVolatile);
    static_assert(traits::is_lvalue_reference == IsLvalueReference);
    static_assert(traits::is_rvalue_reference == IsRvalueReference);
    static_assert(traits::is_noexcept == IsNoexcept);
};

#define LL_CHECK_MEMBER_FUNCTION_TRAITS(                                                                               \
    MEMBER_FUNCTION,                                                                                                   \
    OBJECT_POINTER,                                                                                                    \
    IS_CONST,                                                                                                          \
    IS_VOLATILE,                                                                                                       \
    IS_LVALUE,                                                                                                         \
    IS_RVALUE,                                                                                                         \
    IS_NOEXCEPT                                                                                                        \
)                                                                                                                      \
    static_assert(                                                                                                     \
        sizeof(MemberFunctionTraitsCheck<                                                                              \
               MEMBER_FUNCTION,                                                                                        \
               OBJECT_POINTER,                                                                                         \
               IS_CONST,                                                                                               \
               IS_VOLATILE,                                                                                            \
               IS_LVALUE,                                                                                              \
               IS_RVALUE,                                                                                              \
               IS_NOEXCEPT>)                                                                                           \
        > 0                                                                                                            \
    )

// clang-format off
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int), TraitsProbe*, false, false, false, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const, TraitsProbe const*, true, false, false, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile, TraitsProbe volatile*, false, true, false, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile, TraitsProbe const volatile*, true, true, false, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) noexcept, TraitsProbe*, false, false, false, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const noexcept, TraitsProbe const*, true, false, false, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile noexcept, TraitsProbe volatile*, false, true, false, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile noexcept, TraitsProbe const volatile*, true, true, false, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) &, TraitsProbe*, false, false, true, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const&, TraitsProbe const*, true, false, true, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile&, TraitsProbe volatile*, false, true, true, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile&, TraitsProbe const volatile*, true, true, true, false, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) & noexcept, TraitsProbe*, false, false, true, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const& noexcept, TraitsProbe const*, true, false, true, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile& noexcept, TraitsProbe volatile*, false, true, true, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile& noexcept, TraitsProbe const volatile*, true, true, true, false, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) &&, TraitsProbe*, false, false, false, true, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const&&, TraitsProbe const*, true, false, false, true, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile&&, TraitsProbe volatile*, false, true, false, true, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile&&, TraitsProbe const volatile*, true, true, false, true, false);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) && noexcept, TraitsProbe*, false, false, false, true, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const&& noexcept, TraitsProbe const*, true, false, false, true, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) volatile&& noexcept, TraitsProbe volatile*, false, true, false, true, true);
LL_CHECK_MEMBER_FUNCTION_TRAITS(int (TraitsProbe::*)(int) const volatile&& noexcept, TraitsProbe const volatile*, true, true, false, true, true);
// clang-format on

#undef LL_CHECK_MEMBER_FUNCTION_TRAITS

// Functions, function pointers and function references all unpack into the same traits.
static_assert(std::is_same_v<ll::traits::function_traits<int(int)>::function_type, int(int)>);
static_assert(std::is_same_v<ll::traits::function_traits<int(int)>::return_type, int>);
static_assert(std::is_same_v<ll::traits::function_traits<int(int, double)>::arg<1>, double>);
static_assert(ll::traits::function_traits<int(int)>::arity == 1);
static_assert(!ll::traits::function_traits<int(int)>::is_member_function);
static_assert(!ll::traits::function_traits<int(int)>::is_noexcept);
static_assert(std::is_same_v<ll::traits::function_traits<int(int)>::function_pointer, int (*)(int)>);
static_assert(std::is_same_v<ll::traits::function_traits<int (*)(int)>::function_pointer, int (*)(int)>);
static_assert(std::is_same_v<ll::traits::function_traits<int (&)(int)>::function_pointer, int (*)(int)>);
static_assert(ll::traits::function_traits<int(int) noexcept>::is_noexcept);
static_assert(std::is_same_v<ll::traits::function_traits<int (*)(int) noexcept>::function_pointer, int (*)(int)>);
static_assert(std::is_same_v<ll::traits::function_traits<int (&)(int) noexcept>::function_pointer, int (*)(int)>);

// Functors are unpacked through their operator().
static_assert(ll::traits::function_traits<TraitsProbeFunctor>::is_member_function);
static_assert(std::is_same_v<
              ll::traits::function_traits<TraitsProbeFunctor>::function_pointer,
              int (*)(TraitsProbeFunctor const*, int)>);

struct CallableProbe {
    int offset;

    int add(int value) const { return offset + value; }
    int addMutable(int value) { return offset + value + 1; }
};

} // namespace

TEST(TypeTraitsTest, ProjectsMemberFunctionsOntoCallableFunctionPointers) {
    CallableProbe       probe{40};
    CallableProbe const constProbe{40};

    using ConstFunctionPointer   = ll::traits::function_traits<decltype(&CallableProbe::add)>::function_pointer;
    using MutableFunctionPointer = ll::traits::function_traits<decltype(&CallableProbe::addMutable)>::function_pointer;

    static_assert(std::is_same_v<ConstFunctionPointer, int (*)(CallableProbe const*, int)>);
    static_assert(std::is_same_v<MutableFunctionPointer, int (*)(CallableProbe*, int)>);

    // The projection is only useful if the implicit object parameter really is the first argument, which is what the
    // vtable patching in ll::simulated_player_fixes relies on.
    auto constCall   = reinterpret_cast<ConstFunctionPointer>(ll::memory::toFuncPtr(&CallableProbe::add));
    auto mutableCall = reinterpret_cast<MutableFunctionPointer>(ll::memory::toFuncPtr(&CallableProbe::addMutable));

    EXPECT_EQ(constCall(&constProbe, 2), 42);
    EXPECT_EQ(mutableCall(&probe, 1), 42);
}

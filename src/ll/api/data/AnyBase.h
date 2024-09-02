#pragma once

#include <memory>
#include <type_traits>

namespace ll::data {
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4265)
#endif
class AnyBase {
public:
    static constexpr inline size_t smallObjectNumPtrs = 8;
    static constexpr inline size_t smallObjectSize    = ((smallObjectNumPtrs - 1) * sizeof(void*));
    template <class Data>
    static constexpr bool isLarge = sizeof(Data) > smallObjectSize || alignof(Data) > alignof(std::max_align_t)
                                 || !Data::nothrowMove;

    AnyBase()                          = default;
    AnyBase(const AnyBase&)            = delete;
    AnyBase& operator=(const AnyBase&) = delete;

    virtual AnyBase* copy(void* to) const    = 0;
    virtual AnyBase* move(void* to) noexcept = 0;
    virtual void     tidy() noexcept         = 0;
};
#ifdef _MSC_VER
#pragma warning(pop)
#endif
} // namespace ll::data

#pragma once

#include <system_error>
#include <typeinfo>

#if _HAS_CXX23
#include <stacktrace>
#endif

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "mc/common/wrapper/optional_ref.h"

#include "ll/api/base/MsvcPredefine.h"

namespace ll {
class Logger;
}

struct _EXCEPTION_RECORD; // NOLINT(bugprone-reserved-identifier)
struct _CONTEXT;          // NOLINT(bugprone-reserved-identifier)

namespace ll::utils::error_info {

class seh_exception : public std::system_error {
private:
    void* expPtr;

public:
    LLNDAPI seh_exception(uint ntStatus, void* expPtr);

    LLNDAPI void* getExceptionPointer() const noexcept;
};

struct UntypedException {
    static constexpr uint msc                = 0x6D7363; // 'msc'
    static constexpr uint exceptionCodeOfCpp = (msc | 0xE0000000);

    void*                          exception_object;
    _EXCEPTION_RECORD const*       exc;
    void*                          handle    = nullptr;
    RealInternal::ThrowInfo const* throwInfo = nullptr;
    _CatchableTypeArray const*     cArray    = nullptr;

    LLNDAPI explicit UntypedException(_EXCEPTION_RECORD const& er);

    [[nodiscard]] uint getNumCatchableTypes() const { return cArray ? cArray->nCatchableTypes : 0u; }

    [[nodiscard]] RealInternal::CatchableType const* cType(uint i) const {
        return rva2va<RealInternal::CatchableType const*>(reinterpret_cast<uint const*>(cArray->arrayOfCatchableTypes
        )[i]);
    }

    [[nodiscard]] std::type_info const* getTypeInfo(uint i) const {
        return rva2va<std::type_info const*>(cType(i)->pType);
    }
    [[nodiscard]] uint getThisDisplacement(uint i) const { return cType(i)->thisDisplacement.mdisp; }

    template <class T>
    [[nodiscard]] T rva2va(auto addr) const {
        return reinterpret_cast<T>((uintptr_t)handle + (uintptr_t)(addr));
    }
};

[[noreturn]] inline void translateSEHtoCE(uint ntStatus, struct _EXCEPTION_POINTERS* expPtr) {
    throw seh_exception(ntStatus, expPtr);
}

// only set for the current thread
LLAPI void setSehTranslator();

LLNDAPI std::error_category const& u8system_category() noexcept;

LLNDAPI std::error_category const& ntstatus_category() noexcept;

LLNDAPI std::system_error getWinLastError() noexcept;

LLNDAPI _EXCEPTION_RECORD& current_exception() noexcept;
LLNDAPI _CONTEXT&          current_exception_context() noexcept;

LLNDAPI std::exception_ptr createExceptionPtr(_EXCEPTION_RECORD const&) noexcept;

#if _HAS_CXX23
LLNDAPI std::stacktrace stacktraceFromCurrExc(_CONTEXT const& = current_exception_context());
#endif

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr);

LLAPI void printCurrentException(
    optional_ref<ll::Logger>  = nullptr,
    std::exception_ptr const& = std::current_exception()
) noexcept;

inline void printException(_EXCEPTION_RECORD const& e, optional_ref<ll::Logger> l = nullptr) noexcept {
    printCurrentException(l, createExceptionPtr(e));
}
template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(T const& e, optional_ref<ll::Logger> l = nullptr) noexcept {
    printCurrentException(l, std::make_exception_ptr(e));
}

} // namespace ll::utils::error_info

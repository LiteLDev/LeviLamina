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

struct _EXCEPTION_RECORD;   // NOLINT(bugprone-reserved-identifier)
struct _CONTEXT;            // NOLINT(bugprone-reserved-identifier)
struct _EXCEPTION_POINTERS; // NOLINT(bugprone-reserved-identifier)

namespace ll::inline utils::error_utils {

class seh_exception : public std::system_error {
private:
    _EXCEPTION_POINTERS* expPtr;

public:
    LLNDAPI seh_exception(uint ntStatus, _EXCEPTION_POINTERS* expPtr);

    _EXCEPTION_POINTERS* getExceptionPointer() const noexcept { return expPtr; }
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

LLNDAPI std::error_category const& hresult_category() noexcept;

LLNDAPI std::error_category const& ntstatus_category() noexcept;

LLNDAPI std::system_error getWinLastError() noexcept;

LLNDAPI _EXCEPTION_RECORD& current_exception() noexcept;
LLNDAPI _CONTEXT&          current_exception_context() noexcept;

LLNDAPI std::exception_ptr createExceptionPtr(_EXCEPTION_RECORD const&) noexcept;

#if _HAS_CXX23
LLNDAPI std::stacktrace stacktraceFromContext(_CONTEXT const& context, size_t skip = 0, size_t maxDepth = ~0ui64);

inline std::stacktrace stacktraceFromCurrExc(size_t skip = 0, size_t maxDepth = ~0ui64) {
    return stacktraceFromContext(current_exception_context(), skip, maxDepth);
}
#endif

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr) noexcept;

LLAPI void printCurrentException(ll::Logger& l, std::exception_ptr const& = std::current_exception()) noexcept;

inline void printException(ll::Logger& l, _EXCEPTION_RECORD const& e) noexcept {
    printCurrentException(l, createExceptionPtr(e));
}
template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(ll::Logger& l, T const& e) noexcept {
    printCurrentException(l, std::make_exception_ptr(e));
}

} // namespace ll::inline utils::error_utils

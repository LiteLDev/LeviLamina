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

struct _EXCEPTION_RECORD;   // NOLINT(bugprone-reserved-identifier)
struct _CONTEXT;            // NOLINT(bugprone-reserved-identifier)
struct _EXCEPTION_POINTERS; // NOLINT(bugprone-reserved-identifier)

namespace ll {
class Logger;
class OutputStream;
} // namespace ll

namespace ll::inline utils::error_utils {

class seh_exception : public std::system_error {
private:
    _EXCEPTION_POINTERS* expPtr;

public:
    LLNDAPI seh_exception(uint ntStatus, _EXCEPTION_POINTERS* expPtr);

    _EXCEPTION_POINTERS* getExceptionPointer() const noexcept { return expPtr; }
};

struct UntypedExceptionRef {
    static constexpr uint msc                = 0x6D7363; // 'msc'
    static constexpr uint exceptionCodeOfCpp = (msc | 0xE0000000);

    void*                          exceptionObject;
    ::_EXCEPTION_RECORD const*     exc;
    void*                          handle    = nullptr;
    RealInternal::ThrowInfo const* throwInfo = nullptr;
    _CatchableTypeArray const*     cArray    = nullptr;

    LLNDAPI explicit UntypedExceptionRef(std::exception_ptr const& ptr);

    LLNDAPI explicit UntypedExceptionRef(::_EXCEPTION_RECORD const& er);

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
    template <class T>
    [[nodiscard]] optional_ref<T> tryGet() const {
        for (uint i = 0, e = getNumCatchableTypes(); i < e; i++) {
            if ((*getTypeInfo(i)) == typeid(T)) {
                return reinterpret_cast<T*>(reinterpret_cast<char*>(exceptionObject) + getThisDisplacement(i));
            }
        }
        return nullptr;
    }
};

[[noreturn]] inline void translateSEHtoCE(uint ntStatus, struct _EXCEPTION_POINTERS* expPtr) {
    throw seh_exception(ntStatus, expPtr);
}

// only set for the current thread
LLAPI void setSehTranslator();

LLNDAPI std::system_error getWinLastError() noexcept;

LLNDAPI optional_ref<::_EXCEPTION_RECORD> current_exception_record() noexcept;
LLNDAPI optional_ref<_CONTEXT> current_exception_context() noexcept;

LLNDAPI std::exception_ptr createExceptionPtr(::_EXCEPTION_RECORD const&) noexcept;

#if _HAS_CXX23
LLNDAPI std::stacktrace
        stacktraceFromContext(optional_ref<_CONTEXT const> context, size_t skip = 0, size_t maxDepth = ~0ui64);

inline std::stacktrace stacktraceFromCurrExc(size_t skip = 0, size_t maxDepth = ~0ui64) {
    return stacktraceFromContext(current_exception_context(), skip, maxDepth);
}
#endif

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr) noexcept;

LLAPI void printCurrentException(ll::Logger& l, std::exception_ptr const& = std::current_exception()) noexcept;

LLAPI void
printCurrentException(ll::OutputStream& stream, std::exception_ptr const& = std::current_exception()) noexcept;

inline void printException(ll::Logger& l, ::_EXCEPTION_RECORD const& e) noexcept {
    printCurrentException(l, createExceptionPtr(e));
}
inline void printException(ll::OutputStream& stream, ::_EXCEPTION_RECORD const& e) noexcept {
    printCurrentException(stream, createExceptionPtr(e));
}

template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(ll::Logger& l, T const& e) noexcept {
    printCurrentException(l, std::make_exception_ptr(e));
}
template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(ll::OutputStream& stream, T const& e) noexcept {
    printCurrentException(stream, std::make_exception_ptr(e));
}
} // namespace ll::inline utils::error_utils

#pragma once

#include <system_error>
#include <typeinfo>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "mc/common/wrapper/optional_ref.h"

#include "ll/api/utils/MsvcPredefine.h"

namespace ll {
class Logger;
}
struct _EXCEPTION_RECORD;

namespace ll::utils::error_info {

class seh_exception : public std::system_error {
private:
    void* expPtr;

public:
    LLNDAPI seh_exception(uint ntStatus, void* expPtr);

    LLNDAPI void* getExceptionPointer() const noexcept;
};

struct UntypedException {

    static constexpr uint exceptionCodeOfCpp = ('msc' | 0xE0000000);

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
#if defined(_WIN64)
        return reinterpret_cast<T>((uintptr_t)handle + (uintptr_t)(addr));
#else
        return reinterpret_cast<T>(addr);
#endif
    }

    void*                          exception_object;
    _EXCEPTION_RECORD const*       exc;
    void*                          handle    = nullptr;
    RealInternal::ThrowInfo const* throwInfo = nullptr;
    _CatchableTypeArray const*     cArray    = nullptr;
};

inline void translateSEHtoCE(uint ntStatus, struct _EXCEPTION_POINTERS* expPtr) {
    throw seh_exception(ntStatus, expPtr);
}

LLAPI void setThisThreadSehTranslator();

LLNDAPI std::error_category const& u8system_category() noexcept;

LLNDAPI std::error_category const& ntstatus_category() noexcept;

LLNDAPI std::system_error getLastWinError() noexcept;

LLNDAPI std::string makeExceptionString(std::exception_ptr ePtr);

LLAPI void printCurrentException(
    optional_ref<ll::Logger>  = nullptr,
    std::exception_ptr const& = std::current_exception()
) noexcept;

template <class T>
    requires(!std::is_same_v<T, std::exception_ptr>)
inline void printException(T const& e, optional_ref<ll::Logger> l = nullptr) noexcept {
    printCurrentException(l, std::make_exception_ptr(e));
}

} // namespace ll::utils::error_info

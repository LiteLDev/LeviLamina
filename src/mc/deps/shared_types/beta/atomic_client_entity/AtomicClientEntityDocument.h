#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDefinitions.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDescription.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDefinitions>  mDefinitions;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::SemVersionConstant const& VERSION();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity

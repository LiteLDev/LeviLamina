#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDefinitions.h"
#include "mc/deps/shared_types/beta/atomic_client_entity/AtomicClientEntityDescription.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::AtomicClientEntity {

struct AtomicClientEntityDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDescription> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDefinitions> mDefinitions;
    // NOLINTEND

public:
    // prevent constructor by default
    AtomicClientEntityDocument& operator=(AtomicClientEntityDocument const&);
    AtomicClientEntityDocument();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AtomicClientEntityDocument(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDocument const&);

    MCAPI ~AtomicClientEntityDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Beta::AtomicClientEntity::AtomicClientEntityDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::AtomicClientEntity

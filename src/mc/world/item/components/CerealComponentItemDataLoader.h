#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class PackLoadContext;
struct ComponentItemData_v1_26_0;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<::ComponentItemData_v1_26_0, ::BedrockLoadContext, nullptr_t, ::ComponentItemData_v1_26_0>>
                                            mLoader;
    ::ll::TypedStorage<8, 24, ::SemVersion> mDocumentVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CerealComponentItemDataLoader(
        ::SemVersion                   documentVersion,
        ::PackLoadContext const&       packLoadContext,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI ~CerealComponentItemDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SemVersion documentVersion, ::PackLoadContext const& packLoadContext, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

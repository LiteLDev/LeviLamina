#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CerealComponentItemDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk71ecdf;
    ::ll::UntypedStorage<8, 24>  mUnkaa5bf5;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealComponentItemDataLoader& operator=(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CerealComponentItemDataLoader(
        ::SemVersion                   documentVersion,
        ::IPackLoadContext const&      packLoadContext,
        ::cereal::ReflectionCtx const& ctx
    );

    MCAPI ~CerealComponentItemDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SemVersion documentVersion, ::IPackLoadContext const& packLoadContext, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

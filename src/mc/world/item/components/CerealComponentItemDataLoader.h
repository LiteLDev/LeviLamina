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
    ::ll::UntypedStorage<8, 104> mUnkc056db;
    ::ll::UntypedStorage<8, 24>  mUnkaa5bf5;
    ::ll::UntypedStorage<8, 8>   mUnk1db8fd;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealComponentItemDataLoader& operator=(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader(CerealComponentItemDataLoader const&);
    CerealComponentItemDataLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CerealComponentItemDataLoader(
        ::SemVersion                   documentVersion,
        ::IPackLoadContext const&      packLoadContext,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI ~CerealComponentItemDataLoader();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SemVersion documentVersion, ::IPackLoadContext const& packLoadContext, ::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

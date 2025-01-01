#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class IFeature;
class ScatterParams;
// clang-format on

struct BiomeDecorationFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1816, ::ScatterParams>     mScatter;
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeature;
    ::ll::TypedStorage<8, 48, ::HashedString>        mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>         mPass;
    ::ll::TypedStorage<1, 1, bool>                   mCanUseInternalFeature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeDecorationFeature(::BiomeDecorationFeature&&);

    MCAPI BiomeDecorationFeature(::BiomeDecorationFeature const&);

    MCAPI ~BiomeDecorationFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeDecorationFeature&&);

    MCAPI void* $ctor(::BiomeDecorationFeature const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

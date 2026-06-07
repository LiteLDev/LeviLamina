#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

// auto generated forward declare list
// clang-format off
class Tag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class NBTLoader : public ::cereal::BasicLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk68138d;
    // NOLINTEND

public:
    // prevent constructor by default
    NBTLoader& operator=(NBTLoader const&);
    NBTLoader(NBTLoader const&);
    NBTLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NBTLoader(::gsl::not_null<::Tag const*> tag, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<::Tag const*> tag, ::cereal::ReflectionCtx const& reflectionCtx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

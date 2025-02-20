#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnkb954b8;
    ::ll::UntypedStorage<8, 160> mUnkd5d8b1;
    ::ll::UntypedStorage<1, 1>   mUnk3d4165;
    // NOLINTEND

public:
    // prevent constructor by default
    JsonSaver& operator=(JsonSaver const&);
    JsonSaver(JsonSaver const&);
    JsonSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JsonSaver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JsonSaver(::cereal::ReflectionCtx const& reflectionCtx);

    MCAPI JsonSaver(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);

    MCAPI ::std::string toString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& reflectionCtx);

    MCAPI void* $ctor(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal

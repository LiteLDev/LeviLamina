#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SaverConfig; }
// clang-format on

namespace cereal {

class JsonSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168> mUnkb954b8;
    ::ll::UntypedStorage<8, 184> mUnkd5d8b1;
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
    MCNAPI JsonSaver(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCNAPI JsonSaver(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);

    MCNAPI ::std::string toString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCNAPI void* $ctor(::cereal::ReflectionCtx const& reflectionCtx, char indentChar, uint indentAmount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal

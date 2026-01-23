#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
namespace cereal { struct SaverConfig; }
// clang-format on

class NBTSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka5501a;
    // NOLINTEND

public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&);
    NBTSaver(NBTSaver const&);
    NBTSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NBTSaver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NBTSaver(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);

    MCNAPI ::CompoundTag getSavedCompoundTag();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::cereal::SaverConfig const&);
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

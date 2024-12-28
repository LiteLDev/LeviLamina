#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Tag;
// clang-format on

class NBTSaver : public ::cereal::BasicSaver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka5501a;
    // NOLINTEND

public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&);
    NBTSaver(NBTSaver const&);
    NBTSaver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBTSaver() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CompoundTag getSavedCompoundTag();

    MCAPI ::std::unique_ptr<::Tag> getSavedTag();
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

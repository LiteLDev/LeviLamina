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
    ::ll::UntypedStorage<8, 40> mUnka5501a;
    // NOLINTEND

public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&);
    NBTSaver(NBTSaver const&);
    NBTSaver();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CompoundTag getSavedCompoundTag();

    MCNAPI ::std::unique_ptr<::Tag> getSavedTag();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSaver.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicSaver; }
// clang-format on

class NBTSaver : public ::cereal::BasicSaver {
public:
    // prevent constructor by default
    NBTSaver& operator=(NBTSaver const&);
    NBTSaver(NBTSaver const&);
    NBTSaver();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NBTSaver();

    MCAPI class CompoundTag getSavedCompoundTag();

    MCAPI std::unique_ptr<class Tag> getSavedTag();

    // NOLINTEND
};

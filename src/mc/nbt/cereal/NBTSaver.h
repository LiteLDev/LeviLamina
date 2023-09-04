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
    NBTSaver& operator=(NBTSaver const&) = delete;
    NBTSaver(NBTSaver const&)            = delete;
    NBTSaver()                           = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1NBTSaver@@UEAA@XZ
    MCVAPI ~NBTSaver();

    // symbol: ?getSavedCompoundTag@NBTSaver@@QEAA?AVCompoundTag@@XZ
    MCAPI class CompoundTag getSavedCompoundTag();

    // NOLINTEND
};

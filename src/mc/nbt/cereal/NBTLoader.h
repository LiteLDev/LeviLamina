#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicLoader.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class BasicLoader; }
// clang-format on

class NBTLoader : public ::cereal::BasicLoader {
public:
    // prevent constructor by default
    NBTLoader& operator=(NBTLoader const&);
    NBTLoader(NBTLoader const&);
    NBTLoader();

public:
    // NOLINTBEGIN
    // symbol: ??1NBTLoader@@UEAA@XZ
    MCVAPI ~NBTLoader();

    // symbol: ??0NBTLoader@@QEAA@V?$not_null@PEBVCompoundTag@@@gsl@@@Z
    MCAPI explicit NBTLoader(gsl::not_null<class CompoundTag const*>);

    // NOLINTEND
};

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
    NBTLoader& operator=(NBTLoader const&) = delete;
    NBTLoader(NBTLoader const&)            = delete;
    NBTLoader()                            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTLoader();
#endif
    /**
     * @symbol ??0NBTLoader\@\@QEAA\@V?$not_null\@PEBVCompoundTag\@\@\@gsl\@\@\@Z
     */
    MCAPI NBTLoader(gsl::not_null<class CompoundTag const*>);
    // NOLINTEND
};

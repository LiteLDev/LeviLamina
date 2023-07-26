#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NbtIo {

public:
    // prevent constructor by default
    NbtIo& operator=(NbtIo const&) = delete;
    NbtIo(NbtIo const&)            = delete;
    NbtIo()                        = delete;

public:
    /**
     * @symbol
     * ?read\@NbtIo\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput&); // NOLINT
    /**
     * @symbol ?write\@NbtIo\@\@SAXPEBVCompoundTag\@\@AEAVIDataOutput\@\@\@Z
     */
    MCAPI static void write(class CompoundTag const*, class IDataOutput&); // NOLINT
};

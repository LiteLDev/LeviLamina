#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NbtIo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTIO
public:
    NbtIo& operator=(NbtIo const&) = delete;
    NbtIo(NbtIo const&)            = delete;
    NbtIo()                        = delete;
#endif

public:
    /**
     * @symbol
     * ?read\@NbtIo\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEAVIDataInput\@\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput&);
    /**
     * @symbol ?write\@NbtIo\@\@SAXPEBVCompoundTag\@\@AEAVIDataOutput\@\@\@Z
     */
    MCAPI static void write(class CompoundTag const*, class IDataOutput&);
};

/**
 * @file  MC/NbtIo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NbtIo.
 *
 */
class NbtIo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTIO
public:
    class NbtIo& operator=(class NbtIo const &) = delete;
    NbtIo(class NbtIo const &) = delete;
    NbtIo() = delete;
#endif

public:
    /**
     * @hash   -1060321855
     * @symbol ?read@NbtIo@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVIDataInput@@@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> read(class IDataInput &);
    /**
     * @hash   578807094
     * @symbol ?write@NbtIo@@SAXPEBVCompoundTag@@AEAVIDataOutput@@@Z
     */
    MCAPI static void write(class CompoundTag const *, class IDataOutput &);

};
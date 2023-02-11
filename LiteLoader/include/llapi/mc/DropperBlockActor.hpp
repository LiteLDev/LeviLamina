/**
 * @file  DropperBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DropperBlockActor.
 *
 */
class DropperBlockActor {

#define AFTER_EXTRA
// Add Member There
    friend class Level;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DROPPERBLOCKACTOR
public:
    class DropperBlockActor& operator=(class DropperBlockActor const &) = delete;
    DropperBlockActor(class DropperBlockActor const &) = delete;
    DropperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DROPPERBLOCKACTOR
    /**
     * @hash   428499775
     * @symbol  ?_getUpdatePacket\@DropperBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1247111011
     * @symbol  ?_onUpdatePacket\@DropperBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -196317867
     * @symbol  ?getName\@DropperBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
    /**
     * @hash   1833422433
     * @symbol  ??0DropperBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI DropperBlockActor(class BlockPos);
    /**
     * @hash   -333195915
     * @symbol  ?pushOutItems\@DropperBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool pushOutItems(class BlockSource &);

//private:
    /**
     * @hash   938369342
     * @symbol  ?_addItem\@DropperBlockActor\@\@AEAA_NAEAVContainer\@\@AEAVItemStack\@\@H\@Z
     */
    MCAPI bool _addItem(class Container &, class ItemStack &, int);
    /**
     * @hash   -1513938250
     * @symbol  ?_getContainerAt\@DropperBlockActor\@\@AEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Container * _getContainerAt(class BlockSource &, class Vec3 const &);

private:

};
/**
 * @file  DropperBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_getUpdatePacket\@DropperBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@DropperBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?getName\@DropperBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
#endif
    /**
     * @symbol  ??0DropperBlockActor\@\@QEAA\@VBlockPos\@\@\@Z
     */
    MCAPI DropperBlockActor(class BlockPos);
    /**
     * @symbol  ?pushOutItems\@DropperBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool pushOutItems(class BlockSource &);

//private:
    /**
     * @symbol  ?_addItem\@DropperBlockActor\@\@AEAA_NAEAVContainer\@\@AEAVItemStack\@\@H\@Z
     */
    MCAPI bool _addItem(class Container &, class ItemStack &, int);
    /**
     * @symbol  ?_getContainerAt\@DropperBlockActor\@\@AEAAPEAVContainer\@\@AEAVBlockSource\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Container * _getContainerAt(class BlockSource &, class Vec3 const &);

private:

};
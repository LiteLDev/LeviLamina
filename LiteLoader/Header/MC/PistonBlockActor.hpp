// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PistonBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PISTONBLOCKACTOR
public:
    class PistonBlockActor& operator=(class PistonBlockActor const &) = delete;
    PistonBlockActor(class PistonBlockActor const &) = delete;
    PistonBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~PistonBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void onRemoved(class BlockSource &);
    /*16*/ virtual void __unk_vfn_16();
    /*27*/ virtual class PistonBlockActor * getOwningPiston(class BlockSource &);
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual float getDeletionDelayTimeSeconds() const;
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCAPI PistonBlockActor(class BlockPos const &, bool);
    MCAPI std::vector<class BlockPos> const & getAttachedBlocks() const;
    MCAPI class Block const * getCorrectArmBlock() const;
    MCAPI class BlockPos const & getFacingDir(class IConstBlockSource const &) const;
    MCAPI float getProgress(float) const;
    MCAPI bool isExpanded() const;
    MCAPI bool isExpanding() const;
    MCAPI bool isMoving() const;
    MCAPI bool isRetracted() const;
    MCAPI bool isRetracting() const;
    MCAPI void moveEntityLastProgress(class Actor &, class Vec3);
    MCAPI void setShouldVerifyArmType(bool);

protected:

private:
    MCAPI bool _attachedBlockWalker(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    MCAPI bool _checkAttachedBlocks(class BlockSource &);
    MCAPI void _checkInceptionAchievement(class BlockActor &, class BlockSource &, class BlockPos const &);
    MCAPI bool _handleSlimeConnections(class BlockSource &, class BlockPos const &, unsigned char, unsigned char);
    MCAPI bool _hasBlockAttached(class BlockPos const &);
    MCAPI void _moveCollidedEntities(class BlockSource &);
    MCAPI void _moveCollidedEntitiesHelper(class BlockSource &, class AABB const &, class BlockPos const &, class Actor *, unsigned int);
    MCAPI void _sortAttachedBlocks(class BlockSource &);
    MCAPI void _spawnBlocks(class BlockSource &);
    MCAPI void _spawnMovingBlocks(class BlockSource &);
    MCAPI static float const ARM_ANIMATION_SPEED;

};
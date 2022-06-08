// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CampfireBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMPFIREBLOCKACTOR
public:
    class CampfireBlockActor& operator=(class CampfireBlockActor const &) = delete;
    CampfireBlockActor(class CampfireBlockActor const &) = delete;
    CampfireBlockActor() = delete;
#endif

public:
    /*0*/ virtual ~CampfireBlockActor();
    /*1*/ virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /*2*/ virtual bool save(class CompoundTag &) const;
    /*7*/ virtual void tick(class BlockSource &);
    /*8*/ virtual void onChanged(class BlockSource &);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual float getShadowRadius(class BlockSource &) const;
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual void __unk_vfn_29();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /*35*/ virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    MCAPI CampfireBlockActor(class BlockPos const &);
    MCAPI void dropAllItems(class BlockSource &);
    MCAPI class ItemInstance const & getCookingItem(int);
    MCAPI bool setItem(class BlockSource &, class ItemInstance const &);
    MCAPI static int const MAX_SMOKE_THRESHOLD_COUNTER;
    MCAPI static int const MIN_SMOKE_THRESHOLD_COUNTER;

protected:

private:
    MCAPI void _finishCooking(class BlockSource &, int);

};
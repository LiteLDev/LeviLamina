#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CoralFan : public ::BushBlock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFAN
public:
    CoralFan& operator=(CoralFan const&) = delete;
    CoralFan(CoralFan const&)            = delete;
    CoralFan()                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 8
     * @symbol ?getAABB\@CoralFan\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /**
     * @vftbl 17
     * @symbol ?randomlyModifyPosition\@CoralFan\@\@UEBA?AVVec3\@\@AEBVBlockPos\@\@\@Z
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const&) const;
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol ?isWaterBlocking\@CoralFan\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50();
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 57
     * @symbol ?isValidAuxValue\@CoralFan\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63();
    /**
     * @vftbl 64
     * @symbol ?canContainLiquid\@CoralFan\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 71
     * @symbol ?checkIsPathable\@CoralFan\@\@UEBA_NAEAVActor\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 89
     * @symbol ?mayConsumeFertilizer\@CoralFan\@\@UEBA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool mayConsumeFertilizer(class BlockSource&) const;
    /**
     * @vftbl 95
     * @symbol ?mayPlaceOn\@CoralFan\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlaceOn(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@CoralFan\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
    /**
     * @vftbl 104
     * @symbol
     * ?spawnResources\@CoralFan\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAVRandomize\@\@AEBUResourceDropsContext\@\@\@Z
     */
    virtual void
    spawnResources(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&)
        const;
    /**
     * @vftbl 105
     * @symbol ?asItemInstance\@CoralFan\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@PEBVBlockActor\@\@\@Z
     */
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128();
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl 133
     * @symbol
     * ?buildDescriptionId\@CoralFan\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlock\@\@\@Z
     */
    virtual std::string buildDescriptionId(class Block const&) const;
    /**
     * @vftbl 134
     * @symbol ?isAuxValueRelevantForPicking\@CoralFan\@\@UEBA_NXZ
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl 135
     * @symbol ?getColor\@CoralFan\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getColor(class Block const&) const;
    /**
     * @vftbl 136
     * @symbol ?getColor\@CoralFan\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 143
     * @symbol ?getVariant\@CoralFan\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const;
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153();
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 165
     * @symbol ?onPlace\@CoralFan\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 182
     * @symbol ?getMapColor\@CoralFan\@\@UEBA?AVColor\@mce\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 184
     * @symbol ?playerDestroy\@CoralFan\@\@UEBAXAEAVPlayer\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void playerDestroy(class Player&, class BlockPos const&, class Block const&) const;
    /**
     * @vftbl 185
     * @symbol ?getResourceItem\@CoralFan\@\@UEBA?AVItemInstance\@\@AEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;
    /**
     * @vftbl 186
     * @symbol ?getResourceCount\@CoralFan\@\@UEBAHAEAVRandomize\@\@AEBVBlock\@\@H\@Z
     */
    virtual int getResourceCount(class Randomize&, class Block const&, int) const;
    /**
     * @vftbl 187
     * @symbol ?getSilkTouchItemInstance\@CoralFan\@\@UEBA?AVItemInstance\@\@AEBVBlock\@\@\@Z
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const&) const;
    /**
     * @vftbl 192
     * @symbol ?checkAlive\@CoralFan\@\@MEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void checkAlive(class BlockSource&, class BlockPos const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALFAN
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CoralFan();
#endif
    /**
     * @symbol ??0CoralFan\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI CoralFan(std::string const&, int);
    /**
     * @symbol
     * ?CORAL_FAN_NAMES\@CoralFan\@\@2QBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CORAL_FAN_NAMES[];
    /**
     * @symbol ?CORAL_FAN_NAMES_COUNT\@CoralFan\@\@2HB
     */
    MCAPI static int const CORAL_FAN_NAMES_COUNT;
};

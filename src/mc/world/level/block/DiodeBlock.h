#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DiodeBlock : public ::BlockLegacy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIODEBLOCK
public:
    DiodeBlock& operator=(DiodeBlock const&) = delete;
    DiodeBlock(DiodeBlock const&)            = delete;
    DiodeBlock()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
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
     * @vftbl 53
     * @symbol ?isSignalSource\@DiodeBlock\@\@UEBA_NXZ
     */
    virtual bool isSignalSource() const;
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56();
    /**
     * @vftbl 61
     * @symbol ?getDirectSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getDirectSignal(class BlockSource&, class BlockPos const&, int) const;
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
     * @vftbl 75
     * @symbol ?onRedstoneUpdate\@DiodeBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
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
     * @vftbl 94
     * @symbol ?mayPlace\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 108
     * @symbol ?getPlacementBlock\@DiodeBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, unsigned char, class Vec3 const&, int) const;
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
     * @vftbl 143
     * @symbol ?getVariant\@DiodeBlock\@\@UEBAHAEBVBlock\@\@\@Z
     */
    virtual int getVariant(class Block const&) const;
    /**
     * @vftbl 144
     * @symbol ?canSpawnOn\@DiodeBlock\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor*) const;
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
     * @vftbl 175
     * @symbol ?canSurvive\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
    /**
     * @vftbl 192
     * @symbol ?getSignal\@DiodeBlock\@\@UEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    virtual int getSignal(class BlockSource&, class BlockPos const&, int) const;
    /**
     * @vftbl 193
     * @symbol ?isLocked\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool isLocked(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 194
     * @symbol ?isSameDiode\@DiodeBlock\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isSameDiode(class Block const&) const;
    /**
     * @vftbl 195
     * @symbol ?shouldPrioritize\@DiodeBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldPrioritize(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 196
     * @symbol ?isOn\@DiodeBlock\@\@MEBA_NXZ
     */
    virtual bool isOn() const;
    /**
     * @vftbl 197
     * @symbol ?shouldTurnOn\@DiodeBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool shouldTurnOn(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 198
     * @symbol ?getInputSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getInputSignal(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 199
     * @symbol ?isAlternateInput\@DiodeBlock\@\@MEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool isAlternateInput(class Block const&) const;
    /**
     * @vftbl 200
     * @symbol ?getAlternateSignal\@DiodeBlock\@\@MEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual int getAlternateSignal(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 201
     * @symbol ?getOutputSignal\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getOutputSignal(class Block const&) const;
    /**
     * @vftbl 202
     * @symbol ?getTurnOffDelay\@DiodeBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOffDelay(class Block const&) const;
    /**
     * @vftbl 203
     * @symbol ?getTurnOnDelay\@RepeaterBlock\@\@MEBAHAEBVBlock\@\@\@Z
     */
    virtual int getTurnOnDelay(class Block const&) const = 0;
    /**
     * @vftbl 204
     * @symbol ?getOnBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const* getOnBlock(class Block const*) const = 0;
    /**
     * @vftbl 205
     * @symbol ?getOffBlock\@RepeaterBlock\@\@MEBAPEBVBlock\@\@PEBV2\@\@Z
     */
    virtual class Block const* getOffBlock(class Block const*) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIODEBLOCK
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DiodeBlock();
#endif
    /**
     * @symbol ??0DiodeBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCAPI DiodeBlock(std::string const&, int, bool);
    /**
     * @symbol ?isDiode\@DiodeBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isDiode(class Block const&);

    // protected:
    /**
     * @symbol ?getAlternateSignalAt\@DiodeBlock\@\@IEBAHAEAVBlockSource\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI int getAlternateSignalAt(class BlockSource&, class BlockPos const&, int) const;

protected:
};

/**
 * @file  StructureBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureBlockActor.
 *
 */
class StructureBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREBLOCKACTOR
public:
    class StructureBlockActor& operator=(class StructureBlockActor const &) = delete;
    StructureBlockActor(class StructureBlockActor const &) = delete;
    StructureBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StructureBlockActor();
    /**
     * @hash   991112162
     * @vftbl  1
     * @symbol  ?load\@StructureBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   903753313
     * @vftbl  2
     * @symbol  ?save\@StructureBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   1035624163
     * @vftbl  8
     * @symbol  ?onChanged\@StructureBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   -295396620
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@StructureBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1031726466
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@StructureBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   710506382
     * @symbol  ??0StructureBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI StructureBlockActor(class BlockPos const &);
    /**
     * @hash   -1000619910
     * @symbol  ?getStructureData\@StructureBlockActor\@\@QEBAAEBVStructureEditorData\@\@XZ
     */
    MCAPI class StructureEditorData const & getStructureData() const;
    /**
     * @hash   1407594274
     * @symbol  ?setIsWaterlogged\@StructureBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterlogged(bool);
    /**
     * @hash   -1555483512
     * @symbol  ?setPowered\@StructureBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@_N2\@Z
     */
    MCAPI void setPowered(class BlockSource &, class BlockPos const &, bool, bool);
    /**
     * @hash   -1403719448
     * @symbol  ?setStructureData\@StructureBlockActor\@\@QEAAXAEBVStructureEditorData\@\@\@Z
     */
    MCAPI void setStructureData(class StructureEditorData const &);
    /**
     * @hash   -415619207
     * @symbol  ?MAX_WIREFRAME_RENDER_DISTANCE\@StructureBlockActor\@\@2MB
     */
    MCAPI static float const MAX_WIREFRAME_RENDER_DISTANCE;
    /**
     * @hash   664993347
     * @symbol  ?X_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const X_AXIS_COLOR;
    /**
     * @hash   146715187
     * @symbol  ?Y_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const Y_AXIS_COLOR;
    /**
     * @hash   -371562973
     * @symbol  ?Z_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const Z_AXIS_COLOR;

//private:
    /**
     * @hash   -1353160387
     * @symbol  ?_loadStructure\@StructureBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI bool _loadStructure(class BlockSource &, class BlockPos const &, class BaseGameVersion const &);
    /**
     * @hash   326810164
     * @symbol  ?_saveStructure\@StructureBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _saveStructure(class BlockSource &, class BlockPos const &, bool);
    /**
     * @hash   54355288
     * @symbol  ?_trigger\@StructureBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBaseGameVersion\@\@_N\@Z
     */
    MCAPI void _trigger(class BlockSource &, class BlockPos const &, class BaseGameVersion const &, bool);

private:

};
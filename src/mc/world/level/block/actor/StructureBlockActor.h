#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StructureBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    StructureBlockActor& operator=(StructureBlockActor const&) = delete;
    StructureBlockActor(StructureBlockActor const&)            = delete;
    StructureBlockActor()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@StructureBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@StructureBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@StructureBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@StructureBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@StructureBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ??0StructureBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI StructureBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getStructureData\@StructureBlockActor\@\@QEBAAEBVStructureEditorData\@\@XZ
     */
    MCAPI class StructureEditorData const& getStructureData() const; // NOLINT
    /**
     * @symbol ?setIsWaterlogged\@StructureBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setIsWaterlogged(bool); // NOLINT
    /**
     * @symbol ?setPowered\@StructureBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@_N2\@Z
     */
    MCAPI void setPowered(class BlockSource&, class BlockPos const&, bool, bool); // NOLINT
    /**
     * @symbol ?setStructureData\@StructureBlockActor\@\@QEAAXAEBVStructureEditorData\@\@\@Z
     */
    MCAPI void setStructureData(class StructureEditorData const&); // NOLINT
    /**
     * @symbol ?MAX_WIREFRAME_RENDER_DISTANCE\@StructureBlockActor\@\@2MB
     */
    MCAPI static float const MAX_WIREFRAME_RENDER_DISTANCE; // NOLINT
    /**
     * @symbol ?X_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const X_AXIS_COLOR; // NOLINT
    /**
     * @symbol ?Y_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const Y_AXIS_COLOR; // NOLINT
    /**
     * @symbol ?Z_AXIS_COLOR\@StructureBlockActor\@\@2VColor\@mce\@\@B
     */
    MCAPI static class mce::Color const Z_AXIS_COLOR; // NOLINT

    // private:
    /**
     * @symbol
     * ?_loadStructure\@StructureBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI bool _loadStructure(class BlockSource&, class BlockPos const&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?_saveStructure\@StructureBlockActor\@\@AEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _saveStructure(class BlockSource&, class BlockPos const&, bool); // NOLINT
    /**
     * @symbol ?_trigger\@StructureBlockActor\@\@AEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVBaseGameVersion\@\@_N\@Z
     */
    MCAPI void _trigger(class BlockSource&, class BlockPos const&, class BaseGameVersion const&, bool); // NOLINT

private:
};

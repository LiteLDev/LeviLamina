#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BaseRailBlock : public ::BlockLegacy {
public:
    // BaseRailBlock inner types declare
    // clang-format off
    class Rail;
    // clang-format on

    // BaseRailBlock inner types define
    class Rail {

    public:
        // prevent constructor by default
        Rail& operator=(Rail const&) = delete;
        Rail(Rail const&)            = delete;
        Rail()                       = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Rail\@BaseRailBlock\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
         */
        MCAPI Rail(class BlockSource&, class BlockPos const&);
        /**
         * @symbol ?place\@Rail\@BaseRailBlock\@\@QEAAXH_N\@Z
         */
        MCAPI void place(int, bool);
        /**
         * @symbol ??1Rail\@BaseRailBlock\@\@QEAA\@XZ
         */
        MCAPI ~Rail();
        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        /**
         * @symbol ?connectTo\@Rail\@BaseRailBlock\@\@IEAAXAEAV12\@\@Z
         */
        MCAPI void connectTo(class BaseRailBlock::Rail&);
        /**
         * @symbol ?connectsTo\@Rail\@BaseRailBlock\@\@IEAA_NAEAV12\@\@Z
         */
        MCAPI bool connectsTo(class BaseRailBlock::Rail&);
        /**
         * @symbol
         * ?getRail\@Rail\@BaseRailBlock\@\@IEAA?AV?$shared_ptr\@VRail\@BaseRailBlock\@\@\@std\@\@AEBVBlockPos\@\@\@Z
         */
        MCAPI std::shared_ptr<class BaseRailBlock::Rail> getRail(class BlockPos const&);
        /**
         * @symbol ?hasNeighborRail\@Rail\@BaseRailBlock\@\@IEAA_NAEBVBlockPos\@\@\@Z
         */
        MCAPI bool hasNeighborRail(class BlockPos const&);
        /**
         * @symbol ?removeSoftConnections\@Rail\@BaseRailBlock\@\@IEAAXXZ
         */
        MCAPI void removeSoftConnections();
        /**
         * @symbol ?updateConnections\@Rail\@BaseRailBlock\@\@IEAAXH\@Z
         */
        MCAPI void updateConnections(int);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    BaseRailBlock& operator=(BaseRailBlock const&) = delete;
    BaseRailBlock(BaseRailBlock const&)            = delete;
    BaseRailBlock()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@BaseRailBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool) const;
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@BaseRailBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;
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
     * @symbol ?isWaterBlocking\@BaseRailBlock\@\@UEBA_NXZ
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
     * @symbol ?canContainLiquid\@BaseRailBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 75
     * @symbol ?onRedstoneUpdate\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 81
     * @symbol ?setupRedstoneComponent\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@BaseRailBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const;
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
     * @vftbl 140
     * @symbol ?onGraphicsModeChanged\@BaseRailBlock\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&);
    /**
     * @vftbl 144
     * @symbol ?canSpawnOn\@BaseRailBlock\@\@UEBA_NPEAVActor\@\@\@Z
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
     * @vftbl 165
     * @symbol ?onPlace\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol ?tick\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;
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
     * @symbol ?canSurvive\@BaseRailBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 177
     * @symbol
     * ?getRenderLayer\@BaseRailBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const;
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASERAILBLOCK
    /**
     * @symbol ?isRailBlock\@BaseRailBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const;
    /**
     * @symbol ?waterSpreadCausesSpawn\@BaseRailBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol
     * ??0BaseRailBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCAPI BaseRailBlock(std::string const&, int, bool);
    /**
     * @symbol ?isCorner\@BaseRailBlock\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isCorner(class BlockSource const&, class BlockPos const&);
    /**
     * @symbol ?isFacingWestEast\@BaseRailBlock\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isFacingWestEast(class BlockSource const&, class BlockPos const&);
    /**
     * @symbol ?isRail\@BaseRailBlock\@\@SA_NAEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isRail(class IConstBlockSource const&, class BlockPos const&);
    /**
     * @symbol ?isRail\@BaseRailBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isRail(class Block const&);
    /**
     * @symbol ?isSlope\@BaseRailBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isSlope(class Block const&);
    /**
     * @symbol ?isSlope\@BaseRailBlock\@\@SA_NH\@Z
     */
    MCAPI static bool isSlope(int);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_createCircuitComponent\@BaseRailBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _createCircuitComponent(class BlockSource&, class BlockPos const&);
    /**
     * @symbol ?_updatePlacement\@BaseRailBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _updatePlacement(class BlockSource&, class BlockPos const&) const;
    // NOLINTEND
};

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
        /**
         * @symbol ??0Rail\@BaseRailBlock\@\@QEAA\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
         */
        MCAPI Rail(class BlockSource&, class BlockPos const&); // NOLINT
        /**
         * @symbol ?place\@Rail\@BaseRailBlock\@\@QEAAXH_N\@Z
         */
        MCAPI void place(int, bool); // NOLINT
        /**
         * @symbol ??1Rail\@BaseRailBlock\@\@QEAA\@XZ
         */
        MCAPI ~Rail(); // NOLINT

        // protected:
        /**
         * @symbol ?connectTo\@Rail\@BaseRailBlock\@\@IEAAXAEAV12\@\@Z
         */
        MCAPI void connectTo(class BaseRailBlock::Rail&); // NOLINT
        /**
         * @symbol ?connectsTo\@Rail\@BaseRailBlock\@\@IEAA_NAEAV12\@\@Z
         */
        MCAPI bool connectsTo(class BaseRailBlock::Rail&); // NOLINT
        /**
         * @symbol
         * ?getRail\@Rail\@BaseRailBlock\@\@IEAA?AV?$shared_ptr\@VRail\@BaseRailBlock\@\@\@std\@\@AEBVBlockPos\@\@\@Z
         */
        MCAPI class std::shared_ptr<class BaseRailBlock::Rail> getRail(class BlockPos const&); // NOLINT
        /**
         * @symbol ?hasNeighborRail\@Rail\@BaseRailBlock\@\@IEAA_NAEBVBlockPos\@\@\@Z
         */
        MCAPI bool hasNeighborRail(class BlockPos const&); // NOLINT
        /**
         * @symbol ?removeSoftConnections\@Rail\@BaseRailBlock\@\@IEAAXXZ
         */
        MCAPI void removeSoftConnections(); // NOLINT
        /**
         * @symbol ?updateConnections\@Rail\@BaseRailBlock\@\@IEAAXH\@Z
         */
        MCAPI void updateConnections(int); // NOLINT

    protected:
    };

public:
    // prevent constructor by default
    BaseRailBlock& operator=(BaseRailBlock const&) = delete;
    BaseRailBlock(BaseRailBlock const&)            = delete;
    BaseRailBlock()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?getAABB\@BaseRailBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const&
    getAABB(class IConstBlockSource const&, class BlockPos const&, class Block const&, class AABB&, bool)
        const; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?getVisualShape\@BaseRailBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@\@Z
     */
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const; // NOLINT
    /**
     * @vftbl 22
     * @symbol __unk_vfn_22
     */
    virtual void __unk_vfn_22(); // NOLINT
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
     * @vftbl 37
     * @symbol ?isWaterBlocking\@BaseRailBlock\@\@UEBA_NXZ
     */
    virtual bool isWaterBlocking() const; // NOLINT
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38(); // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40(); // NOLINT
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41(); // NOLINT
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42(); // NOLINT
    /**
     * @vftbl 43
     * @symbol __unk_vfn_43
     */
    virtual void __unk_vfn_43(); // NOLINT
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44(); // NOLINT
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46(); // NOLINT
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47(); // NOLINT
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48(); // NOLINT
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49(); // NOLINT
    /**
     * @vftbl 50
     * @symbol __unk_vfn_50
     */
    virtual void __unk_vfn_50(); // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 56
     * @symbol __unk_vfn_56
     */
    virtual void __unk_vfn_56(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 63
     * @symbol __unk_vfn_63
     */
    virtual void __unk_vfn_63(); // NOLINT
    /**
     * @vftbl 64
     * @symbol ?canContainLiquid\@BaseRailBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const; // NOLINT
    /**
     * @vftbl 75
     * @symbol ?onRedstoneUpdate\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@H_N\@Z
     */
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 81
     * @symbol ?setupRedstoneComponent\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84(); // NOLINT
    /**
     * @vftbl 94
     * @symbol ?mayPlace\@BaseRailBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?neighborChanged\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource&, class BlockPos const&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107(); // NOLINT
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123(); // NOLINT
    /**
     * @vftbl 124
     * @symbol __unk_vfn_124
     */
    virtual void __unk_vfn_124(); // NOLINT
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125(); // NOLINT
    /**
     * @vftbl 128
     * @symbol __unk_vfn_128
     */
    virtual void __unk_vfn_128(); // NOLINT
    /**
     * @vftbl 131
     * @symbol __unk_vfn_131
     */
    virtual void __unk_vfn_131(); // NOLINT
    /**
     * @vftbl 140
     * @symbol ?onGraphicsModeChanged\@BaseRailBlock\@\@UEAAXAEBUBlockGraphicsModeChangeContext\@\@\@Z
     */
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const&); // NOLINT
    /**
     * @vftbl 144
     * @symbol ?canSpawnOn\@BaseRailBlock\@\@UEBA_NPEAVActor\@\@\@Z
     */
    virtual bool canSpawnOn(class Actor*) const; // NOLINT
    /**
     * @vftbl 153
     * @symbol __unk_vfn_153
     */
    virtual void __unk_vfn_153(); // NOLINT
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162(); // NOLINT
    /**
     * @vftbl 163
     * @symbol __unk_vfn_163
     */
    virtual void __unk_vfn_163(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 165
     * @symbol ?onPlace\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167(); // NOLINT
    /**
     * @vftbl 168
     * @symbol ?tick\@BaseRailBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171(); // NOLINT
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174(); // NOLINT
    /**
     * @vftbl 175
     * @symbol ?canSurvive\@BaseRailBlock\@\@MEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 177
     * @symbol
     * ?getRenderLayer\@BaseRailBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer
    getRenderLayer(class Block const&, class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @vftbl 183
     * @symbol __unk_vfn_183
     */
    virtual void __unk_vfn_183(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASERAILBLOCK
    /**
     * @symbol ?isRailBlock\@BaseRailBlock\@\@UEBA_NXZ
     */
    MCVAPI bool isRailBlock() const; // NOLINT
    /**
     * @symbol ?waterSpreadCausesSpawn\@BaseRailBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const; // NOLINT
#endif
    /**
     * @symbol
     * ??0BaseRailBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H_N\@Z
     */
    MCAPI BaseRailBlock(std::string const&, int, bool); // NOLINT
    /**
     * @symbol ?isCorner\@BaseRailBlock\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isCorner(class BlockSource const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isFacingWestEast\@BaseRailBlock\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isFacingWestEast(class BlockSource const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isRail\@BaseRailBlock\@\@SA_NAEBVIConstBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isRail(class IConstBlockSource const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isRail\@BaseRailBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isRail(class Block const&); // NOLINT
    /**
     * @symbol ?isSlope\@BaseRailBlock\@\@SA_NAEBVBlock\@\@\@Z
     */
    MCAPI static bool isSlope(class Block const&); // NOLINT
    /**
     * @symbol ?isSlope\@BaseRailBlock\@\@SA_NH\@Z
     */
    MCAPI static bool isSlope(int); // NOLINT

    // private:
    /**
     * @symbol ?_updatePlacement\@BaseRailBlock\@\@AEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _updatePlacement(class BlockSource&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_createCircuitComponent\@BaseRailBlock\@\@CAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void _createCircuitComponent(class BlockSource&, class BlockPos const&); // NOLINT

private:
};

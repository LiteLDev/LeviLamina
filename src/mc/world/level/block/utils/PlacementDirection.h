#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/utils/ITrait.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class CompoundTag;
class Vec3;
// clang-format on

namespace BlockTrait {

class PlacementDirection : public ::BlockTrait::ITrait {
public:
    // PlacementDirection inner types declare
    // clang-format off
    struct EnabledStates;
    class UpdateCardinalGetPlacementBlockCallback;
    class UpdateFacingGetPlacementBlockCallback;
    // clang-format on

    // PlacementDirection inner types define
    struct EnabledStates {

    public:
        // prevent constructor by default
        EnabledStates& operator=(EnabledStates const&) = delete;
        EnabledStates(EnabledStates const&)            = delete;
        EnabledStates()                                = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ?fromStringVector\@EnabledStates\@PlacementDirection\@BlockTrait\@\@SAXAEAU123\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
         */
        MCAPI static void
        fromStringVector(struct BlockTrait::PlacementDirection::EnabledStates&, std::vector<std::string> const&);
        // NOLINTEND
    };

    class UpdateCardinalGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {

    public:
        // prevent constructor by default
        UpdateCardinalGetPlacementBlockCallback& operator=(UpdateCardinalGetPlacementBlockCallback const&) = delete;
        UpdateCardinalGetPlacementBlockCallback(UpdateCardinalGetPlacementBlockCallback const&)            = delete;
        UpdateCardinalGetPlacementBlockCallback()                                                          = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?getPlacementBlock\@UpdateCardinalGetPlacementBlockCallback\@PlacementDirection\@BlockTrait\@\@UEBA?AV?$not_null\@PEBVBlock\@\@\@gsl\@\@V45\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
         */
        virtual class gsl::not_null<class Block const*> getPlacementBlock(
            class gsl::not_null<class Block const*>,
            class Actor const&,
            class BlockPos const&,
            unsigned char,
            class Vec3 const&,
            int
        ) const;
        // NOLINTEND
    };

    class UpdateFacingGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {

    public:
        // prevent constructor by default
        UpdateFacingGetPlacementBlockCallback& operator=(UpdateFacingGetPlacementBlockCallback const&) = delete;
        UpdateFacingGetPlacementBlockCallback(UpdateFacingGetPlacementBlockCallback const&)            = delete;
        UpdateFacingGetPlacementBlockCallback()                                                        = delete;

    public:
        // NOLINTBEGIN
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0();
        /**
         * @vftbl 1
         * @symbol
         * ?getPlacementBlock\@UpdateFacingGetPlacementBlockCallback\@PlacementDirection\@BlockTrait\@\@UEBA?AV?$not_null\@PEBVBlock\@\@\@gsl\@\@V45\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
         */
        virtual class gsl::not_null<class Block const*> getPlacementBlock(
            class gsl::not_null<class Block const*>,
            class Actor const&,
            class BlockPos const&,
            unsigned char,
            class Vec3 const&,
            int
        ) const;
        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&) = delete;
    PlacementDirection(PlacementDirection const&)            = delete;
    PlacementDirection()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applyToBlockLegacy\@PlacementDirection\@BlockTrait\@\@UEBAXAEAVBlockLegacy\@\@\@Z
     */
    virtual void applyToBlockLegacy(class BlockLegacy&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?buildNetworkTag\@PlacementDirection\@BlockTrait\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl 3
     * @symbol ?initializeFromNetwork\@PlacementDirection\@BlockTrait\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKTRAIT_PLACEMENTDIRECTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlacementDirection();
#endif
    /**
     * @symbol ??0PlacementDirection\@BlockTrait\@\@QEAA\@_N0M\@Z
     */
    MCAPI PlacementDirection(bool, bool, float);
    /**
     * @symbol ?setRotationOffset\@PlacementDirection\@BlockTrait\@\@QEAAXAEBM\@Z
     */
    MCAPI void setRotationOffset(float const&);
    /**
     * @symbol ?bindType\@PlacementDirection\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol
     * ?getName\@PlacementDirection\@BlockTrait\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string const& getName();
    // NOLINTEND
};

}; // namespace BlockTrait

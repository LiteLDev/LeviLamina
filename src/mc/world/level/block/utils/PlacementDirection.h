#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class PlacementDirection {
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
        /**
         * @symbol
         * ?fromStringVector\@EnabledStates\@PlacementDirection\@BlockTrait\@\@SAXAEAU123\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
         */
        MCAPI static void
        fromStringVector(struct BlockTrait::PlacementDirection::EnabledStates&, std::vector<std::string> const&); // NOLINT
    };

    class UpdateCardinalGetPlacementBlockCallback {

    public:
        // prevent constructor by default
        UpdateCardinalGetPlacementBlockCallback& operator=(UpdateCardinalGetPlacementBlockCallback const&) = delete;
        UpdateCardinalGetPlacementBlockCallback(UpdateCardinalGetPlacementBlockCallback const&)            = delete;
        UpdateCardinalGetPlacementBlockCallback()                                                          = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
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
        ) const; // NOLINT
    };

    class UpdateFacingGetPlacementBlockCallback {

    public:
        // prevent constructor by default
        UpdateFacingGetPlacementBlockCallback& operator=(UpdateFacingGetPlacementBlockCallback const&) = delete;
        UpdateFacingGetPlacementBlockCallback(UpdateFacingGetPlacementBlockCallback const&)            = delete;
        UpdateFacingGetPlacementBlockCallback()                                                        = delete;

    public:
        /**
         * @vftbl 0
         * @symbol __unk_vfn_0
         */
        virtual void __unk_vfn_0(); // NOLINT
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
        ) const; // NOLINT
    };

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&) = delete;
    PlacementDirection(PlacementDirection const&)            = delete;
    PlacementDirection()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?applyToBlockLegacy\@PlacementDirection\@BlockTrait\@\@UEBAXAEAVBlockLegacy\@\@\@Z
     */
    virtual void applyToBlockLegacy(class BlockLegacy&) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?buildNetworkTag\@PlacementDirection\@BlockTrait\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?initializeFromNetwork\@PlacementDirection\@BlockTrait\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKTRAIT_PLACEMENTDIRECTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlacementDirection(); // NOLINT
#endif
    /**
     * @symbol ??0PlacementDirection\@BlockTrait\@\@QEAA\@_N0M\@Z
     */
    MCAPI PlacementDirection(bool, bool, float); // NOLINT
    /**
     * @symbol ?setRotationOffset\@PlacementDirection\@BlockTrait\@\@QEAAXAEBM\@Z
     */
    MCAPI void setRotationOffset(float const&); // NOLINT
    /**
     * @symbol ?bindType\@PlacementDirection\@BlockTrait\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol
     * ?getName\@PlacementDirection\@BlockTrait\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI static std::string const& getName(); // NOLINT
};

}; // namespace BlockTrait

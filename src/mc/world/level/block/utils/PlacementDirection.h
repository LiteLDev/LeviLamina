#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAIT_PLACEMENTDIRECTION_ENABLEDSTATES
    public:
        EnabledStates& operator=(EnabledStates const&) = delete;
        EnabledStates(EnabledStates const&)            = delete;
        EnabledStates()                                = delete;
#endif

    public:
        /**
         * @symbol
         * ?fromStringVector\@EnabledStates\@PlacementDirection\@BlockTrait\@\@SAXAEAU123\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
         */
        MCAPI static void
        fromStringVector(struct BlockTrait::PlacementDirection::EnabledStates&, std::vector<std::string> const&);
    };

    class UpdateCardinalGetPlacementBlockCallback {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAIT_PLACEMENTDIRECTION_UPDATECARDINALGETPLACEMENTBLOCKCALLBACK
    public:
        UpdateCardinalGetPlacementBlockCallback& operator=(UpdateCardinalGetPlacementBlockCallback const&) = delete;
        UpdateCardinalGetPlacementBlockCallback(UpdateCardinalGetPlacementBlockCallback const&)            = delete;
        UpdateCardinalGetPlacementBlockCallback()                                                          = delete;
#endif

    public:
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
    };

    class UpdateFacingGetPlacementBlockCallback {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAIT_PLACEMENTDIRECTION_UPDATEFACINGGETPLACEMENTBLOCKCALLBACK
    public:
        UpdateFacingGetPlacementBlockCallback& operator=(UpdateFacingGetPlacementBlockCallback const&) = delete;
        UpdateFacingGetPlacementBlockCallback(UpdateFacingGetPlacementBlockCallback const&)            = delete;
        UpdateFacingGetPlacementBlockCallback()                                                        = delete;
#endif

    public:
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
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTRAIT_PLACEMENTDIRECTION
public:
    PlacementDirection& operator=(PlacementDirection const&) = delete;
    PlacementDirection(PlacementDirection const&)            = delete;
    PlacementDirection()                                     = delete;
#endif

public:
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
};

}; // namespace BlockTrait

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
namespace BlockTrait { class IGetPlacementBlockCallback; }
namespace BlockTrait { class ITrait; }
namespace cereal { struct ReflectionCtx; }
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
        EnabledStates& operator=(EnabledStates const&);
        EnabledStates(EnabledStates const&);
        EnabledStates();

    public:
        // NOLINTBEGIN
        // symbol:
        // ?fromStringVector@EnabledStates@PlacementDirection@BlockTrait@@SAXAEAU123@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
        MCAPI static void fromStringVector(
            struct BlockTrait::PlacementDirection::EnabledStates& instance,
            std::vector<std::string> const&                       states
        );

        // NOLINTEND
    };

    class UpdateCardinalGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateCardinalGetPlacementBlockCallback& operator=(UpdateCardinalGetPlacementBlockCallback const&);
        UpdateCardinalGetPlacementBlockCallback(UpdateCardinalGetPlacementBlockCallback const&);
        UpdateCardinalGetPlacementBlockCallback();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1UpdateCardinalGetPlacementBlockCallback@PlacementDirection@BlockTrait@@UEAA@XZ
        virtual ~UpdateCardinalGetPlacementBlockCallback() = default;

        // vIndex: 1, symbol:
        // ?getPlacementBlock@UpdateCardinalGetPlacementBlockCallback@PlacementDirection@BlockTrait@@UEBA?AV?$not_null@PEBVBlock@@@gsl@@V45@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
        virtual gsl::not_null<class Block const*> getPlacementBlock(
            gsl::not_null<class Block const*>,
            class Actor const&,
            class BlockPos const&,
            uchar,
            class Vec3 const&,
            int
        ) const;

        // NOLINTEND
    };

    class UpdateFacingGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateFacingGetPlacementBlockCallback& operator=(UpdateFacingGetPlacementBlockCallback const&);
        UpdateFacingGetPlacementBlockCallback(UpdateFacingGetPlacementBlockCallback const&);
        UpdateFacingGetPlacementBlockCallback();

    public:
        // NOLINTBEGIN
        // vIndex: 0, symbol: __gen_??1UpdateFacingGetPlacementBlockCallback@PlacementDirection@BlockTrait@@UEAA@XZ
        virtual ~UpdateFacingGetPlacementBlockCallback() = default;

        // vIndex: 1, symbol:
        // ?getPlacementBlock@UpdateFacingGetPlacementBlockCallback@PlacementDirection@BlockTrait@@UEBA?AV?$not_null@PEBVBlock@@@gsl@@V45@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
        virtual gsl::not_null<class Block const*> getPlacementBlock(
            gsl::not_null<class Block const*>,
            class Actor const&,
            class BlockPos const&,
            uchar,
            class Vec3 const&,
            int
        ) const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlacementDirection& operator=(PlacementDirection const&);
    PlacementDirection(PlacementDirection const&);
    PlacementDirection();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlacementDirection@BlockTrait@@UEAA@XZ
    virtual ~PlacementDirection();

    // vIndex: 1, symbol: ?applyToBlockLegacy@PlacementDirection@BlockTrait@@UEBAXAEAVBlockLegacy@@@Z
    virtual void applyToBlockLegacy(class BlockLegacy& blockLegacy) const;

    // vIndex: 2, symbol:
    // ?buildNetworkTag@PlacementDirection@BlockTrait@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 3, symbol: ?initializeFromNetwork@PlacementDirection@BlockTrait@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    // symbol: ?setRotationOffset@PlacementDirection@BlockTrait@@QEAAXAEBM@Z
    MCAPI void setRotationOffset(float const& rotation);

    // symbol: ?CardinalDirection@PlacementDirection@BlockTrait@@SA?AV12@M@Z
    MCAPI static class BlockTrait::PlacementDirection CardinalDirection(float);

    // symbol: ?FacingDirection@PlacementDirection@BlockTrait@@SA?AV12@M@Z
    MCAPI static class BlockTrait::PlacementDirection FacingDirection(float);

    // symbol: ?bindType@PlacementDirection@BlockTrait@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol:
    // ?getName@PlacementDirection@BlockTrait@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI static std::string const& getName();

    // NOLINTEND
};

}; // namespace BlockTrait

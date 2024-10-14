#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/traits/block_trait/IGetPlacementBlockCallback.h"
#include "mc/world/level/block/traits/block_trait/ITrait.h"

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
        // vIndex: 0
        virtual ~UpdateCardinalGetPlacementBlockCallback() = default;

        // vIndex: 1
        virtual gsl::not_null<class Block const*> getPlacementBlock(
            gsl::not_null<class Block const*> block,
            class Actor const&                by,
            class BlockPos const&,
            uchar,
            class Vec3 const&,
            int
        ) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI gsl::not_null<class Block const*> getPlacementBlock$(
            gsl::not_null<class Block const*> block,
            class Actor const&                by,
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
        // vIndex: 0
        virtual ~UpdateFacingGetPlacementBlockCallback() = default;

        // vIndex: 1
        virtual gsl::not_null<class Block const*> getPlacementBlock(
            gsl::not_null<class Block const*> block,
            class Actor const&                by,
            class BlockPos const&             pos,
            uchar,
            class Vec3 const&,
            int
        ) const;

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI gsl::not_null<class Block const*> getPlacementBlock$(
            gsl::not_null<class Block const*> block,
            class Actor const&                by,
            class BlockPos const&             pos,
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
    // vIndex: 0
    virtual ~PlacementDirection();

    // vIndex: 1
    virtual void applyToBlockLegacy(class BlockLegacy& blockLegacy) const;

    // vIndex: 2
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 3
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    MCAPI void setRotationOffset(float const& rotation);

    MCAPI static class BlockTrait::PlacementDirection CardinalDirection(float);

    MCAPI static class BlockTrait::PlacementDirection FacingDirection(float);

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static std::string const& getName();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI void applyToBlockLegacy$(class BlockLegacy& blockLegacy) const;

    MCAPI std::unique_ptr<class CompoundTag> buildNetworkTag$() const;

    MCAPI void initializeFromNetwork$(class CompoundTag const& tag);

    // NOLINTEND
};

}; // namespace BlockTrait

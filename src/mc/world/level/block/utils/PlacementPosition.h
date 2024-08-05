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

class PlacementPosition : public ::BlockTrait::ITrait {
public:
    // PlacementPosition inner types declare
    // clang-format off
    struct EnabledStates;
    class UpdateBlockFaceGetPlacementBlockCallback;
    class UpdateVerticalHalfGetPlacementBlockCallback;
    // clang-format on

    // PlacementPosition inner types define
    struct EnabledStates {
    public:
        // prevent constructor by default
        EnabledStates& operator=(EnabledStates const&);
        EnabledStates(EnabledStates const&);
        EnabledStates();

    public:
        // NOLINTBEGIN
        MCAPI static void
        fromStringVector(struct BlockTrait::PlacementPosition::EnabledStates&, std::vector<std::string> const&);

        // NOLINTEND
    };

    class UpdateBlockFaceGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateBlockFaceGetPlacementBlockCallback& operator=(UpdateBlockFaceGetPlacementBlockCallback const&);
        UpdateBlockFaceGetPlacementBlockCallback(UpdateBlockFaceGetPlacementBlockCallback const&);
        UpdateBlockFaceGetPlacementBlockCallback();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~UpdateBlockFaceGetPlacementBlockCallback() = default;

        // vIndex: 1
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

    class UpdateVerticalHalfGetPlacementBlockCallback : public ::BlockTrait::IGetPlacementBlockCallback {
    public:
        // prevent constructor by default
        UpdateVerticalHalfGetPlacementBlockCallback& operator=(UpdateVerticalHalfGetPlacementBlockCallback const&);
        UpdateVerticalHalfGetPlacementBlockCallback(UpdateVerticalHalfGetPlacementBlockCallback const&);
        UpdateVerticalHalfGetPlacementBlockCallback();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~UpdateVerticalHalfGetPlacementBlockCallback() = default;

        // vIndex: 1
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
    PlacementPosition& operator=(PlacementPosition const&);
    PlacementPosition(PlacementPosition const&);
    PlacementPosition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlacementPosition();

    // vIndex: 1
    virtual void applyToBlockLegacy(class BlockLegacy&) const;

    // vIndex: 2
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 3
    virtual void initializeFromNetwork(class CompoundTag const&);

    MCAPI PlacementPosition(bool, bool);

    MCAPI static class BlockTrait::PlacementPosition BlockFace();

    MCAPI static class BlockTrait::PlacementPosition VerticalHalf();

    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    MCAPI static std::string const& getName();

    // NOLINTEND
};

}; // namespace BlockTrait

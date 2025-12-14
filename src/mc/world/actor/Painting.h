#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Motif;
class Packet;
// clang-format on

class Painting : public ::HangingActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Motif const*> mMotif;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;

    virtual int getWidth() const /*override*/;

    virtual int getHeight() const /*override*/;

    virtual void dropItem() /*override*/;

    virtual void remove() /*override*/;

    virtual bool placeHangingEntity(::BlockSource& region, int direction) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ~Painting() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD float $getShadowRadius() const;

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI int $getWidth() const;

    MCAPI int $getHeight() const;

    MCAPI void $dropItem();

    MCAPI void $remove();

    MCAPI bool $placeHangingEntity(::BlockSource& region, int direction);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Motif;
class Packet;
struct ActorDefinitionIdentifier;
// clang-format on

class Painting : public ::HangingActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Motif const*> mMotif;
    // NOLINTEND

public:
    // prevent constructor by default
    Painting();

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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Painting(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

#ifdef LL_PLAT_C
    MCNAPI void clientInitialize(int dir, ::std::string const& motifName);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getShadowRadius() const;

    MCNAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCNAPI int $getWidth() const;

    MCNAPI int $getHeight() const;

    MCNAPI void $dropItem();

    MCNAPI void $remove();

    MCNAPI bool $placeHangingEntity(::BlockSource& region, int direction);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

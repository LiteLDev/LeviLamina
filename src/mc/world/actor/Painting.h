#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class AddActorBasePacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Motif;
struct ActorDefinitionIdentifier;
// clang-format on

class Painting : public ::HangingActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk189c6c;
    // NOLINTEND

public:
    // prevent constructor by default
    Painting& operator=(Painting const&);
    Painting(Painting const&);
    Painting();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket() /*override*/;

    // vIndex: 143
    virtual int getWidth() const /*override*/;

    // vIndex: 144
    virtual int getHeight() const /*override*/;

    // vIndex: 145
    virtual void dropItem() /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 146
    virtual bool placeHangingEntity(::BlockSource& region, int direction) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 8
    virtual ~Painting() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Painting(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI ::Motif const& getCurrentMotif() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getShadowRadius() const;

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

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
    MCAPI static void** $vftable();
    // NOLINTEND
};

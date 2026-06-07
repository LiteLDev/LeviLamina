#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/world/actor/npc/INpcDialogueData.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct NpcComponentDialogueData : public ::INpcDialogueData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mOwner;
    ::ll::TypedStorage<1, 1, bool>             mIsRemoteFire;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    NpcComponentDialogueData();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getDialogueText() const /*override*/;

    virtual ::std::string const& getRawDialogueText() const /*override*/;

    virtual ::std::string const& getNameText() const /*override*/;

    virtual ::std::string const& getNameRawText() const /*override*/;

    virtual ::std::string const& getSceneName() const /*override*/;

    virtual ::npc::ActionContainer* getActionsContainer() /*override*/;

    virtual ::npc::ActionContainer const* getActionsContainer() const /*override*/;

    virtual ::ActorUniqueID getActorUniqueID() /*override*/;

    virtual ::Actor* getActor() /*override*/;

    virtual ::Actor const* getActor() const /*override*/;

    virtual bool isRemoteFire() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI NpcComponentDialogueData(::WeakEntityRef npc, bool isRemoteFire);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::WeakEntityRef npc, bool isRemoteFire);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::string const& $getDialogueText() const;

    MCAPI ::std::string const& $getRawDialogueText() const;

    MCAPI ::std::string const& $getNameText() const;

    MCAPI ::std::string const& $getNameRawText() const;

    MCFOLD ::std::string const& $getSceneName() const;

    MCFOLD ::npc::ActionContainer* $getActionsContainer();

    MCFOLD ::npc::ActionContainer const* $getActionsContainer() const;

    MCFOLD ::ActorUniqueID $getActorUniqueID();

    MCFOLD ::Actor* $getActor();

    MCFOLD ::Actor const* $getActor() const;

    MCFOLD bool $isRemoteFire();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

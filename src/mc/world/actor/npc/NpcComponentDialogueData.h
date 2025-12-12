#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 24> mUnkfdaf47;
    ::ll::UntypedStorage<1, 1>  mUnk4842f9;
    // NOLINTEND

public:
    // prevent constructor by default
    NpcComponentDialogueData& operator=(NpcComponentDialogueData const&);
    NpcComponentDialogueData(NpcComponentDialogueData const&);
    NpcComponentDialogueData();

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

    virtual ~NpcComponentDialogueData() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string const& $getDialogueText() const;

    MCNAPI ::std::string const& $getRawDialogueText() const;

    MCNAPI ::std::string const& $getNameText() const;

    MCNAPI ::std::string const& $getNameRawText() const;

    MCNAPI ::std::string const& $getSceneName() const;

    MCNAPI ::npc::ActionContainer* $getActionsContainer();

    MCNAPI ::npc::ActionContainer const* $getActionsContainer() const;

    MCNAPI ::ActorUniqueID $getActorUniqueID();

    MCNAPI ::Actor* $getActor();

    MCNAPI ::Actor const* $getActor() const;

    MCNAPI bool $isRemoteFire();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

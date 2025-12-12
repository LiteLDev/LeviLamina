#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
namespace npc { struct ActionContainer; }
// clang-format on

struct INpcDialogueData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INpcDialogueData() = default;

    virtual ::std::string const& getDialogueText() const = 0;

    virtual ::std::string const& getRawDialogueText() const;

    virtual ::std::string const& getNameText() const = 0;

    virtual ::std::string const& getNameRawText() const;

    virtual ::std::string const& getSceneName() const = 0;

    virtual ::npc::ActionContainer* getActionsContainer() = 0;

    virtual ::npc::ActionContainer const* getActionsContainer() const = 0;

    virtual ::ActorUniqueID getActorUniqueID() = 0;

    virtual ::Actor* getActor() = 0;

    virtual ::Actor const* getActor() const = 0;

    virtual bool isRemoteFire();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getRawDialogueText() const;

    MCNAPI bool $isRemoteFire();

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& $getNameRawText() const;
#endif


    // NOLINTEND
};

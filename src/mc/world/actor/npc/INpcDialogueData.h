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
    // vIndex: 0
    virtual ~INpcDialogueData() = default;

    // vIndex: 1
    virtual ::std::string const& getDialogueText() const = 0;

    // vIndex: 2
    virtual ::std::string const& getRawDialogueText() const;

    // vIndex: 3
    virtual ::std::string const& getNameText() const = 0;

    // vIndex: 4
    virtual ::std::string const& getNameRawText() const;

    // vIndex: 5
    virtual ::std::string const& getSceneName() const = 0;

    // vIndex: 7
    virtual ::npc::ActionContainer* getActionsContainer() = 0;

    // vIndex: 6
    virtual ::npc::ActionContainer const* getActionsContainer() const = 0;

    // vIndex: 8
    virtual ::ActorUniqueID getActorUniqueID() = 0;

    // vIndex: 10
    virtual ::Actor* getActor() = 0;

    // vIndex: 9
    virtual ::Actor const* getActor() const = 0;

    // vIndex: 11
    virtual bool isRemoteFire();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getRawDialogueText() const;

    MCNAPI bool $isRemoteFire();
    // NOLINTEND
};

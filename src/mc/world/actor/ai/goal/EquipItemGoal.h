#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
class MobEquipmentPacket;
// clang-format on

class EquipItemGoal : public ::Goal {
public:
    // EquipItemGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // EquipItemGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                       mMob;
    ::ll::TypedStorage<4, 16, ::EquipItemGoal::Definition> mDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    EquipItemGoal& operator=(EquipItemGoal const&);
    EquipItemGoal(EquipItemGoal const&);
    EquipItemGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~EquipItemGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _dropItem(::ItemStack const& item) const;

    MCAPI void _sendMobEquipmentPacket(::MobEquipmentPacket packet) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCFOLD bool $canContinueToUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

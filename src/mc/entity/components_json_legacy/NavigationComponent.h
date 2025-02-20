#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/CanJumpIntoNode.h"
#include "mc/world/level/pathfinder/NodeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionDescriptor;
class BlockPos;
class Mob;
class Path;
struct NavigationDescription;
// clang-format on

class NavigationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkccd9b9;
    ::ll::UntypedStorage<1, 1>  mUnk1332a1;
    ::ll::UntypedStorage<1, 1>  mUnkdb0187;
    ::ll::UntypedStorage<1, 1>  mUnk63b384;
    ::ll::UntypedStorage<1, 1>  mUnk57e57d;
    ::ll::UntypedStorage<1, 1>  mUnk2576d4;
    ::ll::UntypedStorage<1, 1>  mUnk219f9d;
    ::ll::UntypedStorage<1, 1>  mUnkaf0b1b;
    ::ll::UntypedStorage<1, 1>  mUnk1be96c;
    ::ll::UntypedStorage<1, 1>  mUnk95547d;
    ::ll::UntypedStorage<1, 1>  mUnk4f905e;
    ::ll::UntypedStorage<1, 1>  mUnkb15a8a;
    ::ll::UntypedStorage<1, 1>  mUnk1bcad1;
    ::ll::UntypedStorage<1, 1>  mUnk1ac181;
    ::ll::UntypedStorage<1, 1>  mUnk4019cb;
    ::ll::UntypedStorage<1, 1>  mUnk55ba8b;
    ::ll::UntypedStorage<1, 1>  mUnk9fdea1;
    ::ll::UntypedStorage<4, 4>  mUnk88f8f0;
    ::ll::UntypedStorage<4, 4>  mUnk171928;
    ::ll::UntypedStorage<4, 4>  mUnk328357;
    ::ll::UntypedStorage<4, 4>  mUnk57ee2b;
    ::ll::UntypedStorage<4, 4>  mUnk75cee8;
    ::ll::UntypedStorage<4, 4>  mUnk30b327;
    ::ll::UntypedStorage<4, 12> mUnk84ff4d;
    ::ll::UntypedStorage<4, 12> mUnkaff12b;
    ::ll::UntypedStorage<8, 24> mUnkd6378d;
    ::ll::UntypedStorage<8, 8>  mUnk9887e2;
    ::ll::UntypedStorage<8, 8>  mUnk433a9e;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationComponent& operator=(NavigationComponent const&);
    NavigationComponent(NavigationComponent const&);
    NavigationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initMultiTypeNavigationComponent(::Mob& entity, ::ActorDefinitionDescriptor& initDescription);

    MCAPI void initializeFromDefinition(::Mob& owner, ::NavigationDescription* description);

    MCAPI ::NodeType isFree(
        ::Mob&            owner,
        ::BlockPos const& lastPathPos,
        ::BlockPos const& testPos,
        ::BlockPos const& size,
        ::CanJumpIntoNode jumpIntoNode
    );

    MCAPI bool moveTo(::Mob& owner, ::std::unique_ptr<::Path> newPath, float speed);

    MCAPI bool moveTo(::Mob& owner, ::Actor& target, float speed);

    MCAPI ::NavigationComponent& operator=(::NavigationComponent&&);

    MCAPI ~NavigationComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

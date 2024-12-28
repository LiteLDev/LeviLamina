#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/monster/Spider.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class CaveSpider : public ::Spider {
public:
    // prevent constructor by default
    CaveSpider& operator=(CaveSpider const&);
    CaveSpider(CaveSpider const&);
    CaveSpider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 183
    virtual float getModelScale() const /*override*/;

    // vIndex: 115
    virtual void getDebugText(::std::vector<::std::string>& outputInfo) /*override*/;

    // vIndex: 8
    virtual ~CaveSpider() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CaveSpider(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getModelScale() const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

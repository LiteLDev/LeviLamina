#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionTrigger;
class Block;
class DefinitionTrigger;
class EventResponse;
class ItemStackBase;
class RenderParams;
struct VariantParameterList;
// clang-format on

struct LegacyItemTriggerHandlerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::Block const*, ::std::string const&, ::RenderParams&)>>
        mBlockEventHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Block const&, ::DefinitionTrigger const&, ::RenderParams&)>>
        mBlockTriggerHandler;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::ItemStackBase&, ::std::string const&, ::RenderParams&)>>
        mItemStackEventHandler;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<void(
            ::Actor&,
            ::ActorDefinitionTrigger const&,
            ::std::vector<::std::pair<::std::string const, ::std::string const>>&,
            ::VariantParameterList const&
        )>>
                                                                                              mActorTriggerHandler;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EventResponse const&, ::RenderParams&)>> mEventResponseHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyItemTriggerHandlerConfig& operator=(LegacyItemTriggerHandlerConfig const&);
    LegacyItemTriggerHandlerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyItemTriggerHandlerConfig(::LegacyItemTriggerHandlerConfig const&);

    MCAPI ~LegacyItemTriggerHandlerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LegacyItemTriggerHandlerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

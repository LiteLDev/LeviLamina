#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"

// auto generated forward declare list
// clang-format off
class Block;
class DefinitionEvent;
class DefinitionTrigger;
class RenderParams;
struct ActorDefinitionEventStackEntry;
// clang-format on

class BlockDeprecatedR16EventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDeprecatedR16EventListenerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockDeprecatedR16EventListenerComponent(
        ::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers
    );

    MCAPI void _executeEvent(
        ::std::string const&                                            eventName,
        ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>& eventStack,
        ::RenderParams&                                                 params
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void executeEvent(::Block const& block, ::std::string const& eventName, ::RenderParams& params);

    MCAPI static bool executeTrigger(::Block const& block, ::DefinitionTrigger const& trigger, ::RenderParams& params);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unordered_map<::std::string, ::DefinitionEvent> const& eventHandlers);
    // NOLINTEND
};

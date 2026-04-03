#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class DefinitionEvent;
class DefinitionTrigger;
class RenderParams;
// clang-format on

class BlockDeprecatedR16EventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DefinitionEvent>> mEventHandlers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _executeEvent(
        ::std::string const&                                                  eventName,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;

    MCAPI void _forceExecuteTrigger(
        ::DefinitionTrigger const&                                            trigger,
        ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack,
        ::RenderParams&                                                       params
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void executeEvent(::Block const& block, ::std::string const& eventName, ::RenderParams& params);

    MCAPI static bool executeTrigger(::Block const& block, ::DefinitionTrigger const& trigger, ::RenderParams& params);
    // NOLINTEND
};

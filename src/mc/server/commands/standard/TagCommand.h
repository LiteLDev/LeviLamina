#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/WildcardCommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

class TagCommand : public ::Command {
public:
    // TagCommand inner types define
    enum class Action : uchar {
        Add    = 0,
        Remove = 1,
        List   = 2,
    };

    using ActorRefList = ::std::vector<::std::reference_wrapper<::Actor>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::TagCommand::Action>                 mAction;
    ::ll::TypedStorage<8, 200, ::WildcardCommandSelector<::Actor>> mSelector;
    ::ll::TypedStorage<8, 32, ::std::string>                       mTagString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    virtual ~TagCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _addTag(::CommandOutput& output, ::std::vector<::std::reference_wrapper<::Actor>> const& selectorResults) const;

    MCAPI ::std::vector<::std::reference_wrapper<::Actor>>
    _getSelectorResults(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void
    _listTags(::CommandOutput& output, ::std::vector<::std::reference_wrapper<::Actor>> const& selectorResults) const;

    MCAPI void
    _removeTag(::CommandOutput& output, ::std::vector<::std::reference_wrapper<::Actor>> const& selectorResults) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setup(::CommandRegistry& registry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

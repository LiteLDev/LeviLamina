#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnkb16b6e;
    ::ll::UntypedStorage<8, 200> mUnk540c84;
    ::ll::UntypedStorage<8, 32>  mUnk40035f;
    // NOLINTEND

public:
    // prevent constructor by default
    TagCommand& operator=(TagCommand const&);
    TagCommand(TagCommand const&);
    TagCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~TagCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _addTag(::CommandOutput& output, ::std::vector<::std::reference_wrapper<::Actor>> const& selectorResults) const;

    MCAPI ::std::vector<::std::reference_wrapper<::Actor>>
    _getSelectorResults(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI ::std::string _getTagWithPercentageFixed() const;

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

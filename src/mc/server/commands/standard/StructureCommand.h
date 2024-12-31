#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class DimensionHeightRange;
// clang-format on

class StructureCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke9991e;
    ::ll::UntypedStorage<1, 1>  mUnkc76918;
    ::ll::UntypedStorage<1, 1>  mUnk13e44e;
    ::ll::UntypedStorage<1, 1>  mUnk2c2649;
    ::ll::UntypedStorage<1, 1>  mUnkcfa2b7;
    ::ll::UntypedStorage<4, 4>  mUnk166000;
    ::ll::UntypedStorage<8, 32> mUnk3a7673;
    ::ll::UntypedStorage<8, 32> mUnk9e031b;
    ::ll::UntypedStorage<4, 16> mUnk664ea0;
    ::ll::UntypedStorage<4, 16> mUnkad9d43;
    ::ll::UntypedStorage<4, 4>  mUnk2b06ac;
    ::ll::UntypedStorage<1, 1>  mUnkf37440;
    ::ll::UntypedStorage<1, 1>  mUnk731542;
    ::ll::UntypedStorage<1, 1>  mUnkfffaf8;
    ::ll::UntypedStorage<1, 1>  mUnk175227;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureCommand& operator=(StructureCommand const&);
    StructureCommand(StructureCommand const&);
    StructureCommand();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;

    // vIndex: 0
    virtual ~StructureCommand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _delete(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI ::std::string _getFullName() const;

    MCAPI bool
    _isValidSize(::BlockPos const& size, ::DimensionHeightRange const& heightRange, ::CommandOutput& output) const;

    MCAPI void _load(::CommandOrigin const& origin, ::CommandOutput& output) const;

    MCAPI void _save(::CommandOrigin const& origin, ::CommandOutput& output) const;
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

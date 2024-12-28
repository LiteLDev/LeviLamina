#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CommandOrigin;
class CompoundTag;
class DataLoadHelper;
class Level;
struct ActorUniqueID;
// clang-format on

class BaseCommandBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4d31b8;
    ::ll::UntypedStorage<8, 24> mUnk358e42;
    ::ll::UntypedStorage<8, 32> mUnk760cd7;
    ::ll::UntypedStorage<8, 32> mUnk9cfeef;
    ::ll::UntypedStorage<8, 8>  mUnk73016a;
    ::ll::UntypedStorage<8, 8>  mUnkfa0b49;
    ::ll::UntypedStorage<4, 4>  mUnkfcac45;
    ::ll::UntypedStorage<4, 4>  mUnkdcb279;
    ::ll::UntypedStorage<4, 4>  mUnk3233c6;
    ::ll::UntypedStorage<1, 1>  mUnk77ad41;
    ::ll::UntypedStorage<1, 1>  mUnk361c50;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseCommandBlock& operator=(BaseCommandBlock const&);
    BaseCommandBlock(BaseCommandBlock const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseCommandBlock();

    MCAPI bool _performCommand(::BlockSource& region, ::CommandOrigin const& origin, bool& markForSaving);

    MCAPI void _setCommand(::BlockSource& region, ::CommandOrigin const& origin, ::std::string const& command);

    MCAPI void compile(::CommandOrigin const& origin, ::Level& level);

    MCAPI ::std::string const& getCommand() const;

    MCAPI ::std::string getLastOutput() const;

    MCAPI ::std::string const& getName() const;

    MCAPI ::std::string const& getRawName() const;

    MCAPI int getSuccessCount() const;

    MCAPI int getTickDelay() const;

    MCAPI bool getTrackOutput() const;

    MCAPI void load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::BaseCommandBlock& operator=(::BaseCommandBlock&&);

    MCAPI bool performCommand(::BlockSource& region, ::ActorUniqueID const& minecartId);

    MCAPI bool performCommand(::BlockSource& region, ::BlockPos const& pos, bool& markForSaving);

    MCAPI bool save(::CompoundTag& tag) const;

    MCAPI void setCommand(::BlockSource& region, ::ActorUniqueID const& entityId, ::std::string const& command);

    MCAPI void setCommand(::BlockSource& region, ::BlockPos const& pos, ::std::string const& command);

    MCAPI void setLastOutput(::std::string const& lastOutput, ::std::vector<::std::string> const& params);

    MCAPI void setName(::std::string const& name);

    MCAPI void setShouldExecuteOnFirstTick(bool shouldExecute);

    MCAPI void setSuccessCount(int successCount);

    MCAPI void setTickDelay(int tickDelay);

    MCAPI void setTrackOutput(bool trackOutput);

    MCAPI bool shouldExecuteOnFirstTick() const;

    MCAPI ~BaseCommandBlock();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DefaultCommandBlockName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

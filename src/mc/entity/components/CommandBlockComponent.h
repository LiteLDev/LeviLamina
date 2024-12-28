#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseCommandBlock;
class CompoundTag;
class DataLoadHelper;
// clang-format on

class CommandBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152> mUnkb08e21;
    ::ll::UntypedStorage<4, 4>   mUnkf0a1f3;
    ::ll::UntypedStorage<1, 1>   mUnk962098;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&);
    CommandBlockComponent(CommandBlockComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockComponent();

    MCAPI CommandBlockComponent(::CommandBlockComponent&&);

    MCAPI void addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI int decrementTickCount();

    MCAPI ::BaseCommandBlock& getBaseCommandBlock();

    MCAPI int getCurrentTickCount() const;

    MCAPI bool getTicking() const;

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void onCommandBlockUpdate(
        ::Actor&             owner,
        ::std::string const& command,
        bool                 trackOutput,
        ::std::string        name,
        int                  tickDelay,
        bool                 executeOnFirstTick
    );

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& entityTag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void resetCurrentTick();

    MCAPI void setLastOutput(::Actor& owner, ::std::string const& lastOutput);

    MCAPI void setTicking(bool ticking);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::CommandBlockComponent&&);
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class CommandBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnkb08e21;
    ::ll::UntypedStorage<4, 4>   mUnkf0a1f3;
    ::ll::UntypedStorage<1, 1>   mUnk962098;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockComponent& operator=(CommandBlockComponent const&);
    CommandBlockComponent(CommandBlockComponent const&);
    CommandBlockComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockComponent(::CommandBlockComponent&&);

    MCAPI void initFromDefinition(::Actor& owner);

    MCAPI void onCommandBlockUpdate(
        ::Actor&                                   owner,
        ::std::string const&                       command,
        bool                                       trackOutput,
        ::Bedrock::Safety::RedactableString const& name,
        int                                        tickDelay,
        bool                                       executeOnFirstTick
    );

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& entityTag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setTrackOutput(::Actor& owner, bool trackOutput);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandBlockComponent&&);
    // NOLINTEND
};

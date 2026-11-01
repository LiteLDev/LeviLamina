#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BaseCommandBlock.h"

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
    ::ll::TypedStorage<8, 192, ::BaseCommandBlock> mBaseCommandBlock;
    ::ll::TypedStorage<4, 4, int>                  mCurrentTickCount;
    ::ll::TypedStorage<1, 1, bool>                 mTicking;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCNAPI void initFromDefinition(::Actor& owner);

    MCNAPI void onCommandBlockUpdate(
        ::Actor&                                   owner,
        ::std::string const&                       command,
        bool                                       trackOutput,
        ::Bedrock::Safety::RedactableString const& name,
        int                                        tickDelay,
        bool                                       executeOnFirstTick
    );

    MCNAPI void
    readAdditionalSaveData(::Actor& owner, ::CompoundTag const& entityTag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void setLastOutput(::Actor& owner, ::std::string const& lastOutput);

#ifdef LL_PLAT_C
    MCNAPI void setTrackOutput(::Actor& owner, bool trackOutput);
#endif
    // NOLINTEND
};

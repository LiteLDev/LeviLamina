#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/block/actor/BaseCommandBlock.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CommandBlock;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class Player;
class ProfanityContext;
class SaveContext;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class CommandBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 192, ::BaseCommandBlock> mBaseCB;
    ::ll::TypedStorage<1, 1, bool>                 mPowered;
    ::ll::TypedStorage<1, 1, bool>                 mConditionMet;
    ::ll::TypedStorage<1, 1, bool>                 mRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedConditionalMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mExecuteFirstTickOnPlace;
    ::ll::TypedStorage<2, 2, ::CommandBlockMode>   mLastPerformedCBMode;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 4
    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 5
    virtual void
    loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 6
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 12
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 25
    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const /*override*/;

    // vIndex: 26
    virtual ::std::string const& getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context
    ) /*override*/;

    // vIndex: 28
    virtual void setCustomName(::Bedrock::Safety::RedactableString const& str) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;

    // vIndex: 46
    virtual bool _playerCanUpdate(::Player const& player) const /*override*/;

    // vIndex: 0
    virtual ~CommandBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandBlockActor(::BlockPos const& pos, ::CommandBlockMode mode);

    MCNAPI void _setAutomatic(::BlockSource& region, bool alwaysActive, ::CommandBlockMode currentMode);

    MCNAPI ::CommandBlock const* getCommandBlock(::BlockSource& region) const;

    MCNAPI bool getConditionalMode(::BlockSource& region) const;

    MCNAPI bool markConditionMet(::BlockSource& region);

    MCNAPI void markForSaving(::BlockSource& region);

    MCNAPI void markForSaving(::BlockSource& region, int oldSuccessCount, bool oldConditionMet);

    MCNAPI bool performCommand(::BlockSource& region);

    MCNAPI void updateBlock(
        ::BlockSource&                             region,
        ::std::string const&                       cmd,
        ::Bedrock::Safety::RedactableString const& name,
        ::CommandBlockMode                         newMode,
        bool                                       isConditional,
        bool                                       redstoneMode,
        bool                                       trackOutput,
        int                                        tickDelay,
        bool                                       executeFirstTick
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos, ::CommandBlockMode mode);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $onCustomTagLoadDone(::BlockSource& region);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCNAPI ::std::string const& $getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const& context
    );

    MCNAPI void $setCustomName(::Bedrock::Safety::RedactableString const& str);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);

    MCNAPI bool $_playerCanUpdate(::Player const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BaseCommandBlock;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CommandBlock;
class CompoundTag;
class DataLoadHelper;
class Level;
class Player;
class SaveContext;
class UIProfanityContext;
// clang-format on

class CommandBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::BaseCommandBlock> mBaseCB;
    ::ll::TypedStorage<1, 1, bool>                 mPowered;
    ::ll::TypedStorage<1, 1, bool>                 mConditionMet;
    ::ll::TypedStorage<1, 1, bool>                 mRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedConditionalMode;
    ::ll::TypedStorage<1, 1, bool>                 mLastPerformedRedstoneMode;
    ::ll::TypedStorage<1, 1, bool>                 mExecuteFirstTickOnPlace;
    ::ll::TypedStorage<2, 2, ::CommandBlockMode>   mLastPerformedCBMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 4
    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 5
    virtual void
    loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 6
    virtual void onCustomTagLoadDone(::BlockSource& region) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 24
    virtual ::std::string const& getCustomName() const /*override*/;

    // vIndex: 25
    virtual ::std::string const&
    getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> const& context) /*override*/;

    // vIndex: 27
    virtual void setCustomName(::std::string const& name) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual bool _playerCanUpdate(::Player const& player) const /*override*/;

    // vIndex: 0
    virtual ~CommandBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockActor(::BlockPos const& pos, ::CommandBlockMode mode);

    MCAPI void _setAutomatic(::BlockSource& region, bool alwaysActive, ::CommandBlockMode currentMode);

    MCFOLD ::BaseCommandBlock& getBaseCommandBlock();

    MCAPI ::std::string const& getCommand() const;

    MCAPI ::CommandBlock const* getCommandBlock(::BlockSource& region) const;

    MCAPI bool getConditionalMode(::BlockSource& region) const;

    MCAPI int getDelayOnActivation() const;

    MCAPI ::CommandBlockMode getMode(::BlockSource& region) const;

    MCAPI bool getPowered() const;

    MCAPI int getSuccessCount() const;

    MCAPI int getTickDelay() const;

    MCAPI bool isAutomatic() const;

    MCAPI bool markConditionMet(::BlockSource& region);

    MCAPI void markForSaving(::BlockSource& region);

    MCAPI void markForSaving(::BlockSource& region, int oldSuccessCount, bool oldConditionMet);

    MCAPI bool performCommand(::BlockSource& region);

    MCAPI void setPowered(bool powered);

    MCAPI void setSuccessCount(int successCount);

    MCAPI void updateBlock(
        ::BlockSource&       region,
        ::std::string const& cmd,
        ::std::string const& name,
        ::CommandBlockMode   newMode,
        bool                 isConditional,
        bool                 redstoneMode,
        bool                 trackOutput,
        int                  tickDelay,
        bool                 executeFirstTick
    );

    MCAPI bool wasConditionMet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, ::CommandBlockMode mode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onCustomTagLoadDone(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource& region);

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI ::std::string const& $getCustomName() const;

    MCAPI ::std::string const& $getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> const& context
    );

    MCAPI void $setCustomName(::std::string const& name);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);

    MCAPI bool $_playerCanUpdate(::Player const& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

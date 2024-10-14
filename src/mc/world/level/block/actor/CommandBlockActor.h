#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/CommandBlockMode.h"
#include "mc/world/level/block/actor/BlockActor.h"

class CommandBlockActor : public ::BlockActor {
public:
    // prevent constructor by default
    CommandBlockActor& operator=(CommandBlockActor const&);
    CommandBlockActor(CommandBlockActor const&);
    CommandBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CommandBlockActor() = default;

    // vIndex: 1
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 4
    virtual void saveBlockData(class CompoundTag& tag, class BlockSource& region) const;

    // vIndex: 5
    virtual void
    loadBlockData(class CompoundTag const& tag, class BlockSource& region, class DataLoadHelper& dataLoadHelper);

    // vIndex: 6
    virtual void onCustomTagLoadDone(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource& region);

    // vIndex: 11
    virtual void onPlace(class BlockSource& region);

    // vIndex: 24
    virtual std::string const& getCustomName() const;

    // vIndex: 25
    virtual std::string const&
    getFilteredCustomName(Bedrock::NotNullNonOwnerPtr<class UIProfanityContext> const& context);

    // vIndex: 27
    virtual void setCustomName(std::string const& str);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& tag, class BlockSource& region);

    // vIndex: 42
    virtual bool _playerCanUpdate(class Player const& player) const;

    MCAPI class BaseCommandBlock& getBaseCommandBlock();

    MCAPI std::string const& getCommand() const;

    MCAPI class CommandBlock const* getCommandBlock(class BlockSource& region) const;

    MCAPI bool getConditionalMode(class BlockSource& region) const;

    MCAPI int getDelayOnActivation() const;

    MCAPI ::CommandBlockMode getMode(class BlockSource& region) const;

    MCAPI bool getPowered() const;

    MCAPI int getSuccessCount() const;

    MCAPI int getTickDelay() const;

    MCAPI bool isAutomatic() const;

    MCAPI bool markConditionMet(class BlockSource& region);

    MCAPI void markForSaving(class BlockSource& region);

    MCAPI void markForSaving(class BlockSource& region, int oldSuccessCount, bool oldConditionMet);

    MCAPI bool performCommand(class BlockSource& region);

    MCAPI void setPowered(bool powered);

    MCAPI void setSuccessCount(int successCount);

    MCAPI void updateBlock(
        class BlockSource& region,
        std::string const& cmd,
        std::string const& name,
        ::CommandBlockMode newMode,
        bool               isConditional,
        bool               redstoneMode,
        bool               trackOutput,
        int                tickDelay,
        bool               executeFirstTick
    );

    MCAPI bool wasConditionMet();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _setAutomatic(class BlockSource& region, bool alwaysActive, ::CommandBlockMode currentMode);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource& region);

    MCAPI void _onUpdatePacket$(class CompoundTag const& tag, class BlockSource& region);

    MCAPI bool _playerCanUpdate$(class Player const& player) const;

    MCAPI std::string const& getCustomName$() const;

    MCAPI std::string const& getFilteredCustomName$(Bedrock::NotNullNonOwnerPtr<class UIProfanityContext> const& context
    );

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void
    loadBlockData$(class CompoundTag const& tag, class BlockSource& region, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI void onCustomTagLoadDone$(class BlockSource& region);

    MCAPI void onPlace$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void saveBlockData$(class CompoundTag& tag, class BlockSource& region) const;

    MCAPI void setCustomName$(std::string const& str);

    // NOLINTEND
};

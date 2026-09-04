#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockActorDynamicPropertiesComponent;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class IVanillaMainBlockActorComponent;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
class LevelChunk;
class Player;
class SaveContext;
// clang-format on

class BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                                               mPosition;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                                    mType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockActorDynamicPropertiesComponent>> mDynamicProperties;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActor() = default;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    virtual void loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    virtual void onCustomTagLoadDone(::BlockSource& region);

    virtual void loadStatic();

    virtual void onPlace(::BlockSource& region);

    virtual void onMove();

    virtual void onRemoved(::BlockSource& region);

    virtual void onChunkLoaded(::LevelChunk& lc);

    virtual void onChunkUnloaded(::LevelChunk& lc);

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    virtual void triggerEvent(int b0, int b1);

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region);

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    virtual bool _playerCanUpdate(::Player const& player) const;

    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const;

    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent();

    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const;

    virtual ::IVanillaTickBlockActorComponent* _getTickComponent();

    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const;

    virtual ::IVanillaMainBlockActorComponent* _getMainComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockActor* _getBlockActor(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static ::std::shared_ptr<::BlockActor> loadStatic(
        ::BlockType const&   block,
        ::BlockPos const&    pos,
        ::ILevel&            level,
        ::CompoundTag const& tag,
        ::DataLoadHelper&    dataLoadHelper
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& KEY_VERSION();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& context) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    MCFOLD void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void $onCustomTagLoadDone(::BlockSource& region);

    MCFOLD void $loadStatic();

    MCFOLD void $onPlace(::BlockSource& region);

    MCFOLD void $onMove();

    MCFOLD void $onRemoved(::BlockSource& region);

    MCFOLD void $onChunkLoaded(::LevelChunk& lc);

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);

    MCFOLD void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCFOLD void $triggerEvent(int b0, int b1);

    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCFOLD bool $_playerCanUpdate(::Player const& player) const;

    MCFOLD ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;

    MCFOLD ::IVanillaRenderBlockActorComponent* $_getRenderComponent();

    MCFOLD ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;

    MCFOLD ::IVanillaTickBlockActorComponent* $_getTickComponent();

    MCFOLD ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;

    MCFOLD ::IVanillaMainBlockActorComponent* $_getMainComponent();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

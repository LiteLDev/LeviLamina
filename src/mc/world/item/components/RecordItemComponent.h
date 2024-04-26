#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/events/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct RecordItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent {
public:
    // prevent constructor by default
    RecordItemComponent& operator=(RecordItemComponent const&);
    RecordItemComponent(RecordItemComponent const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RecordItemComponent@@UEAA@XZ
    virtual ~RecordItemComponent() = default;

    // vIndex: 1, symbol: ?checkComponentDataForContentErrors@ItemComponent@@UEBA_NXZ
    virtual bool checkComponentDataForContentErrors() const;

    // vIndex: 2, symbol: ?writeSettings@ItemComponent@@UEAAXXZ
    virtual void writeSettings();

    // vIndex: 3, symbol: ?isNetworkComponent@ItemComponent@@UEBA_NXZ
    virtual bool isNetworkComponent() const;

    // vIndex: 4, symbol:
    // ?buildNetworkTag@?$NetworkedItemComponent@VRecordItemComponent@@@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBUReflectionCtx@cereal@@@Z
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag(struct cereal::ReflectionCtx const&) const;

    // vIndex: 5, symbol:
    // ?initializeFromNetwork@?$NetworkedItemComponent@VRecordItemComponent@@@@UEAA_NAEBVCompoundTag@@AEBUReflectionCtx@cereal@@@Z
    virtual bool initializeFromNetwork(class CompoundTag const&, struct cereal::ReflectionCtx const&);

    // vIndex: 6, symbol: ?handleVersionBasedInitialization@ItemComponent@@UEAAXAEBVSemVersion@@@Z
    virtual void handleVersionBasedInitialization(class SemVersion const&);

    // vIndex: 7, symbol: ?_canUseOn@ItemComponent@@MEBA_NAEBVItemStack@@AEAVActor@@AEBVBlockPos@@E@Z
    virtual bool _canUseOn(class ItemStack const&, class Actor&, class BlockPos const&, uchar) const;

    // vIndex: 8, symbol: ?_useOn@ItemComponent@@MEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    virtual bool _useOn(class ItemStack&, class Actor&, class BlockPos const&, uchar, class Vec3 const&) const;

    // vIndex: 9, symbol: ?_initializeComponent@ItemComponent@@MEAAXXZ
    virtual void _initializeComponent();

    // symbol: ??0RecordItemComponent@@QEAA@XZ
    MCAPI RecordItemComponent();

    // symbol: ??0RecordItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit RecordItemComponent(struct Puv::v1_20_50::RecordItemComponent);

    // symbol: ??0RecordItemComponent@@QEAA@W4LevelSoundEvent@Legacy@Puv@@MH@Z
    MCAPI RecordItemComponent(::Puv::Legacy::LevelSoundEvent, float, int);

    // symbol:
    // ?appendFormattedHovertext@RecordItemComponent@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void appendFormattedHovertext(std::string& hovertext) const;

    // symbol: ?getComparatorSignal@RecordItemComponent@@QEBAHXZ
    MCAPI int getComparatorSignal() const;

    // symbol: ?getDuration@RecordItemComponent@@QEBAMXZ
    MCAPI float getDuration() const;

    // symbol:
    // ?getRecordDescription@RecordItemComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRecordDescription() const;

    // symbol: ?getSound@RecordItemComponent@@QEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    MCAPI ::Puv::Legacy::LevelSoundEvent getSound() const;

    // symbol:
    // ?bindType@RecordItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@RecordItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol:
    // ?getRecordNameNoPrefix@RecordItemComponent@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@Legacy@Puv@@@Z
    MCAPI static std::string getRecordNameNoPrefix(::Puv::Legacy::LevelSoundEvent);

    // NOLINTEND
};

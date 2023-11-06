#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/events/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RecordItemComponent {
public:
    // prevent constructor by default
    RecordItemComponent& operator=(RecordItemComponent const&);
    RecordItemComponent(RecordItemComponent const&);
    RecordItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~RecordItemComponent() = default;

    // symbol: ??0RecordItemComponent@@QEAA@W4LevelSoundEvent@@MH@Z
    MCAPI RecordItemComponent(::LevelSoundEvent, float, int);

    // symbol:
    // ?appendFormattedHovertext@RecordItemComponent@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void appendFormattedHovertext(std::string&) const;

    // symbol: ?getComparatorSignal@RecordItemComponent@@QEBAHXZ
    MCAPI int getComparatorSignal() const;

    // symbol: ?getDuration@RecordItemComponent@@QEBAMXZ
    MCAPI float getDuration() const;

    // symbol:
    // ?getRecordDescription@RecordItemComponent@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRecordDescription() const;

    // symbol: ?getSound@RecordItemComponent@@QEBA?AW4LevelSoundEvent@@XZ
    MCAPI ::LevelSoundEvent getSound() const;

    // symbol:
    // ?bindType@RecordItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@RecordItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol:
    // ?getRecordNameNoPrefix@RecordItemComponent@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4LevelSoundEvent@@@Z
    MCAPI static std::string getRecordNameNoPrefix(::LevelSoundEvent);

    // NOLINTEND
};

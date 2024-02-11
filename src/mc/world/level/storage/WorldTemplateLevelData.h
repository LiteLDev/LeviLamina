#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateLevelData {
public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
    // NOLINTBEGIN
    // symbol: ??0WorldTemplateLevelData@@QEAA@XZ
    MCAPI WorldTemplateLevelData();

    // symbol: ??0WorldTemplateLevelData@@QEAA@_N0AEBVBaseGameVersion@@1@Z
    MCAPI
    WorldTemplateLevelData(bool isFromWorldTemplate, bool isWorldTemplateOptionLocked, class BaseGameVersion const& baseGameVersion, class BaseGameVersion const&);

    // symbol: ?getBaseGameVersion@WorldTemplateLevelData@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    // symbol: ?getContentIdentity@WorldTemplateLevelData@@QEBAAEBVContentIdentity@@XZ
    MCAPI class ContentIdentity const& getContentIdentity() const;

    // symbol: ?getTagData@WorldTemplateLevelData@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void getTagData(class CompoundTag const& tag);

    // symbol: ?getWorldTemplateIdentity@WorldTemplateLevelData@@QEBAAEBUPackIdVersion@@XZ
    MCAPI struct PackIdVersion const& getWorldTemplateIdentity() const;

    // symbol: ?isFromWorldTemplate@WorldTemplateLevelData@@QEBA_NXZ
    MCAPI bool isFromWorldTemplate() const;

    // symbol: ?isWorldTemplateOptionLocked@WorldTemplateLevelData@@QEBA_NXZ
    MCAPI bool isWorldTemplateOptionLocked() const;

    // symbol: ?setBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
    MCAPI void setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    // symbol: ?setContentIdentity@WorldTemplateLevelData@@QEAAXAEBVContentIdentity@@@Z
    MCAPI void setContentIdentity(class ContentIdentity const& contentIdentity);

    // symbol: ?setIsWorldTemplateOptionLocked@WorldTemplateLevelData@@QEAAX_N@Z
    MCAPI void setIsWorldTemplateOptionLocked(bool isWorldTemplateOptionLocked);

    // symbol: ?setMaxBaseGameVersion@WorldTemplateLevelData@@QEAAXAEBVBaseGameVersion@@@Z
    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?setTagData@WorldTemplateLevelData@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void setTagData(class CompoundTag& tag) const;

    // symbol: ?setWorldTemplateIdentity@WorldTemplateLevelData@@QEAAXAEBUPackIdVersion@@@Z
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const& identity);

    // symbol: ??1WorldTemplateLevelData@@QEAA@XZ
    MCAPI ~WorldTemplateLevelData();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getTagData@WorldTemplateLevelData@@IEAAXAEBVCompoundTag@@@Z
    MCAPI void _getTagData(class CompoundTag const& tag);

    // symbol: ?_setTagData@WorldTemplateLevelData@@IEBAXAEAVCompoundTag@@@Z
    MCAPI void _setTagData(class CompoundTag& tag) const;

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplateLevelData {
public:
    // prevent constructor by default
    WorldTemplateLevelData& operator=(WorldTemplateLevelData const&);
    WorldTemplateLevelData(WorldTemplateLevelData const&);

public:
    // NOLINTBEGIN
    MCAPI WorldTemplateLevelData();

    MCAPI WorldTemplateLevelData(
        bool                         isFromWorldTemplate,
        bool                         isWorldTemplateOptionLocked,
        class BaseGameVersion const& baseGameVersion,
        class BaseGameVersion const& maxBaseGameVersion
    );

    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    MCAPI class ContentIdentity const& getContentIdentity() const;

    MCAPI void getTagData(class CompoundTag const& tag);

    MCAPI struct PackIdVersion const& getWorldTemplateIdentity() const;

    MCAPI bool isFromWorldTemplate() const;

    MCAPI bool isWorldTemplateOptionLocked() const;

    MCAPI void setBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    MCAPI void setContentIdentity(class ContentIdentity const& contentIdentity);

    MCAPI void setIsWorldTemplateOptionLocked(bool isWorldTemplateOptionLocked);

    MCAPI void setMaxBaseGameVersion(class BaseGameVersion const& maxBaseGameVersion);

    MCAPI void setTagData(class CompoundTag& tag) const;

    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const& identity);

    MCAPI ~WorldTemplateLevelData();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _getTagData(class CompoundTag const& tag);

    MCAPI void _setTagData(class CompoundTag& tag) const;

    // NOLINTEND
};

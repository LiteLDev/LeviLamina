#pragma once

#include "../Core/ContentIdentity.h"
#include "../Core/PackIdVersion.h"
#include "../Core/SemVersion.h"

class WorldTemplateLevelData {
public:
    ContentIdentity mContentIdentity;
    PackIdVersion   mPackIdVersion;
    SemVersion      mBaseGameVersion;
    bool            mFromWorldTemplate;
    bool            mWorldTemplateOptionLocked;
};
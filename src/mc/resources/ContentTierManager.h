#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IContentTierManager.h"

class ContentTierManager : public ::IContentTierManager {
public:
    // prevent constructor by default
    ContentTierManager& operator=(ContentTierManager const&);
    ContentTierManager(ContentTierManager const&);
    ContentTierManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ContentTierManager@@UEAA@XZ
    virtual ~ContentTierManager();

    // vIndex: 1, symbol: ?getContentTierInfo@ContentTierManager@@UEBA?AVContentTierInfo@@XZ
    virtual class ContentTierInfo getContentTierInfo() const;

    // symbol: ??0ContentTierManager@@QEAA@V?$function@$$A6A_NXZ@std@@@Z
    MCAPI explicit ContentTierManager(std::function<bool()>);

    // NOLINTEND
};

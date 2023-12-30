#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackSourceReport {
public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PackSourceReport@@QEAA@XZ
    MCAPI PackSourceReport();

    // symbol: ??0PackSourceReport@@QEAA@AEBV0@@Z
    MCAPI PackSourceReport(class PackSourceReport const&);

    // symbol: ?addReport@PackSourceReport@@QEAAXAEBUPackIdVersion@@$$QEAVPackReport@@@Z
    MCAPI void addReport(struct PackIdVersion const& packId, class PackReport&& report);

    // symbol:
    // ?getReports@PackSourceReport@@QEBAAEBV?$unordered_map@UPackIdVersion@@VPackReport@@U?$hash@UPackIdVersion@@@std@@U?$equal_to@UPackIdVersion@@@4@V?$allocator@U?$pair@$$CBUPackIdVersion@@VPackReport@@@std@@@4@@std@@XZ
    MCAPI std::unordered_map<struct PackIdVersion, class PackReport> const& getReports() const;

    // symbol: ?hasErrors@PackSourceReport@@QEBA_NXZ
    MCAPI bool hasErrors() const;

    // symbol: ??1PackSourceReport@@QEAA@XZ
    MCAPI ~PackSourceReport();

    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/StatsReport.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class StatsCollection {
public:
    // prevent constructor by default
    StatsCollection& operator=(StatsCollection const&);
    StatsCollection(StatsCollection const&);

public:
    // NOLINTBEGIN
    // symbol:
    // ?Find@StatsCollection@webrtc@@QEAAPEAVStatsReport@2@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI class webrtc::StatsReport* Find(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol:
    // ?FindOrAddNew@StatsCollection@webrtc@@QEAAPEAVStatsReport@2@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI class webrtc::StatsReport* FindOrAddNew(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol:
    // ?InsertNew@StatsCollection@webrtc@@QEAAPEAVStatsReport@2@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI class webrtc::StatsReport* InsertNew(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol:
    // ?ReplaceOrAddNew@StatsCollection@webrtc@@QEAAPEAVStatsReport@2@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@@Z
    MCAPI class webrtc::StatsReport*
    ReplaceOrAddNew(class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&);

    // symbol: ??0StatsCollection@webrtc@@QEAA@XZ
    MCAPI StatsCollection();

    // symbol:
    // ?begin@StatsCollection@webrtc@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVStatsReport@webrtc@@@std@@@std@@@std@@XZ
    MCAPI std::_List_const_iterator<std::_List_val<std::_List_simple_types<class webrtc::StatsReport*>>> begin() const;

    // symbol:
    // ?end@StatsCollection@webrtc@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVStatsReport@webrtc@@@std@@@std@@@std@@XZ
    MCAPI std::_List_const_iterator<std::_List_val<std::_List_simple_types<class webrtc::StatsReport*>>> end() const;

    // symbol: ?size@StatsCollection@webrtc@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1StatsCollection@webrtc@@QEAA@XZ
    MCAPI ~StatsCollection();

    // NOLINTEND
};

}; // namespace webrtc
